using UnityEngine;
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

		mouseMove.OnKilled ();
		pawController.CountKill (mouseMove);
		GameController.instance.OnMouseKilled (mouseMove);
	}
}
