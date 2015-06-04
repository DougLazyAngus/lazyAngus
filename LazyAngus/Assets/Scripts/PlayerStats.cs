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

	// Use this for initialization
	void Start () {
		gameScore = 0;
		treatCount = 1;

		availableBoostCount = new int[(int)BoostConfig.BoostType.NUM_TYPES];
		purchasedBoostCount = new int[(int)BoostConfig.BoostType.NUM_TYPES];
		for (int i = 0; i < (int)BoostConfig.BoostType.NUM_TYPES; i++) {
			availableBoostCount [i] = purchasedBoostCount [i] = 0;
		}
	}	

	public void IncrementScore(int increment) {
		if (increment == 0) {
			return;
		}

		gameScore += increment;

		if (ScoreChanged != null) {
			ScoreChanged ();
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
	}
}
