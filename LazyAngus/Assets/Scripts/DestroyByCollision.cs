using UnityEngine;
using System.Collections;

public class DestroyByCollision : MonoBehaviour {
	public PawController pawController;


	void OnTriggerStay(Collider other) {
		if (other.tag != "MouseBall") {
			return;
		}

		MouseMove mouseMove = Utilities.FindComponentInAncestor<MouseMove> (other.gameObject);

		mouseMove.OnKilled ();
		pawController.CountKill (mouseMove);
		GameController.instance.OnMouseKilled (mouseMove);

	}
}
