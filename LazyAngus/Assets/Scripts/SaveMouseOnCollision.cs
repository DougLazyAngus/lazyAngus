using UnityEngine;
using System.Collections;

public class SaveMouseOnCollision : MonoBehaviour {
	public MouseHole mouseHole;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	}

	void OnTriggerEnter(Collider other) {
		if (other.tag != "MouseBall") {
			return;
		}

		MouseMove mouseMove = Utilities.FindComponentInAncestor<MouseMove> (other.gameObject);
		if (!mouseMove) {
			return;
		}

		if (mouseMove.GetMousePhase () != MouseMove.MovementPhaseType.LEAVING_PHASE) {
			return;
		}

		mouseHole.SaveMouse(mouseMove);
	}
}
