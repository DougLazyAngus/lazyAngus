using UnityEngine;
using System.Collections;

public class DeadMouseRelay : MonoBehaviour {
	public static DeadMouseRelay instance;

	
	public delegate void MultiKillEventHandler(int numKilled, Vector3 pawPosition);
	public event MultiKillEventHandler MultiKill;

	public delegate void MouseKillEventHandler(MouseMove mouseMove);
	public event MouseKillEventHandler MouseKill;

	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {	
	}
	
	// Update is called once per frame
	void Update () {	
	}

	public void HandleMultiKill(int numKilled, Vector3 pawPosition) {
		if (MultiKill != null) {
			MultiKill (numKilled, pawPosition);
		}
	}

	public void HandleMouseKill(MouseMove mouseMove) {
		if (MouseKill != null) {
			MouseKill (mouseMove);
		}
		mouseMove.OnKilled ();
	}
}
