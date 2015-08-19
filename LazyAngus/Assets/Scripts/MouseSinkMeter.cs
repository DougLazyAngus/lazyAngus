using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class HoleMeter : MonoBehaviour {
	public Sprite emptySprite;
	public Sprite fullSprite;
	public Vector3 offset;

	public GameObject meterWidgetPrototype;

	GameObject[] meterWidgetGameObjects;

	private MouseHole mouseHole;

	bool registerdForEvents;

	// Use this for initialization
	void Start () {
		registerdForEvents = false;
	}


	public void TrackHole(MouseHole mh) {
		mouseHole = mh;
		RegisterForEvents ();

		CreateMeterWidgets ();
		UpdateMeterWidgets ();
	}

	void RegisterForEvents() {
		if (!registerdForEvents) {
			registerdForEvents = true;
			mouseHole.MousePopChanged += new MouseHole.MousePopChangedEventHandler (OnMousePopChanged);		
			mouseHole.CapacityChanged += new MouseHole.CapacityChangedEventHandler (OnCapacityChanged);		
		}
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}
	
	void UnregisterForEvents() {
		if (registerdForEvents) {
			registerdForEvents = false;
			mouseHole.MousePopChanged -= new MouseHole.MousePopChangedEventHandler (OnMousePopChanged);		
			mouseHole.CapacityChanged -= new MouseHole.CapacityChangedEventHandler (OnCapacityChanged);		
		}
	}

	void OnCapacityChanged() {
		CreateMeterWidgets ();
		UpdateMeterWidgets ();

		StartCoroutine(TriggerDistortionEffect ());
	}

	IEnumerator TriggerDistortionEffect() {
		yield return new WaitForSeconds (0.25f); 
		for (int i = 0; i < meterWidgetGameObjects.Length; i++) {
			GameObject go = meterWidgetGameObjects[i];
			go.GetComponent<DistortForEffect>().Distort();
		}
	}

	void OnMousePopChanged() {
		UpdateMeterWidgets ();
	}
	
	void CreateMeterWidgets() {
		if (meterWidgetGameObjects != null) {
			for (int i = 0; i < meterWidgetGameObjects.Length; i++) {
				Destroy(meterWidgetGameObjects[i]);
			}
			meterWidgetGameObjects = null;
		}

		meterWidgetGameObjects = new GameObject[mouseHole.GetCapacity()];
		for (int i = 0; i < meterWidgetGameObjects.Length; i++) {
			meterWidgetGameObjects[i] = Instantiate (meterWidgetPrototype, 
			                                         new Vector3 (0, 0, 0),
			                                         Quaternion.identity) as GameObject;	
			meterWidgetGameObjects[i].transform.SetParent (transform);

			meterWidgetGameObjects[i].transform.localScale = new Vector3(1, 1, 1);
			meterWidgetGameObjects[i].transform.localRotation = Quaternion.Euler (0f, 0f, 0f);
			meterWidgetGameObjects[i].transform.localPosition = new Vector3(0f, 0f, 0f);
		}

		RectTransform rt = GetComponent<RectTransform> ();

		Utilities.SpaceHorizontally (rt.rect.width, 
		                             meterWidgetGameObjects, 
		                             0f, 10f);
	}

	void UpdateMeterWidgets() {
		for (int i = 0; i < meterWidgetGameObjects.Length; i++) {
			GameObject go = meterWidgetGameObjects[i];
			Image image = go.GetComponent<Image>();
			Sprite newSprite;
			if (i >= mouseHole.GetPopulation()) {
				newSprite = emptySprite;
			} else {
				newSprite = fullSprite;
			}
			if (newSprite != image.sprite) {
				image.sprite = newSprite;
				go.GetComponent<DistortForEffect>().Distort();
			}
		}
	}
}
