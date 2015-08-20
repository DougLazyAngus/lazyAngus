using UnityEngine;
using System.Collections;

public class PawCollider : MonoBehaviour {
	// FIXME(dbanks)
	// This is fugly.
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
			DeadMouseRelay.instance.HandleMouseKill(mouseMove);
			if (pawController) {
				pawController.CountKill();
			}
		}
	}
}
