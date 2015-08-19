using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class MouseTrapController : MonoBehaviour {
	public Vector3 meterOffset;
	int trapCount;

	public enum MouseHoleLocation {
		EAST = 0,
		NORTH,
		WEST,
		SOUTH,
		NUM_TYPES,
	};

	public static float angleBetweenHoles = (360.0f / (float)MouseHoleLocation.NUM_TYPES);


	public GameObject mouseTrapPrototype;

	bool registeredForEvents;

	void Awake() {
		trapCount = 0;
	}

	// Use this for initialization
	void Start () {
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
		while (transform.childCount != 0) {
			Transform t = transform.GetChild(0);
			t.SetParent(null);
			Object.Destroy(t.gameObject);
		}

		MakeTraps ();
	}

	void MakeTraps() {
		for (int i = 0; i < trapCount; i++) {
			GameObject mouseTrapGameObject = Instantiate (mouseTrapPrototype, 
			                               new Vector3(0, 0, 0),
			                               Quaternion.identity) as GameObject;
			mouseTrapGameObject.transform.SetParent (transform);
			mouseTrapGameObject.transform.localPosition = new Vector3(0, 0, 0);
			mouseTrapGameObject.transform.localRotation = Quaternion.identity;
		}
	}


	public void SetTrapCount(int newTrapCount) {
		if (trapCount != newTrapCount) {
			trapCount = newTrapCount;
		}
		Reset ();
	}
}
