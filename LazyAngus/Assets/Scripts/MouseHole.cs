using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseHole : MonoBehaviour {
	public Vector3 meterOffset;
	public AudioSource safeMouseAudioSource;

	public enum MouseHoleLocation {
		NORTH = 0,
		EAST,
		SOUTH,
		WEST,
		NUM_TYPES,
	};
	
	public MouseHoleLocation mouseHoleLocation;

	public static float angleBetweenHoles = (360.0f / (float)MouseHoleLocation.NUM_TYPES);
	
	private int savedMouseCount;

	private ThrobForEffect throbForEffect;
	
	public delegate void MousePopChangedEventHandler();
	public event MousePopChangedEventHandler MousePopChanged;
	
	public delegate void CapacityChangedEventHandler();
	public event CapacityChangedEventHandler CapacityChanged;

	public GameObject holeMeterPrototype;

	public TipConfig mouseHoleTip;

	int capacity;
	bool registeredForEvents;

	void Awake() {
		mouseHoleTip = new TipConfig ("mousehole", 
		                             "A mouse got away from you!\nDon't let that happen again!");
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();

		throbForEffect = gameObject.GetComponent<ThrobForEffect> ();
		MakeHoleMeter ();

		Reset ();
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		GameController.instance.GameInstanceChanged +=
			new GameController.GameInstanceChangedEventHandler (OnInstanceChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GameController.instance.GameInstanceChanged -=
				new GameController.GameInstanceChangedEventHandler (OnInstanceChanged);
		}
	}


	void OnInstanceChanged() {
		Reset ();
	}

	void Reset() {
		savedMouseCount = 0;
		capacity = TweakableParams.GetInitialMicePerHole();
		throbForEffect.SetThrobbing (false);

		if (MousePopChanged != null) {
			MousePopChanged ();
		}

		if (CapacityChanged != null) {
			CapacityChanged ();
		}
	}

	void MakeHoleMeter() {
		GameObject holeMeterGameObject = Instantiate (holeMeterPrototype, 
		                                              new Vector3 (0, 0, 0),
		                                              Quaternion.identity) as GameObject;
		HoleMeter holeMeter = holeMeterGameObject.GetComponent<HoleMeter> ();
		holeMeter.TrackHole (this);

		WorldObjectFollower wof = holeMeterGameObject.GetComponent<WorldObjectFollower> ();
		wof.SetObjectToFollow (this.gameObject, 
		                       meterOffset, 
		                       false);
	}
	
	public void DoDoomedBoxFX() {
		throbForEffect.SetThrobbing (true);
	}

	bool CountSavedMouse(MouseMove mouse) {
		// We can never have more than max.
		if (savedMouseCount < capacity) {
			savedMouseCount++;
			return true;
		} else {
			return false;
		}
	}

	public void ClearNMice(int count) {
		if (count == 0) {
			return;
		}

		if (savedMouseCount == 0) {
			return;
		}

		count = Mathf.Min (count, savedMouseCount);
		savedMouseCount -= count;

		if (MousePopChanged != null) {
			MousePopChanged();
		}

	}

	public void ClearMice() {
		ClearNMice (savedMouseCount);
	}

	public void SaveMouse(MouseMove mouse) {
		mouse.OnSafeExit ();	

		if (CountSavedMouse (mouse)) {
			if (!SoundController.instance.sfxMuted) {
				safeMouseAudioSource.Play ();
			}

			TipController.instance.MaybeShowTip (mouseHoleTip);
			if (MousePopChanged != null) {
				MousePopChanged();
			}

			GameController.instance.OnMouseExit (mouse);		
		}
	}

	public bool IsFull() {
		return savedMouseCount >= capacity;
	}

	public int GetPopulation() {
		return savedMouseCount;
	}

	public int GetCapacity() {
		return capacity;
	}

	public void SetCapacity(int newCapacity) {
		if (capacity != newCapacity) {
			capacity = newCapacity;
			if (CapacityChanged != null) {
				CapacityChanged ();
			}
		}
	}
}
