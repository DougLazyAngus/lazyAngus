using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class RecordGameplayButton : MonoBehaviour {
	bool registeredForEvents;
	
	Sprite onSprite;
	Sprite offSprite;
	public Image buttonImage;
	
	void Awake() {
		string path;
		
		path = "Textures/Buttons/replay_off_button";
		offSprite = Resources.Load<UnityEngine.Sprite>(path);
		
		path = "Textures/Buttons/replay_on_button";
		onSprite = Resources.Load<UnityEngine.Sprite>(path);	

		if (!RecordGameplayController.IsRecordingSupported ()) {
			gameObject.SetActive (false);
		}
	}
	
	// Use this for initialization
	void Start () {
		RegisterForEvents ();	
		UpdateButtonImage ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
		
	}
	
	void RegisterForEvents() {
		if (registeredForEvents) {
			return;
		}
		registeredForEvents = true;
		RecordGameplayController.instance.RecordGameplayChanged +=
			new RecordGameplayController.RecordGameplayChangedEventHandler (OnReplayChanged);
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			RecordGameplayController.instance.RecordGameplayChanged -=
				new RecordGameplayController.RecordGameplayChangedEventHandler (OnReplayChanged);
		}
	}
	
	void OnReplayChanged() {
		UpdateButtonImage ();
	}
	
	// Update is called once per frame
	void UpdateButtonImage () {
		if (RecordGameplayController.instance.IsRecording()) {
			buttonImage.sprite = onSprite;
		} else {
			buttonImage.sprite = offSprite;
		}
	}
}
