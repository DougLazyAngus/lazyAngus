using UnityEngine;
using System.Collections;

public class SlowByCollision : MonoBehaviour {
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

		mouseMove.OnFartedUpon ();
	}
}
