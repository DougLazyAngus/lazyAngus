using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class RealAngusController : MonoBehaviour {
	public GameObject realAngusElementButtonPrototype;
	public int numColumns = 2;
	public float buttonRotationDeg = 5f;
	public GameObject parentScreen;

	public float buttonPanelTopMargin;
	public float buttonPanelBottomMargin;
	public float buttonPanelSideMargin;

	public Image parentWhenSelected;

	public float buttonWidth = 200;
	float buttonSelectedScale = 3.9f;
	
	bool registeredForEvents;
	int numRows;
	RectTransform parentScreenRectTransform;
	
	float selectedBackgroundAlpha = 0.4f;

	RealAngusElementButton selectedButton;

	float startTransitionTime;
	bool transitioning;

	float buttonPanelWidth;
	float buttonPanelHeight;

	List<RealAngusElementButton> buttons;

	float columnWidth;
	float rowHeight;

	void Awake() {
		parentScreenRectTransform = parentScreen.GetComponent<RectTransform> ();
	}

	// Use this for initialization
	void Start () {
		buttonPanelWidth = parentScreenRectTransform.rect.width - 2 * buttonPanelSideMargin;
		buttonPanelHeight = parentScreenRectTransform.rect.height - buttonPanelTopMargin - buttonPanelBottomMargin;
		RegisterForEvents ();
		LayoutButtons ();
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


	void Update() {
		if (!transitioning) {
			return;
		}

		UpdateSelectionState ();
	}

	void UpdateSelectionState() {
		float timeFraction = (Time.time - startTransitionTime) / 
			TweakableParams.realAngusSelectionFadeTime;
		if (timeFraction >= 1) {
			transitioning = false;
			if (!selectedButton) {
				parentWhenSelected.gameObject.SetActive (false);
			}
		} else {
			if (selectedButton) {
				if (!parentWhenSelected.gameObject.activeSelf) {
					parentWhenSelected.gameObject.SetActive (true);
				}
				parentWhenSelected.color = new Color (0, 0, 0, selectedBackgroundAlpha * timeFraction);
			} else {
				parentWhenSelected.color = new Color (0, 0, 0, 
				                                      selectedBackgroundAlpha * (1 - timeFraction));
			}
		}
	}

	void OnRealAngusDataChanged() {
		LayoutButtons ();
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
			button.transform.SetParent (parentScreen.transform, false);
			button.SetSelected(false, true);
		}

		startTransitionTime = 0;
		selectedButton = null;
		UpdateSelectionState ();
	}

	void LayoutButtons() {
		if (buttons != null) {
			return;
		}

		List<RealAngusItemDesc> realAngusItemDescs = RealAngusData.instance.GetRealAngusItemDescs ();
		if (realAngusItemDescs == null || realAngusItemDescs.Count == 0) {
			return;
		}

		numRows = 1 + (realAngusItemDescs.Count - 1)/ numColumns;
		buttons = new List<RealAngusElementButton>();

		columnWidth = buttonPanelWidth/ numColumns;
		rowHeight = buttonPanelHeight / numRows;


		buttonSelectedScale = buttonPanelWidth / buttonWidth;

		for (int i = 0; i < realAngusItemDescs.Count; i++) {
			RealAngusItemDesc raid = realAngusItemDescs[i];

			GameObject realAngusElementButtonGameObject = 
				Instantiate (realAngusElementButtonPrototype,
				             new Vector3(0, 0, 0), 
				             Quaternion.identity) as GameObject;
			RealAngusElementButton button = realAngusElementButtonGameObject.GetComponent<RealAngusElementButton>();
			buttons.Add (button);

			button.transform.SetParent (parentScreen.transform, false);

			button.SetHomeTransform(GetNthPosition (i), 
			                        Random.Range (-buttonRotationDeg, buttonRotationDeg));
			button.SetSizingDetails(buttonWidth, buttonSelectedScale);
			button.Configure(raid);

			button.SetClickHandler(OnButtonClicked);
			button.SetTransitionCompleteHandler(OnSelectionTransitionCompleted);

		}
	}

	void OnButtonClicked(RealAngusElementButton button) {
		if (selectedButton) {
			selectedButton.SetSelected (false);
			selectedButton = null;
		} else {
			selectedButton = button;
			selectedButton.SetSelected(true);
			selectedButton.transform.SetParent (parentWhenSelected.transform, false);
			SFXPlayer.instance.Play (SFXPlayer.SFXType.CAMERA);
		}
		startTransitionTime = Time.time;
		transitioning = true;
	}

	void OnSelectionTransitionCompleted(RealAngusElementButton button) {
		if (!button.selected) {
			button.transform.SetParent(parentScreen.transform, false);
		}
	}

	Vector2 GetNthPosition(int n) {
		int row = n / numColumns;
		int column = n % numColumns;



		float x = (column + 0.5f) * columnWidth;
		float y = (row + 0.5f) * rowHeight;

		if (column % 2 == 1) {
			y += rowHeight/2;
		}

		y = buttonPanelHeight - y;

		x += buttonPanelSideMargin;
		y += buttonPanelBottomMargin;

		x -= parentScreenRectTransform.rect.width / 2;
		y -= parentScreenRectTransform.rect.height / 2;


		return new Vector2 (x, y);
	}
}
