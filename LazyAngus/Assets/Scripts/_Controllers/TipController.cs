using UnityEngine;
using System.Collections;

public class TipConfig {
	public string tipID;
	public string tipTextIdentifier;
	public string explicitText;
	public string previousTipID;

	public TipConfig(string explicitText) {
		this.tipID = null;
		this.tipTextIdentifier = null;
		this.previousTipID = null;
		this.explicitText = explicitText;
	}
	

	public TipConfig(string tipID, 
	                 string tipTextIdentifier) {
		this.tipID = tipID;
		this.tipTextIdentifier = tipTextIdentifier;
		this.previousTipID = null;
	}

	public TipConfig(string tipID, 
	                 string tipTextIdentifier,
		             string previousTipID) {
		this.tipID = tipID;
		this.tipTextIdentifier = tipTextIdentifier;
		this.previousTipID = previousTipID;
	}
}

public class TipController : MonoBehaviour {

	bool registeredForEvents;
	public GameObject tipDialogPrototype;
	IEnumerator enqueuedTip;
	public static TipController instance;

	public float timeBetweenTips = 4;
	
	void Awake() {
		instance = this;
		registeredForEvents = false;
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
	}
	
	void RegisterForEvents() {
		GamePhaseState.instance.GamePhaseChanged +=
			new GamePhaseState.GamePhaseChangedEventHandler (OnPhaseChanged);

		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -=
				new GamePhaseState.GamePhaseChangedEventHandler (OnPhaseChanged);
		}
	}		

	void OnPhaseChanged() {
		if (GamePhaseState.instance.IsPlaying ()) {
			EnqueueTipForLevel ();
		}

		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY && 
		    GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.PENDING) {
			ClearEnqueuedTips ();
		}
	}

	void EnqueueTipForLevel () {
		LevelDescription ld = LevelConfig.instance.GetCurrentLevelDescription ();
		if (ld.tipConfig == null) {
			return;
		}

		EnqueueTip (ld.tipConfig, 
		                    ld.tipPause);
	}

	public void EnqueueTip(TipConfig tipConfig, 
	                       float tipPause) {
		if (DidShowTip(tipConfig.tipID)) {
			return;
		}

		enqueuedTip = PlayTipWithPause (tipConfig,
		                                tipPause);
		StartCoroutine (enqueuedTip);
	}

	public void EnqueueAnytimeTip(string message) {
		TipConfig tipConfig = new TipConfig (message);
		EnqueueTip (tipConfig, 0.001f); 
	}

	IEnumerator PlayTipWithPause(TipConfig tipConfig, 
	                             float tipPause) {
		yield return new WaitForSeconds (tipPause);
		MaybeShowTip (tipConfig);
		enqueuedTip = null;
	}

	void ClearEnqueuedTips() {
		if (enqueuedTip != null) {
			StopCoroutine (enqueuedTip);
			enqueuedTip = null;
		}
	}

	bool DidShowTip(string tipID) {
		if (tipID == null) {
			return false;
		}
		return PersistentStorage.instance.GetBoolValue ("tip." + tipID, 
		                                                false);
	}

	public bool MaybeShowTip(TipConfig tipConfig) {
		if (DidShowTip(tipConfig.tipID)) {
			return false;
		}

		if (tipConfig.previousTipID != null) {
			if (!DidShowTip(tipConfig.previousTipID)) {
				return false;
			}
		}

		if (DialogController.instance.IsDialogShowing ()) {
			return false;
		}

		GameObject tipDialogObject = Instantiate (tipDialogPrototype, 
		                                          new Vector3 (0f, 0f, 0f),
		                                          Quaternion.identity) as GameObject;
		tipDialogObject.transform.localScale = new Vector3 (1f, 1f, 1f);
		tipDialogObject.transform.localPosition = new Vector2 (0, 
		                                                       GoogleAdController.GetBannerHeight ()/2);
		TipDialog td = tipDialogObject.GetComponent<TipDialog> ();

		string message;
		if (tipConfig.explicitText != null) {
			message = tipConfig.explicitText;
		} else {
			message = LazyAngusStrings.inst.Str (tipConfig.tipTextIdentifier);
		}
		td.ConfigureDialog (message);

		DialogController.instance.ShowDialog (td);
		if (tipConfig.tipID != null) {
			PersistentStorage.instance.SetBoolValue ("tip." + tipConfig.tipID, 
			                                         true);
		}
		return true;
	}
}
