using UnityEngine;
using System.Collections;

public class DebugConfig : MonoBehaviour {
	public bool isDebug;

	public int initialMoney = 100;
	public int initialBoosts = 5;

	public static DebugConfig instance { get; private set; }

	void Awake() {
		instance = this;
	}

	void Start() {
		if (isDebug) {
			TestPersistentStorage ();
		}
	}


	void TestPersistentStorage() {
		int testValue;

		testValue = PersistentStorage.instance.GetIntValue ("debug_fudge", 0);
		PersistentStorage.instance.SetIntValue ("debug_fudge", 22);
		testValue = PersistentStorage.instance.GetIntValue ("debug_fudge", 0);
		PersistentStorage.instance.SetIntValue ("debug_candy", 33);
		testValue = PersistentStorage.instance.GetIntValue ("debug_fudge", 0);
		testValue = PersistentStorage.instance.GetIntValue ("debug_candy", 0);
		PersistentStorage.instance.SetIntValue ("debug_candy", 100);
		testValue = PersistentStorage.instance.GetIntValue ("debug_candy", 0);
	}
}
