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
		CELEBRATING,
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

	public float[] speeds;
	public float[] scales;
	public int[] numSections;

	public Color poisonedColor;
	public Color fartedUponColor;

	public Vector3 progressBarOffset;
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
	private MouseTypeDesc[] mouseDescs;
	private MouseWiggleDesc[] mouseWiggleDescs;
	public static MouseConfig instance;

	void Awake ()
	{
		instance = this;

		LoadMouseDescs ();
		LoadMouseWiggleDescs ();
	}

	static string [] mouse01Names = {
		"mouse_01", 
		"mouse_01-AG"
	};
	
	static string [] mouse02Names = {
		"mouse_02", 
		"mouse_02-AG"
	};
	
	static string [] mouse03Names = {
		"mouse_03", 
		"mouse_03-AG"
	};
	
	static string [] mouse04Names = {
		"mouse_04", 
		"mouse_04-AG"
	};
	
	void LoadMouseDescs () {
		mouseDescs = new MouseTypeDesc[(int)MouseType.NUM_TYPES];

		mouseDescs [(int)MouseType.SLOW] = new MouseTypeDesc ("mouse_01",
		                                                      mouse01Names,
		                                                      speeds[(int)MouseType.SLOW],
		                                                      scales[(int)MouseType.SLOW]);

		mouseDescs [(int)MouseType.MEDIUM] = new MouseTypeDesc ("mouse_02",
		                                                        mouse02Names,
		                                                        speeds[(int)MouseType.MEDIUM], 
		                                                        scales[(int)MouseType.MEDIUM]);

		mouseDescs [(int)MouseType.FAST] = new MouseTypeDesc ("mouse_03",
		                                                      mouse03Names,
		                                                      speeds[(int)MouseType.FAST], 
		                                                      scales[(int)MouseType.FAST]);

		mouseDescs [(int)MouseType.SUPERFAST] = new MouseTypeDesc ("mouse_04",
		                                                           mouse04Names,
		                                                           speeds[(int)MouseType.SUPERFAST], 
		                                                           scales[(int)MouseType.SUPERFAST]);
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

	public MouseTypeDesc GetMouseTypeDesc (MouseType mt)
	{
		return mouseDescs [(int)mt];
	}
}

