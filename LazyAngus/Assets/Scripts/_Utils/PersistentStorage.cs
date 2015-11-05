using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using SimpleJSON;

public class PersistentStorage : MonoBehaviour {
	public static PersistentStorage instance;

	void Awake() {
		instance = this;
	}

	public void ClearAll() {
		PlayerPrefs.DeleteAll ();
	}

	public void SetStringValue(string name, string value) {
		PlayerPrefs.SetString (name, value);
	}
	
	public string GetStringValue(string name, string defaultValue) {
		return PlayerPrefs.GetString (name, defaultValue);
	}

	public void SetFloatValue(string name, float value) {
		PlayerPrefs.SetFloat (name, value);
	}
	
	public float GetFloatValue(string name, float defaultValue) {
		return PlayerPrefs.GetFloat (name, defaultValue);
	}
	
	public void SetIntValue(string name, int value) {
		PlayerPrefs.SetInt (name, value);
	}
	
	public int GetIntValue(string name, int defaultValue) {
		return PlayerPrefs.GetInt (name, defaultValue);
	}
	
	public void SetBoolValue(string name, bool value) {
		int iVal = value ? 1 : 0;
		PlayerPrefs.SetInt (name, iVal);
	}
	
	public bool GetBoolValue(string name, bool defaultValue) {
		int iVal = defaultValue ? 1 : 0;
		iVal = PlayerPrefs.GetInt (name, iVal);
		return (iVal != 0);
	}
}
