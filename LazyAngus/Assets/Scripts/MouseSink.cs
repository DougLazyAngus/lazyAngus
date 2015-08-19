using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class MouseSink : MonoBehaviour {
	public Vector3 meterOffset;

	public enum MouseHoleLocation {
		EAST = 0,
		NORTH,
		WEST,
		SOUTH,
		NUM_TYPES,
	};
	
	public MouseHoleLocation mouseSinkLocation;

	public static float angleBetweenHoles = (360.0f / (float)MouseHoleLocation.NUM_TYPES);

	private ThrobForEffect throbForEffect;
	
	public delegate void MousePopChangedEventHandler();
	public event MousePopChangedEventHandler MousePopChanged;
	
	public delegate void CapacityChangedEventHandler();
	public event CapacityChangedEventHandler CapacityChanged;

	public GameObject trapPrototype;

	public TipConfig mouseSinkTip;

	List<MouseTrap> mouseTraps;
	
	bool registeredForEvents;

	void Awake() {
		mouseSinkTip = new TipConfig ("mousesink", 
		                              "A mouse got away from you!\nDon't let that happen again!");
		mouseTraps = new List<MouseTrap>();
	}

	// Use this for initialization
	void Start () {
		RegisterForEvents ();

		throbForEffect = gameObject.GetComponent<ThrobForEffect> ();
		MakeSinkMeter ();

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
		GamePhaseState.instance.GameInstanceChanged +=
			new GamePhaseState.GameInstanceChangedEventHandler (OnInstanceChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GameInstanceChanged -=
				new GamePhaseState.GameInstanceChangedEventHandler (OnInstanceChanged);
		}
	}

	void OnInstanceChanged() {
		Reset ();
	}

	void Reset() {
		throbForEffect.SetThrobbing (false);

		while (mouseTraps.Count != 0) {
			MouseTrap deadMeat = mouseTraps.ElementAt(0);
			mouseTraps.RemoveAt(0);
			Object.Destroy(deadMeat.gameObject);
		}
	}

	void MakeSinkMeter() {
		GameObject sinkMeterGameObject = Instantiate (sinkMeterPrototype, 
		                                              new Vector3 (0, 0, 0),
		                                              Quaternion.identity) as GameObject;
		MouseSinkMeter holeMeter = sinkMeterGameObject.GetComponent<MouseSinkMeter> ();
		holeMeter.TrackHole (this);

		WorldObjectFollower wof = sinkMeterGameObject.GetComponent<WorldObjectFollower> ();
		wof.SetObjectToFollow (this.gameObject, 
		                       meterOffset, 
		                       false);
	}
	
	public void DoDoomedBoxFX() {
		throbForEffect.SetThrobbing (true);
	}

	bool MaybeCountSavedMouse(MouseMove mouse) {
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
			SFXPlayer.instance.Play (SFXPlayer.SFXType.SAFE_MOUSE);

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
