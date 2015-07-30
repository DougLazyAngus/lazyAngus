using UnityEngine;
using System.Collections;

public class ScoreController : MonoBehaviour {
	bool registeredForEvents;

	public GameObject scoreEffectPrototype;
	public GameObject scoreDisplay;


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
		flyingAnimation.Run ();
	}
}
