using UnityEngine;
using System.Collections;

public class ConeOfViewRenderer : MonoBehaviour {
	private Mesh viewMesh;
	public Material viewMaterial;

	public int numTriangles = 20;

	TweakableParams tweakableParams;
	BoostConfig boostConfig;

	public float actualAngleRange { get; private set;}

	bool registeredForEvents;

	void Awake() {
		registeredForEvents = false;
	}

	// Use this for initialization
	void Start () {
		tweakableParams = TweakableParams.instance;
		boostConfig = BoostConfig.instance;

		viewMesh = new Mesh ();
		gameObject.AddComponent<MeshRenderer>();
		gameObject.AddComponent<MeshFilter>().mesh=viewMesh;
		MeshRenderer renderer = gameObject.GetComponent<MeshRenderer> ();
		renderer.material = viewMaterial;

		CreateViewMeshForAngleRange (tweakableParams.baseSwipeAngleRange);
		RegisterForEvents ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
	}
	
	void RegisterForEvents() {
		boostConfig.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		
		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			boostConfig.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}		

	void OnBoostUsageChanged() {
		if (boostConfig.activeBoost == BoostConfig.BoostType.BOOST_TYPE_ENERGY) {
			CreateViewMeshForAngleRange (tweakableParams.baseSwipeAngleRange * 
			                             tweakableParams.energyBoostAngleMultiplier);
		} else {
			CreateViewMeshForAngleRange (tweakableParams.baseSwipeAngleRange);
		}
	}

	void CreateViewMeshForAngleRange (float angleRange) {
		actualAngleRange = angleRange;

		float angleIncrementDeg = angleRange / numTriangles;

		Vector3[] vertices = new Vector3[numTriangles + 2];

		vertices [0].x = 0f;
		vertices [0].y = 0f;
		vertices [0].z = 0f;

		float angle;
		for (int i = 0; i < numTriangles + 1; i++) {
			angle = -angleRange / 2 + i * angleIncrementDeg;
			vertices [i + 1].y = Mathf.Sin (Mathf.Deg2Rad * angle) * tweakableParams.swipeRadius;
			vertices [i + 1].x = Mathf.Cos (Mathf.Deg2Rad * angle) * tweakableParams.swipeRadius;
			vertices [i + 1].z = 0f;
		}

		int [] triangles = new int[numTriangles * 3];
		for (int i = 0; i < numTriangles; i++) {
			triangles [i * 3] = 0;
			triangles [i * 3 + 1] = i + 2;
			triangles [i * 3 + 2] = i + 1;
		}
			
		viewMesh.vertices = vertices;
		viewMesh.triangles = triangles;
	}
	
}
