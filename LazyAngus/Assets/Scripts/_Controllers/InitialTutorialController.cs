using UnityEngine;
using System.Collections;

public class InitialTutorialController : MonoBehaviour {
	bool registeredForEvents;

	public float firstMouseTipPause = 2f;
	TipConfig firstMouseTipConfig;
	
	public float firstSlapTipPause = 2f;
	TipConfig firstSlapTipConfig;
	
	public float firstTurnTipPause = 1f;
	TipConfig firstTurnTipConfig;
	
	public float usedTrapTipPause = 1f;
	TipConfig usedTrapTipConfig;
	
	public float lostGameTipPause = 1f;
	TipConfig lostGameTipConfig;
	
	public float boostOverTipPause = 0.4f;
	TipConfig boostOverTipConfig;

	void Awake() {
		firstMouseTipConfig = new TipConfig ("firstMouse", 
		                                     LazyAngusStrings.TUTORIAL_CATCH_MOUSE);
		firstSlapTipConfig = new TipConfig ("firstSlap", 
		                                    LazyAngusStrings.TUTORIAL_LEAD_MOUSE,
		                                    "firstMouse");
		firstTurnTipConfig = new TipConfig ("firstTurn", 
		                                    LazyAngusStrings.TUTORIAL_DRAG_TURN,
		                                    "firstSlap");
		usedTrapTipConfig = new TipConfig ("usedTrap", 
		                                   LazyAngusStrings.TUTORIAL_TRAPS);
		lostGameTipConfig = new TipConfig ("lostGame", 
		                                   LazyAngusStrings.TUTORIAL_GAME_OVER);
		boostOverTipConfig = new TipConfig ("boostOver", 
		                                   LazyAngusStrings.TUTORIAL_BOOST_OVER);
	}

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
		MouseSpawnFromData.instance.MouseSpawn +=
			new MouseSpawnFromData.MouseSpawnEventHandler (OnMouseSpawned);
		PlayerController.instance.TurnedWithTap += 
			new PlayerController.TurnedWithTapHandler (OnTurnedWithTap);
		PlayerController.instance.TurnedWithDrag += 
			new PlayerController.TurnedWithDragHandler (OnTurnedWithDrag);
		PlayerController.instance.Swatted += 
			new PlayerController.SwattedHandler (OnSwatted);
		UsedTrapRelay.instance.UsedTrap += 
			new UsedTrapRelay.UsedTrapEventHandler (OnUsedTrap);
		GamePhaseState.instance.GamePhaseChanged += 
			new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
		BoostConfig.instance.BoostActive += 
			new BoostConfig.BoostActiveEventHandler (OnBoostActiveChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			MouseSpawnFromData.instance.MouseSpawn -=
				new MouseSpawnFromData.MouseSpawnEventHandler (OnMouseSpawned);
			PlayerController.instance.TurnedWithTap -= 
				new PlayerController.TurnedWithTapHandler (OnTurnedWithTap);
			PlayerController.instance.TurnedWithDrag -= 
				new PlayerController.TurnedWithDragHandler (OnTurnedWithDrag);
			PlayerController.instance.Swatted -= 
				new PlayerController.SwattedHandler (OnSwatted);
			UsedTrapRelay.instance.UsedTrap -= 
				new UsedTrapRelay.UsedTrapEventHandler (OnUsedTrap);
			GamePhaseState.instance.GamePhaseChanged -= 
				new GamePhaseState.GamePhaseChangedEventHandler (OnGamePhaseChanged);
			BoostConfig.instance.BoostActive -= 
				new BoostConfig.BoostActiveEventHandler (OnBoostActiveChanged);
		}
	}

	void OnBoostActiveChanged(BoostConfig.BoostType newType, 
	                          BoostConfig.BoostType oldType) {
		if (newType == BoostConfig.BoostType.NUM_TYPES && 
		    oldType != BoostConfig.BoostType.NUM_TYPES) {
			TipController.instance.EnqueueTip (boostOverTipConfig, boostOverTipPause);
		}
	}

	void OnGamePhaseChanged() {
		if (GamePhaseState.instance.gamePhase == GamePhaseState.GamePhaseType.PENDING && 
			GamePhaseState.instance.pendingPhase == GamePhaseState.GamePhaseType.GAME_OVER) {
			TipController.instance.EnqueueTip (lostGameTipConfig, lostGameTipPause);
		}
	}

	void OnMouseSpawned () {	
		TipController.instance.EnqueueTip (firstMouseTipConfig, firstMouseTipPause);

		if (MouseSpawnFromData.instance.miceSpawned >= 3) {
			TipController.instance.EnqueueTip (firstSlapTipConfig, firstSlapTipPause);
		}
	}
	
	void OnTurnedWithTap() {
		// Don't do this on the first level, too many other tips there.
		if (GameLevelState.instance.gameLevel > 1) {
			TipController.instance.EnqueueTip (firstTurnTipConfig, firstTurnTipPause);
		}
	}

	void OnTurnedWithDrag() {
	}
	
	void OnSwatted() {
	}

	void OnUsedTrap() {
		TipController.instance.EnqueueTip (usedTrapTipConfig, usedTrapTipPause);
	}
}
