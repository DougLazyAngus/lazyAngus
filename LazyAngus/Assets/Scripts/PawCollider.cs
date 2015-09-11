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

		DeadMouseRelay.instance.HandleMouseKill(mouseMove);

		SFXPlayer.instance.PlayRandom(SFXPlayer.SFXTypeGroup.COMIC_VIOLENCE,
		                              0.3f);

		if (pawController) {
			pawController.CountKill();
		}
	}
}
