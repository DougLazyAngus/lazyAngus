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

	void Awake() {
		firstMouseTipConfig = new TipConfig ("firstMouse", 
		                                     "Yikes! I'd better catch that mouse!"); 
		firstSlapTipConfig = new TipConfig ("firstSlap", 
		                                    "Lazy cats like me don't move so fast.\n\nTap AHEAD of the mice so I can get there in time!",
		                                    "firstMouse");
		firstTurnTipConfig = new TipConfig ("firstTurn", 
		                                    "Drag my body to turn me faster!",
		                                    "firstSlap");
		usedTrapTipConfig = new TipConfig ("usedTrap", 
		                                    "Mousetraps catch mice that get away from me.\n\nBut once a trap is sprung, it'd gone for good!");
		lostGameTipConfig = new TipConfig ("lostGame", 
		                                   "Oh no!\n\nA mouse got away, it's all over!\n\nLet's try again!");
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
	}
	
	void OnTurnedWithTap() {
		TipController.instance.EnqueueTip (firstTurnTipConfig, firstTurnTipPause);
	}
	
	void OnTurnedWithDrag() {
	}
	
	void OnSwatted() {
		TipController.instance.EnqueueTip (firstSlapTipConfig, firstSlapTipPause);
	}

	void OnUsedTrap() {
		TipController.instance.EnqueueTip (usedTrapTipConfig, usedTrapTipPause);
	}
}
