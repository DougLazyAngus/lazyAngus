﻿using UnityEngine;
using System.Collections;

public class TimerWidgetConfig : MonoBehaviour {
	public Sprite [] frames;
	public static TimerWidgetConfig instance;

	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
