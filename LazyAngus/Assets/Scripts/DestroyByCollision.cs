﻿using UnityEngine;
using System.Collections;

public class DestroyByCollision : MonoBehaviour {
	public PawController pawController;


	void OnTriggerEnter2D(Collider2D other) {
		HandleCollision (other);
	}


	void OnTriggerStay2D(Collider2D other) {
		HandleCollision (other);
	}

	void HandleCollision(Collider2D other) {
		if (other.tag != "MouseCollider") {
			return;
		}

		MouseMove mouseMove = Utilities.FindComponentInAncestor<MouseMove> (other.gameObject);
		if (mouseMove.dead) {
			return;
		}

		if (BoostConfig.instance.activeBoost == BoostConfig.BoostType.BOOST_TYPE_POISON_PAWS) {
			if (!mouseMove.isPoisoned) {
				mouseMove.SetPoisoned();
			}
		} else {
			mouseMove.OnKilled ();
			pawController.CountKill (mouseMove);
			GameController.instance.OnMouseKilled (mouseMove);
		}
	}
}
