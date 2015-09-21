using UnityEngine;
using System.Collections;

public class InfoButton : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}


	public void TransitionToInfoPhase() {
		GamePhaseState.instance.TransitionToPhase (GamePhaseState.GamePhaseType.INFO);
	}
}
