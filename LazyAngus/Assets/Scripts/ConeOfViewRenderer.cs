using UnityEngine;
using System.Collections;

public class ConeOfViewRenderer : MonoBehaviour {
	private Mesh viewMesh;
	public Material viewMaterial;

	public float swipeAngleRange = 45.0f;
	public float viewRadius = 100.0f;
	

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
}
