using UnityEngine;
using System.Collections;


public class DebugLogPropagate : MonoBehaviour {
	
	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public void LogInIOS(string testArg);

	public int foo;
	
	void OnEnable () {
		Application.logMessageReceived += HandleLog;
	}
	
	void OnDisable () {
		// Remove callback when object goes out of scope
		Application.logMessageReceived -= HandleLog;
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
}
