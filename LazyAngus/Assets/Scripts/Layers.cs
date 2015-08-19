using UnityEngine;
using System.Collections;

public class Layers : MonoBehaviour {

	// The layer for things in the game that collide with each other: 
	// paw collision components
	// mice collision components
	// hole collision components
	public const int UserInteractions = 9;
	public const int BuiltInUI = 5;

	// The layer for things in the game the user can tap:
	// Angus's body collision component.
	// The floor collision component.

	// The layer for things that get lit and cast or receive shadows.
	// - The floor visual component.
	// - All cat parts visual components.
	// - Mouse visual components.
	// - Hole visual components.
	public const int ShadowCastLayer = 12;

	public const int MouseCollision = 8;
	public const int FloorCollision = 13;
	public const int TriggerSpotCollision = 14;
	public const int FartCollision = 15;

	public static int UserInteractionsLayerBitmask() {
		return ((1 << UserInteractions) | 
		        (1 << FloorCollision) | 
		        (1 << BuiltInUI) );
	}

	void Awake() {
		Physics2D.IgnoreLayerCollision (MouseCollision, 
		                                UserInteractions,
		                                true);			
		Physics2D.IgnoreLayerCollision (FloorCollision, 
		                                UserInteractions,
		                                true);	
		Physics2D.IgnoreLayerCollision (TriggerSpotCollision, 
		                                UserInteractions,
		                                true);			
		Physics2D.IgnoreLayerCollision (FartCollision, 
		                                UserInteractions,
		                                true);	


		Physics2D.IgnoreLayerCollision (FloorCollision, 
		                                TriggerSpotCollision,
		                                true);	
		Physics2D.IgnoreLayerCollision (FloorCollision, 
		                                FartCollision,
		                                true);	

		Physics2D.IgnoreLayerCollision (TriggerSpotCollision, 
		                                FartCollision,
		                                true);	
		Physics2D.IgnoreLayerCollision (TriggerSpotCollision, 
		                                TriggerSpotCollision,
		                                true);	

		Physics2D.IgnoreLayerCollision (FartCollision, 
		                                FartCollision,
		                                true);	
	}
}
