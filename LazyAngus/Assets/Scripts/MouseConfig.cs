using UnityEngine;
using System.Collections;
using UnityEngine.UI;

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
	
	public float minCirclingRadius = 3.3f;
	public float maxCirclingRadius = 3.9f;
	public float startMouseRadius = 5.5f;
	
	public float minSpeedM = 1.4f;
	public float maxSpeedM = 2.6f;
	
	public float superSpeedM = 4.0f;

	public Sprite[] baseSprites;	
	public Sprite[] introSprites;

	public Color poisonedColor;
	public Color fartedUponColor;

	public Vector3 progressBarOffset;
	public GameObject deadMousePrototype;

	public static MouseConfig instance;

	void Awake() {
		instance = this;
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
}
