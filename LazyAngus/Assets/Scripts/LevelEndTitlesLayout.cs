﻿using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class LevelEndTitlesLayout : MonoBehaviour {
	public Text waveTitleText;
	public Text waveCountText;
	public Text waveSpecialText;
	public Image waveSpecialImage;

	private bool registerdForEvents;
	private DistortForEffect distortForEffect;

	private bool started;

	private bool waveDirty;

	void Awake() {
		started = false;
		registerdForEvents = false;
	}

	void Start () {
		waveDirty = false;

		RegisterForEvents ();

		SetWaveViews ();
		started = true;
	}

	void OnDestroy() {
		UnregisterForEvents ();
	}

	void OnEnable() {
		if (!started) {
			return;
		}
		SetWaveViews ();
	}


	void RegisterForEvents() {
		GameLevelState.instance.GameLevelChanged += new GameLevelState.GameLevelChangedEventHandler (OnGameLevelChanged);
		registerdForEvents = true;
	}

	void UnregisterForEvents() {
		if (registerdForEvents) {
			GameLevelState.instance.GameLevelChanged -= new GameLevelState.GameLevelChangedEventHandler (OnGameLevelChanged);
		}
	}


	void Update() {
		if (waveDirty) {
			SetWaveViews ();
		}
	}

	void SetWaveViews() {
		waveDirty = false;
		waveTitleText.text = "Wave " + GameLevelState.instance.gameLevel;

		LevelDescription ld = LevelConfig.instance.GetCurrentLevelDescription ();
		waveCountText.text = ld.explicitMouseDescs.Count + " mice";

		waveSpecialText.text = ld.specialText;

		if (ld.sprite != null) {
			waveSpecialImage.gameObject.SetActive (true);
			waveSpecialImage.sprite = ld.sprite;
		} else {
			waveSpecialImage.gameObject.SetActive (false);
		}
	}

	void OnGameLevelChanged() {
		waveDirty = true;
	}
}
