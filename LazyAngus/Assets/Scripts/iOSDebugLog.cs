using UnityEngine;
using System.Collections;


public class iOSDebugLog : MonoBehaviour {
	
	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public void LogInIOS(string testArg);
	public int foo;

	void Awake() {
		Application.RegisterLogCallback(HandleLog);
	}
	
	private void HandleLog(string condition, string stackTrace, LogType type)
	{
		string logEntry = string.Format("\n {0}\n {1} \n {2}", 
		                                type, condition, stackTrace);
		// Call plugin only when running on real device
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			LogInIOS ("OLAF LOG: " + logEntry);
		} else {
			foo = 23;
			foo = foo * foo;
		}
	}

	// Use this for initialization
	void Start () {
		// Call plugin only when running on real device
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			LogInIOS ("Aloha!  I am awake!");
		}
	}
}
