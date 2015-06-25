using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MouseHole : MonoBehaviour {
	public Vector3 meterOffset;

	public enum MouseHoleLocation {
		NORTH = 0,
		EAST,
		SOUTH,
		WEST,
		NUM_TYPES,
	};
	
	public MouseHoleLocation mouseHoleLocation;

	public static float angleBetweenHoles = (360.0f / (float)MouseHoleLocation.NUM_TYPES);

	private Slider sliderInstance;	

	private int savedMouseCount;

	private ThrobForEffect throbForEffect;
	
	public delegate void MousePopChangedEventHandler();
	public event MousePopChangedEventHandler MousePopChanged;
	
	public delegate void CapacityChangedEventHandler();
	public event CapacityChangedEventHandler CapacityChanged;

	public GameObject holeMeterPrototype;
	private int capacity;

	// Use this for initialization
	void Start () {
		savedMouseCount = 0;
		throbForEffect = gameObject.GetComponent<ThrobForEffect> ();
		capacity = TweakableParams.instance.initialMicePerHole;

		MakeHoleMeter ();
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

	public void ClearMice() {
		if (savedMouseCount == 0) {
			return;
		}

		savedMouseCount = 0;

		if (MousePopChanged != null) {
			MousePopChanged();
		}
	}

	public void SaveMouse(MouseMove mouse) {
		mouse.OnSafeExit ();	
		
		if (CountSavedMouse (mouse)) {
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
