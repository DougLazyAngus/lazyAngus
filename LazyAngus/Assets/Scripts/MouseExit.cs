using UnityEngine;
using System.Collections;

public class MouseExit : MonoBehaviour {
	public MouseTrapController mouseHole;

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

		GameController.instance.OnMouseEscaped ();
	}
}
