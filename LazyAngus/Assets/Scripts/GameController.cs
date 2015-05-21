using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {

	private bool isTouchDevice = false;
	private int killScore;
	private int exitScore;

	public GUIText killScoreText;
	public GUIText exitScoreText;

	public float startWait = 1.5f;
	public float minSpawnWait = 0.25f;
	public float maxSpawnWait = 1.0f;

	public float minCirclingRadius = 0.3f;
	public float maxCirclingRadius = 4.5f;

	public GameObject mouse;

	private PlayerController playerController;

	private int UserInteractionsLayerBitmask = (1 << 9);

	void Awake() {
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			isTouchDevice = true;
		} else {
			isTouchDevice = false;
		}
	}


	void Start() {
		killScore = exitScore = 0;
		UpdateExitScore ();
		UpdateKillScore ();

		playerController = Utilities.GetPlayerController();

		StartCoroutine(SpawnMice());

	}

	// Update is called once per frame
	void Update () {
		HandleUserInput ();
	}

	void HandleUserInput() {
		RaycastHit hitPoint = default(RaycastHit);

		if (CheckForTap(ref hitPoint)) {
			HandleTap (hitPoint);
		}
	}

	bool CheckForTap(ref RaycastHit hitPoint) {
		bool clickDetected;
		Vector3 touchPosition;
		
		// Detect click and calculate touch position
		if (isTouchDevice) {
			clickDetected = (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began);
			touchPosition = Input.GetTouch(0).position;
		} else {
			clickDetected = (Input.GetMouseButtonDown(0));
			touchPosition = Input.mousePosition;
		}
		
		if (!clickDetected) {
 			return false;
		}

		Ray ray = Camera.main.ScreenPointToRay (touchPosition);

		if (Physics.Raycast (ray, out hitPoint, 200.0f, UserInteractionsLayerBitmask)) {
			return true;
		} else {
			return false;
		}
	}

	void HandleTap(RaycastHit hitPoint) {
		if (hitPoint.collider.tag == "Player") {
			Debug.Log ("Tapped Player");
		} else if (hitPoint.collider.tag == "Plane") {
			Debug.Log ("Tapped Plane");
			playerController.HandlePlaneTap(hitPoint);
		} else {
			Debug.Log ("Tapped something else");
		}
	}

	//------------------------------
	//
	// Score keeping
	//
	//------------------------------
	public void OnMouseExit(MouseMove mouse) {
		exitScore += 1;
		UpdateExitScore ();
	}
	
	public void OnMouseKilled(MouseMove mouse) {
		killScore += 1;
		UpdateKillScore ();
	}
	
	void UpdateExitScore() {
		exitScoreText.text = "Escaped: " + exitScore;
	}
	
	void UpdateKillScore() {
		killScoreText.text = "Killed: " + killScore;
	}


	IEnumerator SpawnMice() {
		yield return new WaitForSeconds (startWait);

		while (true) {
			GameObject mouseObject;

			mouseObject = Instantiate (mouse, 
			                           new Vector3 (0, 0, 0),
			                           Quaternion.identity) as GameObject;
			MouseMove mouseMove = mouseObject.GetComponent<MouseMove> ();

			int entry = Random.Range (0, 4);
			float startAngle = entry * 90.0f;
			mouseMove.startAngle = startAngle;

			int orientation = Random.Range (0, 2);
			mouseMove.isClockwise = (orientation != 0);

			mouseMove.circlingRadius = Random.Range (minCirclingRadius, maxCirclingRadius);

			if (mouseMove.isClockwise) {
				mouseMove.endAngle = mouseMove.startAngle - 30;
			} else {
				mouseMove.endAngle = mouseMove.startAngle + 30;
			}	

			int mtAsInt = Random.Range (0, (int)MouseMove.MouseType.NUM_MOUSE_TYPES);
			MouseMove.MouseType mouseType = (MouseMove.MouseType)mtAsInt;

			mouseMove.SetMouseType(mouseType);
	
			float spawnWait = Random.Range (minSpawnWait, maxSpawnWait);

			yield return new WaitForSeconds (spawnWait);
		}
	}
}
