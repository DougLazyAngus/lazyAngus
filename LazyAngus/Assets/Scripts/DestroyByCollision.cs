using UnityEngine;
using System.Collections;

public class DestroyByCollision : MonoBehaviour {

	void OnTriggerStay(Collider other) {
		if (other.tag != "MouseBall") {
			return;
		}

		GameObject parentGameObject = other.gameObject.transform.parent.gameObject;
		MouseMove mouse = parentGameObject.GetComponent <MouseMove>();

		GameController gameController = Utilities.GetGameController ();
		mouse.OnMouseSwiped ();
		gameController.OnMouseKilled (mouse);
	}
}
