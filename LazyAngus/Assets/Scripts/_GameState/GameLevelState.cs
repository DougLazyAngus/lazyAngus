﻿using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class GameLevelState : MonoBehaviour {
	public delegate void GameLevelChangedEventHandler();
	public event GameLevelChangedEventHandler GameLevelChanged;
	
	public int gameLevel { get; private set; }

	public static GameLevelState instance { get; private set; }

	void Awake() {
		instance = this;
	}

	void Start() {
	}


	public void SetGameLevel(int gameLevel) {
		this.gameLevel = gameLevel;
		if (GameLevelChanged != null) {
			GameLevelChanged ();
		}
	}
}