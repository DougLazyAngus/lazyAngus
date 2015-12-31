using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class RealAngusController : MonoBehaviour {
	public GameObject realAngusElementButtonPrototype;
	public GameObject parentScreen;
	public RealAngusTextWidget realAngusTextWidget;
	public RealAngusSelectedButtonParent realAngusSelectedButtonParent;
	public Transform buttonContainer;

	public GameObject tipDialogPrototype;

	public int numColumns = 2;
	public float buttonRotationDeg = 5f;
	public float buttonWigglePixX = 10f;
	public float buttonWigglePixY = 100f;
	public float buttonPanelTopMargin;
	public float buttonPanelBottomMargin;
	public float buttonPanelSideMargin;

	bool registeredForEvents;
	int numRows;
	RectTransform parentScreenRectTransform;

	RealAngusElementButton selectedButton;
	Vector2 selectedButtonLocation;
	float selectedButtonScale;
	
	public float selectedButtonTopMargin = 50f;
	public float textWidgetOverlap = 10f;

	float buttonPanelWidth;
	float buttonPanelHeight;

	List<RealAngusElementButton> buttons;

	float columnWidth;
	float rowHeight;

	Vector2 textWidgetLocation;
	Vector2 textWidgetOffscreenLocation;
	public float textToButtonXRatio = 0.9f;
	public float textToButtonYRatio = 1.1f;

	float screenWidth;
	float screenHeight;

	void Awake() {
		parentScreenRectTransform = parentScreen.GetComponent<RectTransform> ();
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
		CalculateLayoutNumbers ();
		LayoutDisplayElements ();
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
	

	void OnRealAngusDataChanged() {
		LayoutDisplayElements ();
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
			button.transform.SetParent (buttonContainer, false);
			button.SetSelected(false, true);
		}

		selectedButton = null;

		realAngusSelectedButtonParent.gameObject.SetActive (false);
		realAngusTextWidget.transform.localPosition = new Vector2 (0, -2000);
	}

	void CalculateLayoutNumbers() {
		screenWidth = parentScreenRectTransform.rect.width;
		screenHeight = parentScreenRectTransform.rect.height;

		buttonPanelWidth = screenWidth - 2 * buttonPanelSideMargin;
		buttonPanelHeight = screenHeight - buttonPanelTopMargin - buttonPanelBottomMargin;

		float selectedButtonWidth = buttonPanelWidth;
		selectedButtonScale = selectedButtonWidth / TweakableParams.realAngusElementButtonWidth;
		float scaledFrameSize = selectedButtonScale * TweakableParams.realAngusElementButtonFrameWidth;
		float selectedImageWidth = selectedButtonWidth - 2 * scaledFrameSize;
		float selectedImageHeight = selectedImageWidth / TweakableParams.realAngusImageAspectRatio;
		float selectedButtonHeight = selectedImageHeight + 2 * scaledFrameSize;
		float textWidgetWidth = selectedButtonWidth * textToButtonXRatio;
		float textWidgetHeight = selectedButtonHeight * textToButtonYRatio;

		float selectedButtonX = screenWidth / 2;
		float selectedButtonY;
		float textWidgetX = screenWidth / 2;
		float textWidgetY;

		if (selectedButtonHeight * 2 > screenHeight) {
			selectedButtonY = screenHeight - selectedButtonHeight / 2 - selectedButtonTopMargin;
		} else {
			selectedButtonY = screenHeight / 2 + selectedButtonHeight/2;
		}
		textWidgetY = selectedButtonY - selectedButtonHeight / 2 - textWidgetHeight / 2 + textWidgetOverlap;

		selectedButtonX -= screenWidth / 2;
		selectedButtonY -= screenHeight / 2;
		textWidgetX -= screenWidth / 2;
		textWidgetY -= screenHeight / 2;

		selectedButtonLocation = new Vector2 (selectedButtonX, selectedButtonY);


		textWidgetLocation = new Vector2 (textWidgetX, textWidgetY);
		textWidgetOffscreenLocation = new Vector2 (textWidgetX, -screenHeight/2 - textWidgetHeight);

		realAngusTextWidget.ConfigureLayout (textWidgetWidth, textWidgetHeight, 
		                                    textWidgetLocation, textWidgetOffscreenLocation);
	}

	void LayoutDisplayElements() {
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

		Random.seed = 141234;

		for (int i = 0; i < realAngusItemDescs.Count; i++) {
			RealAngusItemDesc raid = realAngusItemDescs[i];

			GameObject realAngusElementButtonGameObject = 
				Instantiate (realAngusElementButtonPrototype,
				             new Vector3(0, 0, 0), 
				             Quaternion.identity) as GameObject;
			RealAngusElementButton button = realAngusElementButtonGameObject.GetComponent<RealAngusElementButton>();
			buttons.Add (button);

			button.transform.SetParent (buttonContainer, false);
			button.SetHomeTransform(GetNthPosition (i), 
			                        Random.Range (-buttonRotationDeg, buttonRotationDeg));
			button.SetSelectedTransform(selectedButtonLocation, 0, selectedButtonScale);

			button.Configure(raid);

			button.SetClickHandler(OnButtonClicked);
			button.SetTransitionCompleteHandler(OnSelectionTransitionCompleted);

		}
	}

	void OnButtonClicked(RealAngusElementButton button) {
		if (selectedButton) {
			DeselectSelectedButton();
		} else {
			if (button.raid.unlocked) {
				SelectButton (button);
			} else {
				CueToPlayMore ();
			}
		}
	}

	public void DeselectSelectedButton() {
		if (selectedButton == null) {
			return;
		}
		selectedButton.SetSelected (false);
		selectedButton = null;
		realAngusSelectedButtonParent.StartVisibilityTransition (false);
		realAngusTextWidget.TransitionOut ();
	}

	void CueToPlayMore() {
		int numUnlocked = RealAngusData.instance.CountUnlockedItemDescs ();
		int levelForNextUnlock = LevelConfig.instance.LevelForRealAngusUnlocks (numUnlocked + 1);
		string message = "Get to level " + levelForNextUnlock + " to unlock a new random tidbit about Angus!";
	
		GameObject tipDialogGameObject = Instantiate (tipDialogPrototype, 
		                                              new Vector3 (0, 0, 0), 
		                                              Quaternion.identity) as GameObject;
		TipDialog td = tipDialogGameObject.GetComponent<TipDialog> ();
		td.ConfigureDialog (message);

		DialogController.instance.ShowDialog (td);
	}

	void SelectButton (RealAngusElementButton button)
	{
		selectedButton = button;
		selectedButton.SetSelected (true);

		realAngusSelectedButtonParent.StartVisibilityTransition (true);
		realAngusTextWidget.TransitionIn (selectedButton.raid);

		selectedButton.transform.SetParent (realAngusSelectedButtonParent.transform,
		                                    false);

		SFXPlayer.instance.Play (SFXPlayer.SFXType.CAMERA);
	}

	void OnSelectionTransitionCompleted(RealAngusElementButton button) {
		if (!button.IsSelected()) {
			button.transform.SetParent(buttonContainer, false);
		}
	}

	Vector2 GetNthPosition(int n) {
		int row = n / numColumns;
		int column = n % numColumns;

		float x = (column + 0.5f) * columnWidth;
		float y = (row + 0.5f) * rowHeight;

		y = buttonPanelHeight - y;

		x += buttonPanelSideMargin;
		y += buttonPanelBottomMargin;

		x -= screenWidth / 2;
		y -= screenHeight / 2;

		float [] yOffsets = {
			0.07f, -0.1f, 0.1f,
			0.03f, 0, 0.12f, 
			0.06f, -0.12f, 0.07f, 
			0.1f, -0.1f, 0.05f, 
		};

		y += rowHeight * yOffsets [n % yOffsets.Length];
		x += Random.Range (-buttonWigglePixX, buttonWigglePixX);

		return new Vector2 (x, y);
	}
}
