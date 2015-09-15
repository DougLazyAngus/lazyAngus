using UnityEngine;
using System.Collections;

public class ConeOfViewRenderer : MonoBehaviour {
	private Mesh viewMesh;
	public Material viewMaterial;

	public int numTriangles = 20;

	bool initialized = false;

	// Use this for initialization
	void Start () {	
		EnsureInitialized ();
	}

	void EnsureInitialized() {
		if (initialized) {
			return;
		}
		initialized = true;

		viewMesh = new Mesh ();
		gameObject.AddComponent<MeshRenderer>();
		gameObject.AddComponent<MeshFilter>().mesh=viewMesh;
		MeshRenderer renderer = gameObject.GetComponent<MeshRenderer> ();
		renderer.material = viewMaterial;
	}
	
	public void CreateMeshForAngleRange (float minAngle, float maxAngle) {
		EnsureInitialized ();
		Utilities.MakeFanWithAngleRange (ref viewMesh, 
		                                 minAngle, 
		                                 maxAngle, 
		                                 TweakableParams.swipeRadius,
		                                 numTriangles);
	}
	
}
