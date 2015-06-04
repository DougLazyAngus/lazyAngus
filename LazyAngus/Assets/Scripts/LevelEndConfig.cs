using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class LevelEndConfig : MonoBehaviour {
	public Text readyText;
	public Text treatsText;

	public float boostButtonSpacing = 0f;
	public float boostButtonYOffset = 60f;
	public GameObject purchaseBoostButtonPrototype;

	private List<PurchaseBoostButton> boostButtons;
	private bool registeredForEvents;
	private PlayerStats playerStats;
	private DistortForEffect distortForEffect;

	void Awake() {
		registeredForEvents = false;
	}

	void Start () {
		playerStats = Utilities.GetPlayerStats ();
		playerStats.TreatsChanged += new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
		registeredForEvents = true;

		distortForEffect = treatsText.GetComponent<DistortForEffect> ();

		SetTreatsText ();
		AddBoosts ();
	}
	
	void OnDestroy() {
		if (registeredForEvents) {
			playerStats.TreatsChanged -= new PlayerStats.TreatsChangedEventHandler (OnTreatsChanged);
		}
	}


	public void ConfigureForLevel(int gameLevel) {
		readyText.text = "Prepare for Wave " + gameLevel + "!!!";
		RefreshAllButtons ();
		SetTreatsText ();
	}

	void OnTreatsChanged() {
		RefreshAllButtons ();
		UpdateTreatsText ();
	}

	void UpdateTreatsText() {
		SetTreatsText ();
		distortForEffect.Distort ();
	}

	void SetTreatsText() {
		treatsText.text = "$" + playerStats.GetTreats ();
	}

 	void AddBoosts() {
		boostButtons = new List<PurchaseBoostButton> ();
		for (int i = 0; i < (int)BoostConfig.BoostType.NUM_TYPES; i++) {
			AddBoostButtonForType ((BoostConfig.BoostType)i);
		}
		LayoutBoostButtons ();
	}

	void AddBoostButtonForType(BoostConfig.BoostType bType) {
		GameObject purchaseBoostButtonObject = Instantiate(purchaseBoostButtonPrototype, 
		                                               new Vector3(0, 0, 0),
		                                               Quaternion.identity) as GameObject;
		PurchaseBoostButton pbb = purchaseBoostButtonObject.GetComponent <PurchaseBoostButton> ();
		purchaseBoostButtonObject.transform.SetParent (gameObject.transform);

		pbb.ConfigureForType (bType);
		boostButtons.Add (pbb);
	}
	
	void LayoutBoostButtons() {
		float totalWidth = 0f;
		bool first = true;
		foreach (PurchaseBoostButton pbb in boostButtons) {
			if (!first) {
				totalWidth += boostButtonSpacing;
			}
			first = false;
			totalWidth += pbb.GetWidth();
		}

		float leftEdge = -totalWidth / 2;
		float buttonXOffset;

		first = true;

		foreach (PurchaseBoostButton pbb in boostButtons) {
			if (!first) {
				leftEdge += boostButtonSpacing;
			}
			first = false;

			buttonXOffset = leftEdge + pbb.GetWidth()/2;

			RectTransform rt = pbb.GetComponent<RectTransform>();
			Vector2 position = new Vector2(buttonXOffset, boostButtonYOffset);

			rt.anchoredPosition = position;
			leftEdge += pbb.GetWidth ();
		}
	}

	void RefreshAllButtons() {
		foreach (PurchaseBoostButton button in boostButtons) {
			button.RefreshButton ();
		}
	}
}
