using UnityEngine;
using System.Collections;

public class PlayerStats : MonoBehaviour {
	
	public int gameScore { get; private set; }
	public int money  {get; private set; }

	private int[] availableBoostCount;
	private int[] purchasedBoostCount;

	public delegate void ScoreChangedEventHandler();
	public event ScoreChangedEventHandler ScoreChanged;
	
	public delegate void MoneyChangedEventHandler();
	public event MoneyChangedEventHandler MoneyChanged;
	
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
		money = TweakableParams.GetInitialMoney();
		
		purchasedBoostCount = new int[(int)BoostConfig.BoostType.NUM_TYPES];
		availableBoostCount = new int[(int)BoostConfig.BoostType.NUM_TYPES];
		
		for (int i = 0; i < (int)BoostConfig.BoostType.NUM_TYPES; i++) {
			purchasedBoostCount[i] = 0;
			availableBoostCount [i] = TweakableParams.GetInitialBoosts();
		}

		if (MoneyChanged != null) {
			MoneyChanged ();
		}
		if (ScoreChanged != null) {
			ScoreChanged ();
		}
		if (BoostsChanged != null) {
			BoostsChanged ();
		}
	}

	public bool CanAfford(int price) {
		return money >= price;
	}


	public void EarnMoney(int earnedMoney){
		if (earnedMoney == 0) {
			return;
		}
		money += earnedMoney;
		if (MoneyChanged != null) {
			MoneyChanged ();
		}
	}

	public void SpendMoney(int spentMoney){
		if (spentMoney == 0) {
			return;
		}
		money -= spentMoney;
		if (money < 0) {
			money = 0;
		}

		if (MoneyChanged != null) {
			MoneyChanged ();
		}
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
