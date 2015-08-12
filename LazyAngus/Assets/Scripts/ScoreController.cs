using UnityEngine;
using System.Collections;

public class ScoreController : MonoBehaviour {
	bool registeredForEvents;

	public GameObject scoreEffectPrototype;
	public GameObject scoreDisplay;

	bool scoreEffectClockwise = false;

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();		
	}
	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		DeadMouseRelay.instance.MouseKill +=
			new DeadMouseRelay.MouseKillEventHandler (OnMouseKill);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			DeadMouseRelay.instance.MouseKill -=
				new DeadMouseRelay.MouseKillEventHandler (OnMouseKill);
		}
	}

	void OnMouseKill(MouseMove deadMouse) {
		PlayerStats.instance.IncrementScore ();
		
		MakeScoreEffect(deadMouse);
	}
	
	void MakeScoreEffect(MouseMove deadMouse) {
		GameObject scoreEffectGameObject = Instantiate (scoreEffectPrototype) as GameObject;

		FlyingAnimation flyingAnimation = scoreEffectGameObject.GetComponent<FlyingAnimation> ();
		flyingAnimation.Configure (deadMouse.transform.position, scoreDisplay);

		MouseTypeDesc md = MouseConfig.instance.GetMouseTypeDesc (deadMouse.mouseType);
		flyingAnimation.image.sprite = md.deadMouseSprite;
		float desiredScale = flyingAnimation.transform.localScale.x;
		desiredScale *= deadMouse.transform.localScale.x;

		flyingAnimation.transform.localScale = new Vector3 (desiredScale, desiredScale, 1f);
		flyingAnimation.Run ();

		AcceleratingSpinner acceleratingSpinner = scoreEffectGameObject.GetComponent<AcceleratingSpinner> ();
		acceleratingSpinner.Configure (deadMouse.transform.eulerAngles.z - 
		                               Camera.main.transform.eulerAngles.z);	
		if (scoreEffectClockwise) {
			acceleratingSpinner.initialAngleVelocityDeg *= -1;
			acceleratingSpinner.angleAccelerationDeg *= -1;
		}
		scoreEffectClockwise = !scoreEffectClockwise;
	}
}
