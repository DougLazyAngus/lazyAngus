using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using SimpleJSON;

public class PersistentStorage : MonoBehaviour {
	public static PersistentStorage instance;
	public static string valueStoreFilePath = "valuestore.txt";
	
	private JSONNode storedValues;


	string FullPathFromPartialPath(string path) {
		return Application.persistentDataPath + "/" + path;
	}
		

	void Awake() {
		instance = this;

		LoadValueStore ();
	}

	string ReadFileAsText(string path) {
		path = FullPathFromPartialPath(path);
		if (!System.IO.File.Exists (path)) {
			return "";
		}

		return System.IO.File.ReadAllText (path);
	}

	void WriteTextToFile(string path, string text) {
		path = FullPathFromPartialPath(path);
		System.IO.File.WriteAllText (path, text);
	}

	public void SetFloatValue(string name, float value) {
		storedValues[name] = "" + value;
		SaveValueStore ();
	}
	
	public float GetFloatValue(string name, float defaultValue) {
		if (storedValues == null) {
			return defaultValue;
		}
		
		string storedValue = storedValues [name];
		if (storedValue == null) {
			return defaultValue;
		} else {
			return float.Parse (storedValue);
		}
	}
	
	public void SetIntValue(string name, int value) {
		storedValues[name] = "" + value;
		SaveValueStore ();
	}
	
	public int GetIntValue(string name, int defaultValue) {
		if (storedValues == null) {
			return defaultValue;
		}
		
		string storedValue = storedValues [name];
		if (storedValue == null) {
			return defaultValue;
		} else {
			return Convert.ToInt32(storedValue);
		}
	}
	
	public void SetBoolValue(string name, bool value) {
		SetIntValue (name, value ? 1 : 0);
	}
	
	public bool GetBoolValue(string name, bool defaultValue) {
		if (storedValues == null) {
			return defaultValue;
		}
		
		string storedValue = storedValues [name];
		if (storedValue == null) {
			return defaultValue;
		} else {
			return (Convert.ToInt32(storedValue) != 0);
		}
	}

	void SaveValueStore() {
		string serializedValues = storedValues.ToString ();
		WriteTextToFile (valueStoreFilePath, serializedValues);
	}

	void LoadValueStore() {
		string valuesAsString = ReadFileAsText (valueStoreFilePath);
		storedValues = JSON.Parse (valuesAsString);
		if (storedValues == null) {
			storedValues = JSON.Parse ("{}");
		}
	}
}
