using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;


public class BoostActiveLayout : MonoBehaviour {
	public GameObject sliderPrototype;
	
	private bool registerdForEvents;
	
	private bool boostButtonsDirty;
	private bool treatsTextDirty;
	private bool levelTextDirty;
	
	private BoostConfig boostConfig;
	
	private bool started;
	
	private Slider sliderInstance;
	private bool sliderDirty;
	public Canvas containingCanvas;
	
	void Awake() {
		registerdForEvents = false;
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
		
		registerdForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registerdForEvents) {
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
		sliderInstance = sliderGameObject.GetComponent<Slider> ();		


		sliderGameObject.transform.SetParent (gameObject.transform, false);
	}

	void RefreshSlider() {
		if (boostConfig.IsBoostActive()) {
			BoostButtonLayout bbl = gameObject.GetComponent<BoostButtonLayout>();
			
			sliderInstance.gameObject.SetActive (true);

			BoostButton bb = bbl.GetButtonForBoost(boostConfig.activeBoost);

			RectTransform buttonRectTransform = bb.gameObject.GetComponent<RectTransform>();
			sliderInstance.gameObject.transform.SetAsLastSibling ();

			RectTransform sliderInstanceRectTransform = sliderInstance.gameObject.GetComponent<RectTransform>();
			sliderInstanceRectTransform.anchoredPosition3D = buttonRectTransform.anchoredPosition3D;
			sliderInstanceRectTransform.localScale = new Vector3(1f, 1f, 1f);
			sliderInstanceRectTransform.rotation = Quaternion.identity;
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
