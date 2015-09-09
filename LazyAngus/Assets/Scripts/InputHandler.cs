using UnityEngine;
using System.Collections;

public class InputHandler : MonoBehaviour {
	public Camera worldCamera;
	public Camera uxCamera;

	public bool isTouchDevice { get; private set; }

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
		if (!GamePhaseState.instance.IsPlaying ()) {
			return;
		}

		if (TimeController.instance.timeState != TimeController.TimeState.PLAYING) {
			return;
		}

		Vector3 worldPoint = new Vector3(0, 0, 0);
		Collider2D collider = CheckForWorldClickStart (ref worldPoint);
		if (collider != null) {
			HandleClickStart (collider, worldPoint);
		}
	}

	
	Collider2D CheckForWorldClickStart(ref Vector3 worldPoint) {
		Vector3 clickPosition;
		
		// Detect click and calculate touch position
		bool clickStarted = GetWorldClickStarted (out clickPosition);
		
		if (!clickStarted) {
			return null;
		}  


		Vector3 uxPoint = uxCamera.ScreenToWorldPoint (clickPosition);
		if (Physics2D.OverlapPoint (uxPoint, Layers.UserInteractionsLayerBitmask())) {
			// We clicked on ux.
			return null;
		}

		worldPoint = worldCamera.ScreenToWorldPoint (clickPosition);
		Collider2D collider = Physics2D.OverlapPoint (worldPoint, 
		                                              Layers.UserInteractionsLayerBitmask());
		if (collider) {
			return collider;
		}

		return null;
	}
	
	void HandleClickStart(Collider2D collider, Vector3 worldPoint) {
		Vector2 worldPoint2d = worldPoint;
		if (collider.tag == "CatButt") {
			PlayerController.instance.HandleDragClickStart(worldPoint2d);
		} else if (collider.tag == "Plane") {
			PlayerController.instance.HandleSlapClickStart(worldPoint2d);
		}
	}


	public bool IsPointInWorldCameraScreenSpace(Vector3 clickPosition) {
		if (worldCamera == null) {
			worldCamera = Camera.main;
			GameObject uxCameraObject = GameObject.FindGameObjectWithTag("ScalingUXCanvas");
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
