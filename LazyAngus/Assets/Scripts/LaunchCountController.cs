using UnityEngine;
using System.Collections;

public class LaunchCountController : MonoBehaviour {
	// Use this for initialization
	void Start () {
		int launchCount = PersistentStorage.instance.GetIntValue("launchCount", 0);
		PersistentStorage.instance.SetIntValue ("launchCount", launchCount + 1);
	}
}
