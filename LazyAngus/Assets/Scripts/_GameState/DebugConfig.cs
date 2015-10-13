using UnityEngine;
using System.Collections;

public class DebugConfig : MonoBehaviour {
	public bool useDebugValues;

	public bool clearAchievements = false;

	public bool debugFBShare = false;
	public bool debugTwitterShare = false;

	public static DebugConfig instance { get; private set; }

	public const int DEBUG_FLAG_SHORT_MOUSE_PATH = 0;
	public const int DEBUG_UI_FOR_APPLE = 1;
	public const int DEBUG_RATE_ME_DIALOG = 2;
	public const int DEBUG_SKIP_WELCOME = 3;
	public const int DEBUG_USE_OLD_PAWS = 4;
	public const int DEBUG_NON_APPLE_SHARING = 5;

	int debugFlags = 0;
	
	void Awake() {
		useDebugValues = false;
		instance = this;
		debugFlags = 0;
	}

	void Start() {
		debugFlags = PersistentStorage.instance.GetIntValue ("debugFlags", 0);
	}

	public bool IsDebugFlagSet(int debugFlag) {
		if (debugFlag < 0 || debugFlag >= 32) {
			return false;
		}

		return (((1 << debugFlag) & debugFlags) != 0);
	}

	public void SetDebugFlags(int debugFlags) {
		this.debugFlags = debugFlags;
		PersistentStorage.instance.SetIntValue("debugFlags", debugFlags);
	}

	public int GetDebugFlags() {
		return this.debugFlags;
	}
}
