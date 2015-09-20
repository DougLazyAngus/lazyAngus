using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class RealAngusButton : MonoBehaviour  {
	public GameObject newLabel;
	public RectTransform realAngusImageRectTransform;
	public RectTransform rectTransform;

	bool registeredForEvents;
	float startTime;
	float myHeight;
	float myWidth;

	public float waitingTime = 2;
	public float risingTime = 2;
	public float periodTime = 2;
	public float deg = 10;

	void Awake () {
		rectTransform = GetComponent<RectTransform> ();
		myHeight = rectTransform.rect.height;
	}


	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		UpdateDisplay ();
		UpdateRealAngusImagePosition ();
	}
	
	// Update is called once per frame
	void Update () {
		UpdateRealAngusImagePosition ();
	}

	void UpdateRealAngusImagePosition() {
		float delta = Time.time - startTime;

		float yOffset = 0;

		float imageRotation = 0;

		delta -= waitingTime;

		if (delta < risingTime) {
			float fraction = delta / risingTime;
			yOffset = Mathf.Lerp (-2 * myHeight, 0, fraction);
		} else {
			delta -= risingTime;
			float rads = 2 * Mathf.PI * delta/periodTime;
			float fraction = Mathf.Sin (rads);
			imageRotation = fraction * deg;
		}

		rectTransform.anchoredPosition = new Vector2 (0, yOffset);
		realAngusImageRectTransform.rotation = Quaternion.Euler (0, 0, imageRotation);
	}


	void OnDestroy() {
		UnregisterForEvents ();
		
	}
	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GamePhaseState.instance.GamePhaseChanged += 
			new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		RealAngusData.instance.RealAngusDataChanged += 
			new RealAngusData.RealAngusDataChangedEventHandler (UpdateDisplay);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			RealAngusData.instance.RealAngusDataChanged -= 
				new RealAngusData.RealAngusDataChangedEventHandler (UpdateDisplay);
		}
	}

	void OnGamePhaseChanged() {
		UpdateDisplay ();

		if (GamePhaseState.instance.previousGamePhase != GamePhaseState.GamePhaseType.REAL_ANGUS) {
			startTime = Time.time;
			UpdateRealAngusImagePosition();
		}
	}

	void OnEnable() {
		UpdateDisplay ();
	}

	void UpdateDisplay() {
		if (RealAngusData.instance == null) {
			return;
		}

		List<RealAngusItemDesc> raids = RealAngusData.instance.GetRealAngusItemDescs ();

		if (raids == null) {
			return;
		}

		bool hasNewStuff = false;
		bool hasAnything = false;

		for (int i = 0; i < raids.Count; i++) {
			if (raids[i].unlocked) {
				hasAnything = true;
			}
			if (raids[i].unlocked && !raids[i].viewed) {
				hasNewStuff = true;
				break;
			}
		}

		if (!hasAnything) {
			gameObject.SetActive(false);
		} else {
			gameObject.SetActive(true);
			newLabel.SetActive (hasNewStuff);
		}
	}

	public void ShowRealAngusPage() {
		GamePhaseState.instance.TransitionToPhase (GamePhaseState.GamePhaseType.REAL_ANGUS);
	}
}
