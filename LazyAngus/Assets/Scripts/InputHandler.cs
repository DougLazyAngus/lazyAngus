using UnityEngine;
using System.Collections;

public class InputHandler : MonoBehaviour {
	static int UserInteractionsLayerBit = 				(1<<9);
	static int UILayerBit = 							(1<<5);
	

	public Camera worldCamera;
	public Camera uxCamera;
	public GameController gameController;
	public PlayerController playerController;

	public bool isTouchDevice { get; private set; }

	private int UserInteractionsLayerBitmask = (UserInteractionsLayerBit | UILayerBit);


	public static InputHandler instance { get; private set; }

	void Awake() {
		instance = this;
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			isTouchDevice = true;
		} else {
			isTouchDevice = false;
		}
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (gameController.gamePhase != GameController.GamePhaseType.GAME_PHASE_LEVEL_PLAY) {
			return;
		}

		RaycastHit hitPoint = default(RaycastHit);
		
		if (CheckForWorldClickStart(ref hitPoint)) {
			HandleClickStart (hitPoint);
		}
	}

	
	bool CheckForWorldClickStart(ref RaycastHit hitPoint) {
		Vector3 clickPosition;
		
		// Detect click and calculate touch position
		bool clickStarted = GetWorldClickStarted (out clickPosition);
		
		if (!clickStarted) {
			return false;
		}  
		
		Ray worldRay = worldCamera.ScreenPointToRay (clickPosition);
		Ray uxRay = uxCamera.ScreenPointToRay (clickPosition);

		if (Physics.Raycast(uxRay, out hitPoint, 200f, UserInteractionsLayerBitmask)) {
			// Nope, we did not click on the world, we clicked on UX.
			return false;
		}

		if (Physics.Raycast (worldRay, out hitPoint, 200.0f, UserInteractionsLayerBitmask)) {
			return true;
		}

		return false;
	}
	
	void HandleClickStart(RaycastHit hitPoint) {
		if (hitPoint.collider.tag == "CatButt") {
			Debug.Log ("clicked CatButt");
			playerController.HandleDragClickStart(hitPoint);
		} else if (hitPoint.collider.tag == "Plane") {
			Debug.Log ("clicked Plane");
			playerController.HandleSlapClickStart(hitPoint);
		}
	}


	public bool IsPointInWorldCameraScreenSpace(Vector3 clickPosition) {
		if (worldCamera == null) {
			worldCamera = Camera.main;
			GameObject uxCameraObject = GameObject.FindGameObjectWithTag("LevelPlayCanvas");
			uxCamera = uxCameraObject.GetComponent<Camera>();
			
			
		}
		Rect viewportRect = worldCamera.rect;
		float minX, maxX, minY, maxY;
		
		minX = viewportRect.x * Screen.width;
		maxX = (viewportRect.x + viewportRect.width) * Screen.width;
		
		minY = viewportRect.y * Screen.height;
		maxY = (viewportRect.y + viewportRect.height) * Screen.height;
		
		return (clickPosition.x >= minX &&
		        clickPosition.x <= maxX && 
		        clickPosition.y >= minY &&
		        clickPosition.y <= maxY);
	}
	
	public bool GetWorldClickStarted(out Vector3 clickPosition) {
		bool clickStarted;
		if (isTouchDevice) {
			clickStarted = (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Began);
			if (clickStarted) {
				clickPosition = Input.GetTouch (0).position;
			} else {
				clickPosition = Vector3.forward;
			}
		} else {
			clickStarted = (Input.GetMouseButtonDown (0));
			clickPosition = Input.mousePosition;
		}
		
		if (clickStarted) {
			if (!IsPointInWorldCameraScreenSpace (clickPosition)) {
				clickStarted = false;
			}
		}
		
		return clickStarted;
	}
	
	
	public bool GetWorldClickEnded(out Vector3 clickPosition) {
		bool clickEnded;
		if (isTouchDevice) {
			clickEnded = (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Ended);
			if (clickEnded) {
				clickPosition = Input.GetTouch (0).position;
			} else {
				clickPosition = Vector3.forward;
			}
		} else {
			clickEnded = (Input.GetMouseButtonUp (0));
			clickPosition = Input.mousePosition;
		}
		return clickEnded;
	}
	
	public bool GetWorldClickPosition(out Vector3 clickPosition) {
		bool isClicked;
		if (isTouchDevice) {
			isClicked = (Input.touchCount > 0);
			if (isClicked) {
				clickPosition = Input.GetTouch (0).position;
			} else {
				clickPosition = Vector3.forward;
			}
		} else {
			isClicked = (Input.GetMouseButton (0));
			if (isClicked) {
				clickPosition = Input.mousePosition;
			} else {
				clickPosition = Vector3.forward;
			}
		}
		return isClicked;
	}
}
