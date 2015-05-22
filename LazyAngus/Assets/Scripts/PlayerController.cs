using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	public Material viewMaterial;

	public GameObject rightPawGameObject;
	public GameObject leftPawGameObject;

	public float swipeAngleRange = 45.0f;
	public float viewRadius = 100.0f;

	private Mesh viewMesh;

	private bool dragging = false;

	// When I start dragging on cat butt, dragAnchor = cat coords of touched
	// point on butt.  Flatten y value to 0.
	private Vector3 dragAnchorCat;
	// When I start dragging on cat butt, dragAngleAngle = angle from 
	// cat fwd (0, 0, 1) to dragAnchorOnCat.
	private float dragAnchorAngleCat;

	// Use this for initialization
	void Start () {
		SetupViewMesh ();
		AdjustViewMesh ();
	}

	void AdjustViewMesh () {
		float x = Mathf.Sin (Mathf.Deg2Rad * swipeAngleRange) * viewRadius;
		float z = Mathf.Cos (Mathf.Deg2Rad * swipeAngleRange) * viewRadius;

		Vector3[] vertices = viewMesh.vertices;
		vertices [1].x = -x;
		vertices [1].z = z;
		vertices [2].x = x;
		vertices [2].z = z;

		Vector2[] uv = viewMesh.uv;
		uv [1].x = -x;
		uv [1].y = z;
		uv [2].x = x;
		uv [2].y = z;

		viewMesh.vertices = vertices;
	}

	void SetupViewMesh () {
		viewMesh = new Mesh ();

		viewMesh.vertices = new Vector3[] {
			new Vector3(0.0f, 0.5f, 0.0f), 
			new Vector3(0.0f, 0.5f, 0.0f), 
			new Vector3(0.0f, 0.5f, 0.0f), 
		};
		viewMesh.uv = new Vector2[] {
			new Vector3(0.0f, 0.0f), 
			new Vector3(0.0f, 0.0f), 
			new Vector3(0.0f, 0.0f), 
		};
		viewMesh.triangles = new int[] { 0,1,2 };
		
		gameObject.AddComponent<MeshRenderer>();
		gameObject.AddComponent<MeshFilter>().mesh=viewMesh;
		MeshRenderer renderer = gameObject.GetComponent<MeshRenderer> ();
		renderer.material = viewMaterial;
	}

	// Update is called once per frame
	void Update () {
		if (dragging) {
			UpdateDrag ();
		}
	}

	void UpdateDrag() {
		Vector3 clickPositionScreen;
		bool isClicked = Utilities.GetClickPosition (out clickPositionScreen);
		if (!isClicked) {
			dragging = false;
			return;
		}

		Debug.Log ("Dragging x:" + clickPositionScreen.x + 
		           " y:" + clickPositionScreen.y);
		Vector3 clickPositionWorld = Camera.main.ScreenToWorldPoint (clickPositionScreen);
		Vector3 clickPositionCat = transform.InverseTransformPoint (clickPositionWorld);


		float clickAngleCat = Utilities.GetYAngle (clickPositionCat);

		transform.Rotate (new Vector3(0.0f, clickAngleCat - dragAnchorAngleCat, 0.0f));
	}

	public void HandleTurnClickStart(RaycastHit hitPoint) {
		dragging = true;

		dragAnchorCat = transform.InverseTransformPoint(hitPoint.point);
		dragAnchorCat.y = 0.0f;
		dragAnchorAngleCat = Utilities.GetYAngle (dragAnchorCat);

		rightPawGameObject.GetComponent<PawController> ().CancelSwipe();
		leftPawGameObject.GetComponent<PawController> ().CancelSwipe();
	}  

	public void	HandleSlapClickStart(RaycastHit hitPoint) {

		Vector3 swipeLocationCat = transform.InverseTransformPoint (hitPoint.point);

		float angle = Utilities.GetYAngle (swipeLocationCat);

		GameObject paw = null;
		if (angle >= 0 && angle <= swipeAngleRange) {
			paw = rightPawGameObject;
		} else if (angle < 0 && angle >= -swipeAngleRange) {
			paw = leftPawGameObject;
		}
		if (paw) {
			paw.GetComponent<PawController>().Swipe (swipeLocationCat);
		}
	}

	void OnApplicationFocus(bool focusStatus) {
		if (!focusStatus) {
			dragging = false;
		}
	}
		
}
		