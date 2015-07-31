using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseConfig : MonoBehaviour
{
	public enum MovementPhaseType
	{
		ENTERING = 0,
		TURNING_AFTER_ENTERING,
		RUNNING, 
		TURNING_BEFORE_LEAVING,
		LEAVING,
		NUM_TYPES,
	};
	
	public enum MouseType
	{
		SLOW = 0,
		MEDIUM,
		FAST,
		SUPERFAST,
		NUM_TYPES,
	};

	public enum MouseWiggleType
	{
		NONE = 0,
		SIDE_SIDE,
		BACK_FORTH,
		ROUND,

		NUM_TYPES,
	}

	public float timeToTurn = 0.2f;
	public float minCirclingRadius = 3.3f;
	public float maxCirclingRadius = 3.9f;
	public float startMouseRadius = 5.5f;
	public float minSpeedM = 1.4f;
	public float maxSpeedM = 2.6f;
	public float minScaleM = 1.0f;
	public float maxScaleM = 1.26f;
	public float superSpeedM = 4.0f;
	public Color poisonedColor;
	public Color fartedUponColor;
	public Vector3 progressBarOffset;
	public GameObject deadMousePrototype;
	public float minBFWiggleMagnitude = 0.15f;
	public float maxBFWiggleMagnitude = 0.55f;
	public int minBFWiggleCycles = 10;
	public int maxBFWiggleCycles = 14;
	public float minSSWiggleMagnitude = 0.15f;
	public float maxSSWiggleMagnitude = 0.55f;
	public int minSSWiggleCycles = 15;
	public int maxSSWiggleCycles = 20;
	public float minRDWiggleMagnitude = 0.15f;
	public float maxRDWiggleMagnitude = 0.55f;
	public int minRDWiggleCycles = 9;
	public int maxRDWiggleCycles = 14;
	private MouseDesc[] mouseDescs;
	private MouseWiggleDesc[] mouseWiggleDescs;
	public static MouseConfig instance;

	void Awake ()
	{
		instance = this;

		LoadMouseDescs ();
		LoadMouseWiggleDescs ();
	}

	void LoadMouseDescs ()
	{
		mouseDescs = new MouseDesc[(int)MouseType.NUM_TYPES];

		mouseDescs [(int)MouseType.SLOW] = new MouseDesc ("mouse.01", 
		                                                  "mouse.intro.01", 
		                                                  minSpeedM, 
		                                                  minScaleM);
		mouseDescs [(int)MouseType.MEDIUM] = new MouseDesc ("mouse.02", 
		                                                    "mouse.intro.02", 
		                                                    (minSpeedM + maxSpeedM) / 2, 
		                                                    (minScaleM + maxScaleM) / 2);
		mouseDescs [(int)MouseType.FAST] = new MouseDesc ("mouse.03", 
		                                                  "mouse.intro.03", 
		                                                  maxSpeedM, 
		                                                  maxScaleM);
		mouseDescs [(int)MouseType.SUPERFAST] = new MouseDesc ("mouse.04", 
		                                                       "mouse.intro.04", 
		                                                       superSpeedM, 
		                                                       minScaleM);
	}

	void LoadMouseWiggleDescs ()
	{
		mouseWiggleDescs = new MouseWiggleDesc[(int)MouseWiggleType.NUM_TYPES];

		mouseWiggleDescs [(int)MouseWiggleType.BACK_FORTH] = new MouseWiggleDesc (
			"mouse.wiggle.intro.01",
			minBFWiggleMagnitude, 
			maxBFWiggleMagnitude, 
			minBFWiggleCycles, 
			maxBFWiggleCycles);

		mouseWiggleDescs [(int)MouseWiggleType.SIDE_SIDE] = new MouseWiggleDesc (
			"mouse.wiggle.intro.02",
			minSSWiggleMagnitude, 
			maxSSWiggleMagnitude, 
			minSSWiggleCycles, 
			maxSSWiggleCycles);

		mouseWiggleDescs [(int)MouseWiggleType.ROUND] = new MouseWiggleDesc (
			"mouse.wiggle.intro.03",
			minRDWiggleMagnitude, 
			maxRDWiggleMagnitude, 
			minRDWiggleCycles, 
			maxRDWiggleCycles);
	}
	
	public MouseType GetRandomMouseType ()
	{
		return (MouseType)Random.Range (0, (int)MouseType.NUM_TYPES);
	}
	
	public Sprite deprecated_GetSpriteForMouseType (MouseType mt)
	{
		return mouseDescs [(int)mt].deprecated_mouseSprite;
	}
	
	public Sprite GetIntroSpriteForMouseType (MouseType mt)
	{
		return mouseDescs [(int)mt].introScreenSprite;
	}

	public Sprite GetIntroSpriteForMouseWiggle (MouseWiggleType wt)
	{
		MouseWiggleDesc mwd = GetWiggleDesc (wt);
		if (mwd != null) {
			return mwd.introScreenSprite;
		} else {
			return null;
		}
	}

	public MouseWiggleDesc GetWiggleDesc (MouseWiggleType wt)
	{
		return mouseWiggleDescs [(int)wt];
	}

	public MouseDesc GetMouseDesc (MouseType mt)
	{
		return mouseDescs [(int)mt];
	}
}

