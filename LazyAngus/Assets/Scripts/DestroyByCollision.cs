using UnityEngine;
using System.Collections;

public class DestroyByCollision : MonoBehaviour {
	public PawController pawController;
	
	void OnTriggerStay(Collider other) {
		if (other.tag != "MouseBall") {
			return;
		}

		MouseMove mouseMove = Utilities.FindComponentInAncestor<MouseMove> (other.gameObject);

		GameController gameController = Utilities.GetGameController ();
		mouseMove.OnKilled ();
		pawController.CountKill (mouseMove);
		gameController.OnMouseKilled (mouseMove);

	}
}
