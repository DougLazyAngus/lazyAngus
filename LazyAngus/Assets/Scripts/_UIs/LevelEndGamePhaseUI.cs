using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class LevelEndGamePhaseUI : GamePhaseUI {
	public Text waveTitleText;
	public Text waveCountText;
	public Text waveSpecialText;
	public Image waveSpecialImage;
	public float waveSpecialImageYOffset;
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

		waveSpecialImage.transform.localRotation = Quaternion.Euler (0, 0, ld.spriteSkew);
		waveSpecialImage.transform.localScale = new Vector2(ld.spriteScale,
		                                                    ld.spriteScale);
		waveSpecialImage.transform.localPosition = new Vector2 (0,
		                                                        waveSpecialImageYOffset + ld.spriteYOffset);
	}

	void OnGameLevelChanged() {
		waveDirty = true;
		SetWaveViews ();
	}
}
