using UnityEngine;
using System.Collections;

public class PlayerStats : MonoBehaviour {
	
	private int gameScore;
	private int treatCount;

	private int[] availableBoostCount;
	private int[] purchasedBoostCount;

	public delegate void ScoreChangedEventHandler();
	public event ScoreChangedEventHandler ScoreChanged;
	
	public delegate void TreatsChangedEventHandler();
	public event TreatsChangedEventHandler TreatsChanged;
	
	public delegate void BoostsChangedEventHandler();
	public event BoostsChangedEventHandler BoostsChanged;

	public static PlayerStats instance { get; private set; }

	public const string highScoreName = "highScore";

	bool registeredForEvents;

	void Awake() {
		instance = this;
		Reset ();
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();
	}	

	void OnDestroy() {
		UnregisterForEvents();
	}

	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GamePhaseState.instance.GameInstanceChanged +=
			new GamePhaseState.GameInstanceChangedEventHandler (OnInstanceChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GameInstanceChanged -=
				new GamePhaseState.GameInstanceChangedEventHandler (OnInstanceChanged);
		}
	}


	void OnInstanceChanged() {
		Reset ();
	}

	public void IncrementScore(int increment = 1) {
		if (increment == 0) {
			return;
		}

		gameScore += increment;

		if (ScoreChanged != null) {
			ScoreChanged ();
		}
	}

	public void Reset() {
		gameScore = 0;
		treatCount = TweakableParams.GetInitialMoney();
		
		purchasedBoostCount = new int[(int)BoostConfig.BoostType.NUM_TYPES];
		availableBoostCount = new int[(int)BoostConfig.BoostType.NUM_TYPES];
		
		for (int i = 0; i < (int)BoostConfig.BoostType.NUM_TYPES; i++) {
			purchasedBoostCount[i] = 0;
			availableBoostCount [i] = TweakableParams.GetInitialBoosts();
		}

		if (TreatsChanged != null) {
			TreatsChanged ();
		}
		if (ScoreChanged != null) {
			ScoreChanged ();
		}
		if (BoostsChanged != null) {
			BoostsChanged ();
		}
	}

	public bool CanAfford(int price) {
		return treatCount >= price;
	}


	public void EarnTreats(int earnedTreats){
		if (earnedTreats == 0) {
			return;
		}
		treatCount += earnedTreats;
		if (TreatsChanged != null) {
			TreatsChanged ();
		}
	}

	public void SpendTreats(int spentTreats){
		if (spentTreats == 0) {
			return;
		}
		treatCount -= spentTreats;
		if (treatCount < 0) {
			treatCount = 0;
		}

		if (TreatsChanged != null) {
			TreatsChanged ();
		}
	}

	public int GetScore() {
		return gameScore;
	}

	public int GetTreats() {
		return treatCount;
	}
	
	public int GetPurchasedBoostCount(BoostConfig.BoostType bType) {
		int index = (int)bType;
		return purchasedBoostCount[index];
	}

	public int GetAvailableBoostCount(BoostConfig.BoostType bType) {
		int index = (int)bType;
		return availableBoostCount[index];
	}

	public void AddBoost(BoostConfig.BoostType bType) {
		int index = (int)bType;
		purchasedBoostCount[index] += 1;
		availableBoostCount[index] += 1;
		
		if (BoostsChanged != null) {
			BoostsChanged ();
		}
	}

	public void RemoveBoost(BoostConfig.BoostType bType) {
		int index = (int)bType;
		if (availableBoostCount [index] < 1) {
			availableBoostCount[index] = 0;
			return;
		}

		availableBoostCount[index] -= 1;
		
		if (BoostsChanged != null) {
			BoostsChanged ();
		}
	}

	public int GetHighScore() {
		return PersistentStorage.instance.GetIntValue (highScoreName, 0);
	}

	public void SetHighScore(int highScore) {
		PersistentStorage.instance.SetIntValue (highScoreName, highScore);
	}
}
