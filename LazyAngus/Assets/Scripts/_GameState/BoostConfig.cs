using UnityEngine;
using System.Collections;

public class BoostConfig : MonoBehaviour {
	public enum BoostType {
		BOOST_TYPE_FAST_PAWS = 0,
		BOOST_TYPE_GOOD_EYES,
		BOOST_TYPE_BIG_PAWS,
		BOOST_TYPE_FART,
		// FIXME(dbanks)
		// Remove for good?
		// BOOST_TYPE_POISON_PAWS,

		NUM_TYPES,
	};

	const string BoostUsedStoragePreferencePrefix = "boostUsed";

	private BoostDesc[] boostDescs;

	public delegate void BoostActiveEventHandler(BoostConfig.BoostType newBoostType, 
	                                             BoostConfig.BoostType oldBoostType);
	public event BoostActiveEventHandler BoostActive;

	public static BoostConfig instance { get; private set; }

	public BoostType activeBoost { get; private set; }

	IEnumerator activePause;

	private float activeBoostStartTime;
	private float activeBoostEndTime;
	bool registeredForEvents;

	void Awake() {
		instance = this;
		activeBoost = BoostType.NUM_TYPES;
		LoadBoostDescs ();
	}



	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
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
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		}
	}
	
	void OnGamePhaseChanged() {
		if (GamePhaseState.instance.gamePhase != GamePhaseState.GamePhaseType.LEVEL_PLAY) {
			CancelBoosts ();
		}
	}

	void LoadBoostDescs() {
		boostDescs = new BoostDesc[(int)BoostType.NUM_TYPES];

		boostDescs [(int)BoostType.BOOST_TYPE_FAST_PAWS] = new BoostDesc (
			"Fast Paws", 
			"powerup_fast_paws.01", 
			"powerup_fast_paws.01", 
			TweakableParams.fastPawsBoostTime,
			new TipConfig ("boost.fast_paws", "TIP_BOOST_FAST"));

		boostDescs [(int)BoostType.BOOST_TYPE_GOOD_EYES] = new BoostDesc (
			"Super Sight", 
			"powerup_eyesight.01", 
			"powerup_eyesight.01", 
			TweakableParams.goodEyesBoostTime,
			new TipConfig ("boost.good_eyes", "TIP_BOOST_SEE"));

		boostDescs [(int)BoostType.BOOST_TYPE_BIG_PAWS] = new BoostDesc (
			"Big Paws", 
			"powerup_larger_paws.01", 
			"powerup_larger_paws.01", 
			TweakableParams.bigPawsBoostTime,
			new TipConfig ("boost.big_paws", "TIP_BOOST_GIANT"));

		/*
		boostDescs [(int)BoostType.BOOST_TYPE_POISON_PAWS] = new BoostDesc (
			"Poison Paws", 
			"poison_paw_can", 
			"poison_paw_can", 
			TweakableParams.poisonPawsBoostTime,
			new TipConfig ("boost.poison_paws", 
		               	"Let poisoned mice go: they'll poison their friends back home!"));
		*/

		boostDescs [(int)BoostType.BOOST_TYPE_FART] = new BoostDesc (
			"Farts", 
			"powerup_fart.01", 
			"powerup_fart.01", 
			TweakableParams.fartBoostTime,
			new TipConfig ("boost.fart", "TIP_BOOST_FART"));
	}
	

	public Sprite GetButtonImageForType(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].buttonSprite;
	}
	
	public Sprite GetIntroImageForType(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].introScreenSprite;
	}

	public string GetTitleForType(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].boostName;
	}


	public int GetCurrentPriceForBoost(BoostType bType) {
		// Triangle numbers vs number bought.
		int numBought = PlayerStats.instance.GetPurchasedBoostCount (bType);
		return (numBought + 1) * (numBought + 2)/2;
	}

	
	public float GetBoostTime(BoostType bType) {
		int index = (int)bType;
		return boostDescs [index].effectiveTime;
	}

	public void CancelBoosts() {
		if (activeBoost == BoostType.NUM_TYPES) {
			return;
		}

		CleanupActiveBoost ();
	}

	public void ExecuteBoost(BoostType bType) {
		// If something's active, ignore.
		if (activeBoost != BoostType.NUM_TYPES) {
			return;
		}

		// If you're trying to 'execute' null type, ignore.
		if (bType == BoostType.NUM_TYPES) {
			return;
		}

		// If we're not in play mode, no dice.
		if (!GamePhaseState.instance.IsPlaying ()) {
			return;
		}

		// Make sure nothing else is going.
		CleanupActiveBoost ();

		float pauseTime = GetBoostTime (bType);

		BoostType oldType = activeBoost;
		activeBoost = bType;
		activeBoostStartTime = Time.time;
		activeBoostEndTime = activeBoostStartTime + pauseTime;

		if (!SoundController.instance.sfxMuted) {
			SFXPlayer.instance.Play (SFXPlayer.SFXType.USE_BOOST);
		}

		if (BoostActive != null) {
			BoostActive (activeBoost, oldType);
		}

		activePause = WaitThenCleanup (pauseTime);
		BoostDesc bd = boostDescs[(int)bType];

		TipController.instance.MaybeShowTip(bd.tipConfig);

		string preferenceName = GetBoostUsedPreferenceName (bType);
		PersistentStorage.instance.SetBoolValue (preferenceName, 
		                                         true);


		StartCoroutine(activePause);
	}

	string GetBoostUsedPreferenceName(BoostType bt) {
		return BoostConfig.BoostUsedStoragePreferencePrefix + '.' + bt;
	}

	public bool UserHasUsedBoost(BoostType boostType) {
		string preferenceName = GetBoostUsedPreferenceName (boostType);
		return PersistentStorage.instance.GetBoolValue (
			preferenceName,
			false);
	}

	IEnumerator WaitThenCleanup(float pauseTime) {
		yield return new WaitForSeconds (pauseTime);
		activePause = null;
		CleanupActiveBoost ();
	}

	void CleanupActiveBoost() {
		if (activePause != null) {
			StopCoroutine (activePause);
			activePause = null;
		}

		BoostType oldType = activeBoost;
		activeBoost = BoostType.NUM_TYPES;
		activeBoostStartTime = activeBoostEndTime = 0;

		if (BoostActive != null) {
			BoostActive (activeBoost, oldType);
		}
	}

	public float GetActiveBoostFractionUsed() {
		return (Time.time - activeBoostStartTime)/
			(activeBoostEndTime - activeBoostStartTime);
	}
	
	public bool IsBoostActive() {
		return (activeBoost != BoostType.NUM_TYPES);
	}
}
