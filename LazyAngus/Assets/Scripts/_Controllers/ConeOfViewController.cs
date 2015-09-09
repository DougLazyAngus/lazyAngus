using UnityEngine;
using System.Collections;

public class ConeOfViewController : MonoBehaviour {
	public ConeOfViewRenderer leftCone;
	public ConeOfViewRenderer rightCone;

	public float innerGapHalfAngle = 2;

	public float actualAngleRange { get; private set;}
	
	bool registeredForEvents;

	public static ConeOfViewController instance;
	
	void Awake() {
		instance = this;
		registeredForEvents = false;
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		MaybeUpdateAngleRange ();
		UpdateCones ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
	}
	
	void RegisterForEvents() {
		BoostConfig.instance.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);		
		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			BoostConfig.instance.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}		
	
	void OnBoostUsageChanged(BoostConfig.BoostType newType, 
	                         BoostConfig.BoostType oldType) {
		if (MaybeUpdateAngleRange ()) {
			UpdateCones ();
		}
	}

	bool MaybeUpdateAngleRange() {
		float newAngleRange;

		if (BoostConfig.instance.activeBoost == BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES) {
			newAngleRange = TweakableParams.baseSwipeAngleRange * 
				TweakableParams.goodEyesAngleMultiplier;
		} else {
			newAngleRange = TweakableParams.baseSwipeAngleRange;
		}

		if (newAngleRange != actualAngleRange) {
			actualAngleRange = newAngleRange;
			return true;
		} else {
			return false;
		}		
	}

	void UpdateCones() {
		leftCone.CreateMeshForAngleRange (innerGapHalfAngle, actualAngleRange/2);
		rightCone.CreateMeshForAngleRange (-actualAngleRange/2, -innerGapHalfAngle);
	}
}
