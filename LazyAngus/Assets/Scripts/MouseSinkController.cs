using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class MouseSinkController : MonoBehaviour {
	int trapCapacity = 1;
	
	bool spreadClockwise;

	const float spreadAngleDeg = 5f;
	const float spreadX = 0.2f;
	const float spreadY = 0.3f;

	public int savedMouseCount { get; private set; }
	
	public enum MouseHoleLocation {
		EAST = 0,
		NORTH,
		WEST,
		SOUTH,
		NUM_TYPES,
	};

	public static float angleBetweenHoles = (360.0f / (float)MouseHoleLocation.NUM_TYPES);

	public GameObject mouseTrapPrototype;
	public GameObject mouseExitPrototype;

	List<MouseTrap> mouseTraps;	
	public MouseHoleLocation mouseHoleLocation;
	SizeCamera sizeCameraWorld;

	bool registeredForEvents;

	void Awake() {
		savedMouseCount = 0;
		mouseTraps = new List<MouseTrap> ();
	}

	// Use this for initialization
	void Start () {
		sizeCameraWorld = Camera.main.GetComponent<SizeCamera> ();
		RegisterForEvents ();
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
		sizeCameraWorld.CameraSized += 
			new SizeCamera.CameraSizedHandler (OnCameraChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GameInstanceChanged -=
				new GamePhaseState.GameInstanceChangedEventHandler (OnInstanceChanged);
			sizeCameraWorld.CameraSized -= 
				new SizeCamera.CameraSizedHandler (OnCameraChanged);
		}
	}

	void OnCameraChanged() {
		Reset ();
	}

	void OnInstanceChanged() {
		Reset ();
	}

	void Reset() {
		float aspectRatio = sizeCameraWorld.GetAspectRatio ();
		if (aspectRatio > 1) {
			// Wider than it is tall.  East is in lower right corner.
			// So north/south fan clockwise.
			spreadClockwise = (mouseHoleLocation == MouseHoleLocation.NORTH || 
			                   mouseHoleLocation == MouseHoleLocation.SOUTH);
		} else {
			// Taller than it is wide.  East is in lower right corner.
			// So east/west fan clockwise.
			spreadClockwise = (mouseHoleLocation == MouseHoleLocation.EAST || 
			                   mouseHoleLocation == MouseHoleLocation.WEST);
		}

		savedMouseCount = 0;
		while (mouseTraps.Count != 0) {
			MouseTrap t = mouseTraps[0];
			mouseTraps.RemoveAt(0);
			Object.Destroy (t.gameObject);
		}

		for (int i = 0; i < trapCapacity; i++) {
			AddTrap();
		}
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag != "MouseCollider") {
			return;
		}
		
		MouseMove mouseMove = Utilities.FindComponentInAncestor<MouseMove> (other.gameObject);
		if (!mouseMove) {
			return;
		}
		
		if (mouseMove.GetMousePhase () != MouseConfig.MovementPhaseType.LEAVING) {
			return;
		}

		if (mouseTraps.Count > 0) {
			DeadMouseRelay.instance.HandleMouseKill(mouseMove);
			RemoveTopmostMouseTrap();
		} else {
			savedMouseCount += 1;
			GameController.instance.OnMouseExit (mouseMove);
			mouseMove.OnSafeExit ();
		}
	}

	void AddTrap() {
		int i = mouseTraps.Count;

		GameObject mouseTrapGameObject = Instantiate (mouseTrapPrototype, 
		                                              new Vector3(0, 0, 0),
		                                              Quaternion.identity) as GameObject;
		mouseTrapGameObject.transform.SetParent (transform);
		
		PositionNthMousetrap(mouseTrapGameObject, i);
		MouseTrap mouseTrap = mouseTrapGameObject.GetComponent<MouseTrap>();
		mouseTraps.Add (mouseTrap);
	}

	Vector3 NthMouseTrapPosition(int i) {
		float x = spreadX * i;
		float y = spreadY * i;
		if (spreadClockwise) {
			y *= -1;
		}
		float z = -0.3f + 0.01f * i;
		return new Vector3 (x, y, z);
	}

	float NthMouseTrapRotation(int i) {
		if (spreadClockwise) {
			return 90 - i * spreadAngleDeg;
		} else {
			return 90 + i * spreadAngleDeg;
		}
	}

	void PositionNthMousetrap(GameObject mouseTrapGameObject, int i) {
		mouseTrapGameObject.transform.localPosition = NthMouseTrapPosition (i);
		mouseTrapGameObject.transform.localRotation = Quaternion.Euler(0, 
		                                                               0,
		                                                               NthMouseTrapRotation(i));
	}

	void RemoveTopmostMouseTrap() {
		MouseTrap mt = mouseTraps [0];
		mouseTraps.RemoveAt(0);

		mt.AnimateOut ();

		// If there's one left, move it into position.
		for (int i = 0; i < mouseTraps.Count; i++) {
			Vector3 newPos = NthMouseTrapPosition (i);
			float newRotation = NthMouseTrapRotation (i);
			mouseTraps[i].SlideTo(newPos, newRotation);
		}
	}

	public void SetTrapCapacity(int newTrapCapacity) {
		bool somethingChanged = false;

		// Add traps to make up the difference.
		for (; trapCapacity < newTrapCapacity; trapCapacity++) {
			AddTrap();
			somethingChanged = true; 
		}

		if (somethingChanged && GameLevelState.instance.gameLevel != 1) {
			DistortForEffect d4e = GetComponent<DistortForEffect>();
			if (d4e) {
				d4e.Distort();
			}
		}
	}
}
