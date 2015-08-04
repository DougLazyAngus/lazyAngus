using UnityEngine;
using System.Collections;

public class LevelPlayUI : GameUI {
	public BoostButtonLayout boostButtonLayout;

	public override void ConfirmLayoutComplete() {
		boostButtonLayout.ConfirmLayoutComplete ();  
	}
}
