using UnityEngine;
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
	
	private bool waveDirty;
	bool started;

	void Awake() {
		registerdForEvents = false;
		waveDirty = false;
	}

	void Start () {
		RegisterForEvents ();
		started = true;
	}

	void OnEnable() {
		waveDirty = true;
	}

	void OnDestroy() {
		UnregisterForEvents ();
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
		if (!started) {
			return;
		}

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
		SetWaveViews ();
	}
}
