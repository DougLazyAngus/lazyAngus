using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class RealAngusButton : MonoBehaviour  {
	public GameObject newLabel;
	public RectTransform realAngusImageRectTransform;
	public RectTransform rectTransform;

	float startTime;
	float myHeight;
	float myWidth;

	public float waitingTime = 2;
	public float risingTime = 2;
	public float periodTime = 2;

	public float phase1Deg = 10;
	public float phase1Slide = 50;
	public float phase2Slide = 30;
	public float phase2Deg = -10;

	void Awake () {
		rectTransform = GetComponent<RectTransform> ();
		myHeight = rectTransform.rect.height;
	}


	// Use this for initialization
	void Start () {
		TryStartup ();
	}
	
	// Update is called once per frame
	void Update () {
		UpdateRealAngusImagePosition ();
	}

	void UpdateRealAngusImagePosition() {
		float delta = Time.time - startTime;

		float yOffset = 0;
		float xOffset = 0;

		float imageRotation = 0;

		delta -= waitingTime;

		if (delta < risingTime) {
			float fraction = delta / risingTime;
			yOffset = Mathf.Lerp (-2 * myHeight, 0, fraction);
		} else {
			delta -= risingTime;

			int phase = (int)Mathf.Floor (delta / periodTime);
			phase = phase % 3;
			float rads = 2 * Mathf.PI * delta/periodTime;
			float fraction = Mathf.Sin (rads);
			float fraction2 = Mathf.Sin (rads * 2);


			switch (phase) {
			case 1:
				imageRotation = fraction * phase1Deg;
				yOffset = phase1Slide * fraction2;
				break;
			case 2:
				imageRotation = fraction2 * phase2Deg;
				xOffset = phase2Slide * fraction;
				break;
			}
		}

		rectTransform.anchoredPosition = new Vector2 (xOffset, yOffset);
		realAngusImageRectTransform.rotation = Quaternion.Euler (0, 0, imageRotation);
	}

	void OnEnable() {
		TryStartup ();
	}

	void TryStartup() {
		if (GamePhaseState.instance == null) {
			return;
		}

		UpdateDisplay ();
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.GAME_OVER && 
		    GamePhaseState.instance.previousGamePhase != GamePhaseState.GamePhaseType.REAL_ANGUS) {
			startTime = Time.time;
			UpdateRealAngusImagePosition();
		}
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
