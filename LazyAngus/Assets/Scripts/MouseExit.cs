using UnityEngine;
using System.Collections;

public class MouseExit : MonoBehaviour {
	bool registeredForEvents;
	public int savedMouseCount { get; private set; }
	
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
		GamePhaseState.instance.GameInstanceChanged += new GamePhaseState.GameInstanceChangedEventHandler (OnGameInstanceChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GameInstanceChanged -= new GamePhaseState.GameInstanceChangedEventHandler (OnGameInstanceChanged);
		}
	}

	void OnGameInstanceChanged() {
		savedMouseCount = 0;
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag != "MouseCollider") {
			return;
		}

		MouseMove mouseMove = Utilities.FindComponentInAncestor<MouseMove> (other.gameObject);
		if (!mouseMove) {
			return;
		}

		if (mouseMove.GetMousePhase () != MouseConfig.MovementPhaseType.LEAVING) {
			return;
		}

		savedMouseCount += 1;

		// FIXME(dbanks)
		// Do any kind of SFX around this.
	}
}
