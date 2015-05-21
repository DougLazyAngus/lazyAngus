using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	public GameObject rightPaw;
	public GameObject leftPaw;

	public Material viewMaterial;

	private float swipeAngleRange = 30.0f;

	private Mesh viewMesh;
	private float viewRadius = 10.0f;

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

	}
	
	public void	HandlePlaneTap(RaycastHit hitPoint) {

		Vector3 transformedPoint = transform.InverseTransformPoint (hitPoint.point);

		float angle = Vector3.Angle (Vector3.forward, transformedPoint);
		if (transformedPoint.x < 0) {
			angle = -angle;
		}

		if (angle > swipeAngleRange ) {
			Debug.Log ("Right");
			transform.Rotate (new Vector3(0.0f, angle, 0.0f));
		} else if (angle < -swipeAngleRange) {
			Debug.Log ("Left");
			transform.Rotate (new Vector3(0.0f, angle, 0.0f));
		}
	}
}
