using UnityEngine;
using System.Collections;

public class ConeOfViewRenderer : MonoBehaviour {
	private Mesh viewMesh;
	public Material viewMaterial;

	public int numTriangles = 20;

	BoostConfig boostConfig;

	public float actualAngleRange { get; private set;}

	bool registeredForEvents;

	void Awake() {
		registeredForEvents = false;
	}

	// Use this for initialization
	void Start () {
		boostConfig = BoostConfig.instance;

		viewMesh = new Mesh ();
		gameObject.AddComponent<MeshRenderer>();
		gameObject.AddComponent<MeshFilter>().mesh=viewMesh;
		MeshRenderer renderer = gameObject.GetComponent<MeshRenderer> ();
		renderer.material = viewMaterial;

		CreateViewMeshForAngleRange (TweakableParams.baseSwipeAngleRange);
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

	void OnBoostUsageChanged(BoostConfig.BoostType newType, 
	                         BoostConfig.BoostType oldType) {
		if (newType == BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES) {
			CreateViewMeshForAngleRange (TweakableParams.baseSwipeAngleRange * 
			                             TweakableParams.goodEyesAngleMultiplier);
		} else if (oldType == BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES) {
			CreateViewMeshForAngleRange (TweakableParams.baseSwipeAngleRange);
		}
	}

	void CreateViewMeshForAngleRange (float angleRange) {
		actualAngleRange = angleRange;
		Utilities.MakeFanWithAngleRange (ref viewMesh, 
		                                 -angleRange / 2, 
		                                 angleRange / 2, 
		                                 TweakableParams.swipeRadius,
		                                 numTriangles);
	}
	
}
