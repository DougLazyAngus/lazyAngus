using UnityEngine;
using System.Collections;

public class UseBoost : MonoBehaviour {
	private BoostConfig boostConfig;
	private PlayerStats playerStats;

	// Use this for initialization
	void Start () {
		boostConfig = BoostConfig.instance;
		playerStats = PlayerStats.instance;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void Use() {
		BoostButton button = gameObject.GetComponent<BoostButton>();
		BoostConfig.BoostType boostType = button.GetBoostType ();
		if (playerStats.GetAvailableBoostCount (boostType) <= 0) {
			return;
		}

		playerStats.RemoveBoost (boostType);

		boostConfig.ExecuteBoost (boostType);
	}
}
