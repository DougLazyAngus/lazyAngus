using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class RealAngusController : MonoBehaviour {
	public GameObject realAngusElementButtonPrototype;
	public Image buttonFrame;
	public int buttonsPerRow = 3;

	bool registeredForEvents;
	Rect buttonFrameRect;
	int numRows;

	List<RealAngusElementButton> buttons;

	// Use this for initialization
	void Start () {
		buttonFrameRect = buttonFrame.rectTransform.rect;
		RegisterForEvents ();
		LayoutButtons ();
		UpdateButtonStates ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
		
	}
	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		RealAngusData.instance.RealAngusDataChanged += 
			new RealAngusData.RealAngusDataChangedEventHandler (OnRealAngusDataChanged);
		GamePhaseState.instance.GamePhaseChanged += 
			new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			RealAngusData.instance.RealAngusDataChanged -= 
				new RealAngusData.RealAngusDataChangedEventHandler (OnRealAngusDataChanged);
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		}
	}

	// Update is called once per frame
	void Update () {
	
	}


	void OnRealAngusDataChanged() {
		LayoutButtons ();
		UpdateButtonStates ();
	}

	void LayoutButtons() {
		if (buttons != null) {
			return;
		}

		List<RealAngusItemDesc> realAngusItemDescs = RealAngusData.instance.GetRealAngusItemDescs ();
		if (realAngusItemDescs == null || realAngusItemDescs.Count == 0) {
			return;
		}

		numRows = 1 + (realAngusItemDescs.Count - 1)/ buttonsPerRow;

		buttons = new List<RealAngusElementButton>();

		for (int i = 0; i < realAngusItemDescs.Count; i++) {
			RealAngusItemDesc raid = realAngusItemDescs[i];

			GameObject realAngusElementButtonGameObject = 
				Instantiate (realAngusElementButtonPrototype,
				             new Vector3(0, 0, 0), 
				             Quaternion.identity) as GameObject;
			RealAngusElementButton button = realAngusElementButtonGameObject.GetComponent<RealAngusElementButton>();
			buttons.Add (button);

			button.transform.SetParent (buttonFrame.transform, false);

			button.transform.localPosition = GetNthPosition(i);
			button.transform.rotation = Quaternion.Euler (0, 0, 
			                                              Random.Range (-10, 10));
			button.Configure(raid);
		}
	}

	void UpdateButtonStates() {
	}	

	Vector2 GetNthPosition(int n) {
		int row = n / buttonsPerRow;
		int column = n % buttonsPerRow;

		float x = (column + 0.5f) * buttonFrameRect.width/buttonsPerRow;
		float y = (row + 0.5f) * buttonFrameRect.height / numRows;
		y = buttonFrameRect.height - y;
		x -= buttonFrameRect.width / 2;
		y -= buttonFrameRect.height / 2;
		return new Vector2 (x, y);
	}

	void OnGamePhaseChanged() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.REAL_ANGUS) {
			return;
		}

		if (buttons == null || buttons.Count == 0) {
			return;
		}

		for (int i = 0; i < buttons.Count; i++) {
			RealAngusElementButton button = buttons[i];
			button.OnFirstDisplayed();
		}
	}
}
