using UnityEngine;
using System.Collections;

public class ScoreController : MonoBehaviour {
	bool registeredForEvents;

	public GameObject deadMousePrototype;
	public GameObject scoreEffectPrototype;
	public GameObject scoreDisplay;

	bool scoreEffectClockwise;

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

	void OnMouseKill(MouseMove killedMouse) {
		PlayerStats.instance.IncrementScore ();
		
		MakeScoreEffect(killedMouse);
	}

	void OnDeadMouseDone(GameObject deadMouseGameObject) {
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.LEVEL_PLAY || 
			GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.PENDING) {
			MakeFlyingAnimation (deadMouseGameObject);
		}
		Object.Destroy (deadMouseGameObject);
	}

	void MakeFlyingAnimation(GameObject deadMouseGameObject) {
		DeadMouse deadMouse = deadMouseGameObject.GetComponent<DeadMouse> ();
		MouseTypeDesc md = MouseConfig.instance.GetMouseTypeDesc (deadMouse.mouseType);

		GameObject scoreEffectGameObject = Instantiate (scoreEffectPrototype) as GameObject;
		
		FlyingAnimation flyingAnimation = scoreEffectGameObject.GetComponent<FlyingAnimation> ();
		flyingAnimation.Configure (deadMouse.transform.position, scoreDisplay);
		
		flyingAnimation.image.sprite = md.deadMouseSprite;
		float desiredScale = flyingAnimation.transform.localScale.x;
		desiredScale *= md.scale;
		
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

	void MakeScoreEffect(MouseMove killedMouse) {
		GameObject deadMouseGameObject = Instantiate (deadMousePrototype) as GameObject;
		DeadMouse deadMouse = deadMouseGameObject.GetComponent<DeadMouse>();

		deadMouse.Configure(killedMouse);
		DistortForEffect distortForEffect = deadMouse.GetComponent<DistortForEffect> ();

		distortForEffect.SetDistortFinishedHandler (OnDeadMouseDone);
		distortForEffect.Distort ();
	}
}
