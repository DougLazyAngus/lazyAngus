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

	// Use this for initialization
	void Start () {	
	}

	string ReadFileAsText(string path) {
		if (false) {
			return "";
		}

		path = FullPathFromPartialPath(path);
		if (!System.IO.File.Exists (path)) {
			return "";
		}

		return System.IO.File.ReadAllText (path);
	}

	void WriteTextToFile(string path, string text) {
		if (false) {
			return;
		}
		string debugDir = System.IO.Directory.GetCurrentDirectory ();
		path = FullPathFromPartialPath(path);
		System.IO.File.WriteAllText (path, text);
	}
	
	// Update is called once per frame
	void Update () {	
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
