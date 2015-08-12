using UnityEngine;
using System.Collections;

public class AcceleratingSpinner : MonoBehaviour {
	public float initialAngleVelocityDeg;
	public float angleAccelerationDeg;

	float angleDeg;
	float angleVelocityDeg;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		angleDeg += angleVelocityDeg * Time.deltaTime;
		angleVelocityDeg += angleAccelerationDeg * Time.deltaTime;

		transform.rotation = Quaternion.Euler (0.0f, 0.0f, angleDeg);
	}

	public void Configure(float angleDeg) {
		this.angleDeg = angleDeg;
		angleVelocityDeg = initialAngleVelocityDeg;
	}
}
