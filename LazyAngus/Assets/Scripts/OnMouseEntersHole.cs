﻿using UnityEngine;
using System.Collections;

public class OnMouseEntersHole : MonoBehaviour {
	public MouseHole mouseHole;

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag != "MouseCollider") {
			return;
		}

		MouseMove mouseMove = Utilities.FindComponentInAncestor<MouseMove> (other.gameObject);
		if (!mouseMove) {
			return;
		}

		if (mouseMove.GetMousePhase () != MouseConfig.MovementPhaseType.LEAVING_PHASE) {
			return;
		}

		if (mouseMove.isPoisoned) {
			mouseHole.ClearMice();
			mouseMove.OnKilled ();
		} else {
			mouseHole.SaveMouse (mouseMove);
		}
	}
}
