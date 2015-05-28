using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

	private int score;

	public Text scoreText;
	public Text gameOverText;
	public Button againButton;

	public float startWait = 1.5f;
	public float minSpawnWait = 0.25f;
	public float maxSpawnWait = 1.0f;
	public MouseHole[] mouseHoles;
	
	public GameObject mouse;

	private bool gameOver;

	private PlayerController playerController;

	private int UserInteractionsLayerBitmask = (1 << 9);

	void Awake() {
		Physics.IgnoreLayerCollision (8, 9, true);
	
		againButton.gameObject.SetActive (false);
		gameOverText.gameObject.SetActive (false);
	}

	
	public void RestartGame() {
		Application.LoadLevel (Application.loadedLevel);
	}

	void Start() {
		score = 0;
		gameOver = false;

		UpdateScore ();

		playerController = Utilities.GetPlayerController();

		StartCoroutine(SpawnMice());

	}

	// Update is called once per frame
	void Update () {
		if (!gameOver) {
			HandleUserInput ();
		}
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

	IEnumerator SpawnMice() {
		yield return new WaitForSeconds (startWait);
		
		while (!gameOver) {
			GameObject mouseObject;
			
			mouseObject = Instantiate (mouse, 
			                           new Vector3 (0, 0, 0),
			                           Quaternion.identity) as GameObject;
			MouseMove mouseMove = mouseObject.GetComponent<MouseMove> ();
			mouseMove.RandomizeSetup();
			
			float spawnWait = Random.Range (minSpawnWait, maxSpawnWait);
			yield return new WaitForSeconds (spawnWait);
		}
	}
	

	//------------------------------
	//
	// Score keeping
	//
	//------------------------------
	void UpdateScore() {
		scoreText.text = "Score: " + score;
	}

	void CheckForGameEnd() {
		bool isGameOver = this.IsGameOver ();
		if (isGameOver) {
			HandleGameOver ();
			return;
		}
	}

	void HandleGameOver() {
		gameOver = true;
		gameOverText.gameObject.SetActive (true);
		scoreText.gameObject.SetActive (false);

		againButton.gameObject.SetActive (true);

		gameOverText.text = "Score: " + score;
	}
	
	bool IsGameOver() {
		for (int i = 0; i < 4; i++) {
			if (mouseHoles [i].IsFull()) {
				return true;
			}
		}
		return false;
	}

	//------------------------------------
	// 
	// Public functions
	//
	//------------------------------------
	 public void OnMouseExit(MouseMove mouse) {
		this.CheckForGameEnd ();
	}	

	public void OnMouseKilled(MouseMove mouse) {
		score += 1;
		UpdateScore ();
	}
	
}
