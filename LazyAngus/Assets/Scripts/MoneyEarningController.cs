using UnityEngine;
using System.Collections;

public class MoneyEarningController : MonoBehaviour {
	public GameObject moneyEffectPrototype;
	public GameObject moneyDisplay;

	bool registeredForEvents;

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
		DeadMouseRelay.instance.MultiKill +=
			new DeadMouseRelay.MultiKillEventHandler (OnMultiKill);
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			DeadMouseRelay.instance.MultiKill -=
				new DeadMouseRelay.MultiKillEventHandler (OnMultiKill);
		}
	}

	void OnMultiKill(int numKilled, Vector3 pawPosition) {
		if (numKilled < 2) {
			return;
		}

		int moneyEarned = (numKilled - 1) * (numKilled - 1);

		PlayerStats.instance.EarnMoney(moneyEarned);

		MakeMoneyEffect(moneyEarned, pawPosition);
	}

	void MakeMoneyEffect(int moneyEarned, Vector3 pawPosition) {
		GameObject moneyEffectGameObject = Instantiate (moneyEffectPrototype) as GameObject;
		FlyingAnimation flyingAnimation = moneyEffectGameObject.GetComponent<FlyingAnimation> ();
		flyingAnimation.Configure (pawPosition, moneyDisplay);
		flyingAnimation.Run ();

		// SFX too.
		SFXPlayer.instance.Play (SFXPlayer.SFXType.EARN_MONEY);
	}
}
