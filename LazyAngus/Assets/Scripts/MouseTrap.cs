using UnityEngine;
using System.Collections;

public class MouseTrap : MonoBehaviour {
	public GameObject mouseTrapEffectPrototype;
	bool sliding = false;
	float startSlideTime;

	float originalRotation;
	Vector3 originalPosition;
	float targetRotation;
	Vector3 targetPosition;

	public float timeToSlide = 0.5f;

	void Awake() {
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (sliding) {
			float fraction = (Time.time - startSlideTime) / timeToSlide;
			if (fraction >= 1f) {
				fraction = 1f;
			}

			float zAngle = Mathf.Lerp (originalRotation,
			                           targetRotation,
			                           fraction);
			float x = Mathf.Lerp(originalPosition.x, 
			                     targetPosition.x, 
			                     fraction);
			float y = Mathf.Lerp(originalPosition.y, 
			                     targetPosition.y, 
			                     fraction);
			float z = Mathf.Lerp(originalPosition.z, 
			                     targetPosition.z, 
			                     fraction);

			transform.localRotation = Quaternion.Euler (0, 0, zAngle);
			transform.localPosition = new Vector3(x, y, z);

			if (fraction >= 1f) {
				sliding = false;
			}
		}
	}

	public void AnimateOut() {
		DoTrapDestructionFX ();

		Object.Destroy (gameObject);
	}


	public void SlideTo(Vector3 newPosition, float newRotation) {
		targetPosition = newPosition;
		targetRotation = newRotation;
		sliding = true;
		startSlideTime = Time.time;
		originalRotation = transform.localRotation.eulerAngles.z;
		originalPosition = transform.localPosition;
	}

	void DoTrapDestructionFX() {
		SFXPlayer.instance.PlayRandom (SFXPlayer.SFXTypeGroup.MOUSE_TRAP);

		GameObject effectGameObject = Instantiate (mouseTrapEffectPrototype) as GameObject;
		
		FlyingAnimation flyingAnimation = effectGameObject.GetComponent<FlyingAnimation> ();
		flyingAnimation.ConfigureWithViewportPos (transform.position, 
		                                          new Vector3 (0.5f, 0f, 0f));

		flyingAnimation.Run ();
		
		AcceleratingSpinner acceleratingSpinner =
			effectGameObject.GetComponent<AcceleratingSpinner> ();
		acceleratingSpinner.Configure (transform.eulerAngles.z - 
			Camera.main.transform.eulerAngles.z);	
	}
}
