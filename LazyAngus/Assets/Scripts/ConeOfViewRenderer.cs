using UnityEngine;
using System.Collections;

public class ConeOfViewRenderer : MonoBehaviour {
	private Mesh viewMesh;
	public Material viewMaterial;

	public float swipeAngleRange = 90.0f;
	public float viewRadius = 5.0f;
	public int numTriangles = 20;

	// Use this for initialization
	void Start () {
		CreateViewMeshForAngleRange (swipeAngleRange);
	}		
	
	void CreateViewMeshForAngleRange (float angleRange) {
		viewMesh = new Mesh ();
		float angleIncrementDeg = angleRange / numTriangles;

		Vector3[] vertices = new Vector3[numTriangles + 2];

		vertices [0].x = 0f;
		vertices [0].y = 0f;
		vertices [0].z = 0f;

		float angle;
		for (int i = 0; i < numTriangles + 1; i++) {
			angle = -swipeAngleRange / 2 + i * angleIncrementDeg;
			vertices [i + 1].x = Mathf.Sin (Mathf.Deg2Rad * angle) * viewRadius;
			vertices [i + 1].z = Mathf.Cos (Mathf.Deg2Rad * angle) * viewRadius;
			vertices [i + 1].y = 0f;
		}

		int [] triangles = new int[numTriangles * 3];
		for (int i = 0; i < numTriangles; i++) {
			triangles [i * 3] = 0;
			triangles [i * 3 + 1] = i + 1;
			triangles [i * 3 + 2] = i + 2;
		}
			
		viewMesh.vertices = vertices;
		viewMesh.triangles = triangles;

		gameObject.AddComponent<MeshRenderer>();
		gameObject.AddComponent<MeshFilter>().mesh=viewMesh;
		MeshRenderer renderer = gameObject.GetComponent<MeshRenderer> ();
		renderer.material = viewMaterial;
	}
	
}
