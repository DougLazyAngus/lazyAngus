#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t284;
// BoostConfig
struct BoostConfig_t373;
// UnityEngine.UI.Slider
struct Slider_t374;
// UnityEngine.Canvas
struct Canvas_t375;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostActiveLayout
struct  BoostActiveLayout_t376  : public MonoBehaviour_t67
{
	// UnityEngine.GameObject BoostActiveLayout::sliderPrototype
	GameObject_t284 * ___sliderPrototype_2;
	// System.Boolean BoostActiveLayout::registerdForEvents
	bool ___registerdForEvents_3;
	// System.Boolean BoostActiveLayout::boostButtonsDirty
	bool ___boostButtonsDirty_4;
	// System.Boolean BoostActiveLayout::treatsTextDirty
	bool ___treatsTextDirty_5;
	// System.Boolean BoostActiveLayout::levelTextDirty
	bool ___levelTextDirty_6;
	// BoostConfig BoostActiveLayout::boostConfig
	BoostConfig_t373 * ___boostConfig_7;
	// System.Boolean BoostActiveLayout::started
	bool ___started_8;
	// UnityEngine.UI.Slider BoostActiveLayout::sliderInstance
	Slider_t374 * ___sliderInstance_9;
	// System.Boolean BoostActiveLayout::sliderDirty
	bool ___sliderDirty_10;
	// UnityEngine.Canvas BoostActiveLayout::containingCanvas
	Canvas_t375 * ___containingCanvas_11;
};
