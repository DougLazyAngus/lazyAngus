using UnityEngine;
using System.Collections;

public class TipConfig {
	public string tipID;
	public string tipText;
	public Vector2 tipPosition;

	public TipConfig(string tipID, 
	                 string tipText, 
	                 Vector2 tipPosition) {
		this.tipID = tipID;
		this.tipText = tipText;
		this.tipPosition = tipPosition;
	}
	public TipConfig(string tipID, 
	                 string tipText) {
		this.tipID = tipID;
		this.tipText = tipText;
		this.tipPosition = new Vector2 (0f, 0f);
	}
}

public class TipController : MonoBehaviour {

	bool registeredForEvents;
	public GameObject tipDialogPrototype;
	IEnumerator enqueuedTip;
	public static TipController instance;
	
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
		GameController.instance.GamePhaseChanged +=
			new GameController.GamePhaseChangedEventHandler (OnPhaseChanged);

		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GameController.instance.GamePhaseChanged -=
				new GameController.GamePhaseChangedEventHandler (OnPhaseChanged);
		}
	}		

	void OnPhaseChanged() {
		if (GameController.instance.IsPlaying()) {
			EnqueueTipForLevel ();
		} else {
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
		enqueuedTip = PlayTipWithPause (tipConfig,
		                                tipPause);
		StartCoroutine (enqueuedTip);
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

	public bool MaybeShowTip(TipConfig tipConfig) {
		bool showedTip = PersistentStorage.instance.GetBoolValue ("tip." + tipConfig.tipID, 
		                                                          false);
		if (showedTip) {
			return false;
		}

		if (DialogController.instance.IsDialogShowing ()) {
			return false;
		}

		GameObject tipDialogObject = Instantiate (tipDialogPrototype, 
		                                          new Vector3 (0f, 0f, 0f),
		                                          Quaternion.identity) as GameObject;
		tipDialogObject.transform.localScale = new Vector3 (1f, 1f, 1f);

		TipDialog td = tipDialogObject.GetComponent<TipDialog> ();
		td.ConfigureDialog (tipConfig.tipText, 
		                   	tipConfig.tipPosition);
			
		DialogController.instance.ShowDialog (tipDialogObject);
		PersistentStorage.instance.SetBoolValue ("tip." + tipConfig.tipID, 
		                                        true);
		return true;
	}
}
