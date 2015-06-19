﻿using UnityEngine;
using System.Collections;

public class OnMouseEntersHole : MonoBehaviour {
	public MouseHole mouseHole;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag != "MouseCollider") {
			return;
		}

		MouseMove mouseMove = Utilities.FindComponentInAncestor<MouseMove> (other.gameObject);
		if (!mouseMove) {
			return;
		}

		if (mouseMove.GetMousePhase () != MouseMove.MovementPhaseType.LEAVING_PHASE) {
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