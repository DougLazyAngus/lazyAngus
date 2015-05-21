using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {

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

		if (CheckForClickStart(ref hitPoint)) {
			HandleClickStart (hitPoint);
		}
	}

	bool CheckForClickStart(ref RaycastHit hitPoint) {
		Vector3 clickPosition;
		
		// Detect click and calculate touch position
		bool clickStarted = Utilities.GetClickStarted (out clickPosition);

		if (!clickStarted) {
 			return false;
		}  

		Ray ray = Camera.main.ScreenPointToRay (clickPosition);

		if (Physics.Raycast (ray, out hitPoint, 200.0f, UserInteractionsLayerBitmask)) {
			return true;
		} else {
			return false;
		}
	}

	void HandleClickStart(RaycastHit hitPoint) {
		if (hitPoint.collider.tag == "CatButt") {
			Debug.Log ("Tapped CatButt");
			playerController.HandleTurnClickStart(hitPoint);
		} else if (hitPoint.collider.tag == "Plane") {
			Debug.Log ("Tapped Plane");
			playerController.HandleSlapClickStart(hitPoint);
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
