using UnityEngine;
using System.Collections;

public class MouseMove : MonoBehaviour {
	public float angularVelocity;
	public float radius;
	public bool isClockwise;

	private float mouseAngle;

	public float startAngle;
	public float endAngle;

	// Use this for initialization
	void Start () {
		mouseAngle = startAngle;
		PositionByAngle ();
	}



	void PositionByAngle() {
		float x = radius * Mathf.Sin (Mathf.Deg2Rad * mouseAngle);
		float z = radius * Mathf.Cos (Mathf.Deg2Rad * mouseAngle);
		float adjustment = isClockwise ? 90.0f : -90.0f;
		Debug.Log ("adjustment = " + adjustment);
		float finalAngle = (mouseAngle + adjustment + 360.0f) % 360.0f;
		Debug.Log ("finalAngle = " + finalAngle);
		transform.rotation = Quaternion.Euler (0.0f, finalAngle, 0.0f);
		transform.position = new Vector3 (x, 0.0f, z);
	}
	  





	// Update is called once per frame
	void FixedUpdate () {
		float delta = angularVelocity * Time.deltaTime % 360;
		if (isClockwise) {
			mouseAngle = mouseAngle + delta;
		} else {
			mouseAngle = mouseAngle + 360.0f - delta;
		}
		mouseAngle = mouseAngle % 360.0f;
		PositionByAngle ();
	}
}
