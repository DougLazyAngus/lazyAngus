using UnityEngine;
using System.Collections;

public class FartPuff : MonoBehaviour {
	Vector3 direction;
	public float velocity = 1f;
	public float scaleVelocity = 1f;

	public float maxRotateDegVeclocity;
	public float minRotateDegVeclocity;

	float rotateDegVelocity;
	float rotationDeg;
	float scale;

	public float initialScale = 0.15f;
	
	public Sprite sprite;

	void Awake() {
		scale = initialScale;
		rotationDeg = Random.Range (0f, 360f);
		rotateDegVelocity = Random.Range (minRotateDegVeclocity, 
		                                  maxRotateDegVeclocity);
		if (Random.Range (0, 2) == 0) {
			rotateDegVelocity *= -1;
		}
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (TimeController.instance.timeState != TimeController.TimeState.PLAYING) {
			return;
		}

		float timeDelta = Time.deltaTime;
		Vector3 change = timeDelta * velocity * direction;
		transform.localPosition += change;

		scale += timeDelta * scaleVelocity;
		transform.localScale = new Vector3 (scale, scale, 1f);

		rotationDeg += timeDelta * rotateDegVelocity;
		transform.rotation = Quaternion.Euler (0.0f, 0.0f, rotationDeg);
	}

	public void SetDirection(Vector3 direction) {
		this.direction = direction;
	}
}
