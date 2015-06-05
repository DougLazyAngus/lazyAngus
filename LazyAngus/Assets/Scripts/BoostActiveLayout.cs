using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;


public class BoostActiveLayout : MonoBehaviour {
	public GameObject sliderPrototype;
	
	private bool registeredForEvents;
	
	private bool boostButtonsDirty;
	private bool treatsTextDirty;
	private bool levelTextDirty;
	
	private BoostConfig boostConfig;
	
	private bool started;
	
	private Slider sliderInstance;
	private bool sliderDirty;
	
	void Awake() {
		registeredForEvents = false;
		sliderDirty = false;
		
		started = false;
	}
	
	void Start () {
		boostConfig = BoostConfig.instance;
		
		RegisterForEvents ();

		AddSlider ();
		
		RefreshSlider ();
		
		started = true;
	}
	
	void OnEnable() {
		if (!started) {
			return;
		}
		RefreshSlider ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
	}
	
	void RegisterForEvents() {
		boostConfig.BoostActive += new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		
		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			boostConfig.BoostActive -= new BoostConfig.BoostActiveEventHandler (OnBoostUsageChanged);
		}
	}
	
	void Update() {
		if (sliderDirty) {
			RefreshSlider ();
			sliderDirty = false;
		}
		MaybeUpdateSliderProgress ();
	}
	
	void OnBoostUsageChanged() {
		sliderDirty = true;
	}

	void AddSlider() {
		GameObject sliderGameObject  = Instantiate (sliderPrototype, 
		                                            new Vector3(0, 0, 0),
		                                            Quaternion.identity) as GameObject;
		
		sliderGameObject.transform.SetParent (gameObject.transform);

		sliderInstance = sliderGameObject.GetComponent<Slider> ();		
	}

	void RefreshSlider() {
		if (boostConfig.IsBoostActive()) {
			BoostButtonLayout bbl = gameObject.GetComponent<BoostButtonLayout>();
			
			sliderInstance.gameObject.SetActive (true);
			// Position slider  top of the corresponding button.
			BoostButton bb = bbl.GetButtonForBoost(boostConfig.activeBoost);
			RectTransform sliderInstanceRectTransform = sliderInstance.gameObject.GetComponent<RectTransform>();
			RectTransform buttonRectTransform = bb.gameObject.GetComponent<RectTransform>();
			sliderInstanceRectTransform.anchoredPosition3D = buttonRectTransform.anchoredPosition3D;

			sliderInstance.gameObject.transform.SetAsLastSibling ();
		} else {
			sliderInstance.gameObject.SetActive (false);
		}
	}
	
	void MaybeUpdateSliderProgress() {
		if (boostConfig.IsBoostActive()) {
			float fractionFinished = boostConfig.GetActiveBoostFractionUsed();
			sliderInstance.value = fractionFinished;
		}
	}
}
