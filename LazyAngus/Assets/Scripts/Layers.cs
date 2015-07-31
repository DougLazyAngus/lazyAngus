using UnityEngine;
using System.Collections;

public class Layers : MonoBehaviour {

	// The layer for things in the game that collide with each other: 
	// paw collision components
	// mice collision components
	// hole collision components
	public const int MiceAndSlaps = 8;

	// The layer for things in the game the user can tap:
	// Angus's body collision component.
	// The floor collision component.
	public const int UserInteractions = 9;

	// The layer for things that get lit and cast or receive shadows.
	// - The floor visual component.
	// - All cat parts visual components.
	// - Mouse visual components.
	// - Hole visual components.
	public const int ShadowCastLayer = 12;
	
	void Awake() {
		Physics2D.IgnoreLayerCollision (MiceAndSlaps, 
		                                UserInteractions,
		                                true);	
	}
}
