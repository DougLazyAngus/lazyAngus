using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class MouseWiggleConfig {
	public int levelLock = 0;
	
	public float minMagnitude;
	public float maxMagnitude;
	
	public float minCycleTime;
	public float maxCycleTime;

	public MouseWiggleConfig(float minMagnitude, 
	                  float maxMagnitude, 
	                  float minCycleTime, 
	                  float maxCycleTime) {
		this.minMagnitude = minMagnitude;
		this.maxMagnitude = maxMagnitude;
		this.minCycleTime = minCycleTime;
		this.maxCycleTime = maxCycleTime;
	}
}

public class MouseConfig : MonoBehaviour {
	public enum MovementPhaseType {
		ENTERING_PHASE = 0,
		RUNNING_PHASE, 
		LEAVING_PHASE,
		NUM_TYPES,
	};
	
	public enum MouseType {
		MOUSE_TYPE_SLOW = 0,
		MOUSE_TYPE_MEDIUM,
		MOUSE_TYPE_FAST,
		MOUSE_TYPE_SUPERFAST,
		NUM_TYPES,
	};

	public enum MouseWiggleType
	{
		MOUSE_WIGGLE_SIDE_SIDE = 0,
		MOUSE_WIGGLE_BACK_FORTH = 1,
		MOUSE_WIGGLE_ROUND = 2,

		NUM_TYPES,
	}

	public float minCirclingRadius = 3.3f;
	public float maxCirclingRadius = 3.9f;
	public float startMouseRadius = 5.5f;
	
	public float minSpeedM = 1.4f;
	public float maxSpeedM = 2.6f;
	
	public float superSpeedM = 4.0f;

	public Sprite[] baseSprites;	
	public Sprite[] introSprites;
	public Sprite[] introWiggleSprites;

	public Color poisonedColor;
	public Color fartedUponColor;

	public Vector3 progressBarOffset;
	public GameObject deadMousePrototype;

	MouseWiggleConfig[] mouseWiggleConfigs;
	
	public float minBFWiggleMagnitude;
	public float maxBFWiggleMagnitude;
	public float minBFWiggleCycle;
	public float maxBFWiggleCycle;
	
	public float minSSWiggleMagnitude;
	public float maxSSWiggleMagnitude;
	public float minSSWiggleCycle;
	public float maxSSWiggleCycle;
	
	public float minRDWiggleMagnitude;
	public float maxRDWiggleMagnitude;
	public float minRDWiggleCycle;
	public float maxRDWiggleCycle;

	public static MouseConfig instance;

	void Awake() {
		instance = this;

		SetupMouseWiggleConfigs ();
	}

	void Start() {
		FillInWiggleLevelLocks ();
	}

	void SetupMouseWiggleConfigs() {
		mouseWiggleConfigs = new MouseWiggleConfig[(int)MouseWiggleType.NUM_TYPES];

		mouseWiggleConfigs [(int)MouseWiggleType.MOUSE_WIGGLE_BACK_FORTH] = new MouseWiggleConfig (
			minBFWiggleMagnitude, 
			maxBFWiggleMagnitude, 
			minBFWiggleCycle, 
			maxBFWiggleCycle);

		mouseWiggleConfigs [(int)MouseWiggleType.MOUSE_WIGGLE_SIDE_SIDE] = new MouseWiggleConfig (
			minSSWiggleMagnitude, 
			maxSSWiggleMagnitude, 
			minSSWiggleCycle, 
			maxSSWiggleCycle);

		mouseWiggleConfigs [(int)MouseWiggleType.MOUSE_WIGGLE_ROUND] = new MouseWiggleConfig (
			minRDWiggleMagnitude, 
			maxRDWiggleMagnitude, 
			minRDWiggleCycle, 
			maxRDWiggleCycle);
	}

	void FillInWiggleLevelLocks() {
		for (int i = 0; i < (int)MouseWiggleType.NUM_TYPES; i++) {
			mouseWiggleConfigs[i].levelLock = LevelConfig.instance.GetWiggleLevelLock(
				(MouseWiggleType)i);
		}
	}

	public MouseType GetRandomMouseType () {
		return (MouseType)Random.Range (0, (int)MouseType.NUM_TYPES);
	}
	
	public Sprite GetSpriteForMouseType(MouseType mt) {
		return baseSprites[(int)mt];
	}
	
	public Sprite GetIntroSpriteForMouseType(MouseType mt) {
		return introSprites[(int)mt];
	}

	public Sprite GetIntroSpriteForMouseWiggle(MouseWiggleType wt) {
		return introWiggleSprites [(int)wt];
	}

	public int GetLevelLock(MouseWiggleType mwType) {
		int index = (int)mwType;
		return mouseWiggleConfigs[index].levelLock;
	}

	public MouseWiggleConfig GetWiggleConfig(MouseWiggleType mwType) {
		int index = (int)mwType;
		if (index >= mouseWiggleConfigs.Length) {
			return null;
		}
		return mouseWiggleConfigs[index];
	}
}
