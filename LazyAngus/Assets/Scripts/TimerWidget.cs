using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TimerWidget : WorldRelativeGUIElement {
	GameObject worldCanvasGameObject;
	RectTransform rectTransform;

	public float actualCanvasSizePixels = 100;
	float desiredScaleNormal;
	float desiredScaleBig;
	bool initialized;
	float lifespan;
	float startTime;
	
	public Image image;

	void Initialize() {
	}

	void Awake() {
		// Setup parent camera.
		worldCanvasGameObject = GameObject.FindWithTag ("WorldObjectCanvas");
		SetParentCanvasGameObject (worldCanvasGameObject);
		
		// Figure out scale.
		float pawColliderWorldSize = TweakableParams.normalPawRadius * 2;		
		float timerWidgetPixels = WorldSizeToParentCanvasSize (pawColliderWorldSize);
		desiredScaleNormal = timerWidgetPixels / actualCanvasSizePixels;
		desiredScaleBig = desiredScaleNormal * TweakableParams.bigPawsMultiplier;

		rectTransform = GetComponent<RectTransform>();
	}

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		float timeDelta = Time.time - startTime;
		float timeFraction = timeDelta / lifespan;
		float frameAsFloat = timeFraction * (TimerWidgetConfig.instance.frames.Length - 1);
		int frameIndex = (int)Mathf.Floor (frameAsFloat);
		frameIndex = Mathf.Min (frameIndex, TimerWidgetConfig.instance.frames.Length - 1);
		image.sprite = TimerWidgetConfig.instance.frames [frameIndex];
	}

	public void Configure(float lifespan, Vector3 worldPosition) {
		this.lifespan = lifespan;
		UpdatePosition (worldPosition);
		startTime = Time.time;
	}

	public void UpdatePosition(Vector3 worldLocation) {
		// Set position and scale.
		Vector3 canvasPosition = WorldPositionToParentCanvasPosition(worldLocation);
		rectTransform.localPosition = canvasPosition;

		Vector3 scale;
		if (BoostConfig.instance.activeBoost == BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS) { 
			scale = new Vector3 (desiredScaleBig, desiredScaleBig, 1);
		} else {
			scale = new Vector3 (desiredScaleNormal, desiredScaleNormal, 1);
		}
		rectTransform.localScale = scale;
	}


}
