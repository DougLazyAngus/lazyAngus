#pragma once
#include <stdint.h>
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t404;
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.UI.Slider
struct Slider_t373;
// TweakableSlider
struct TweakableSlider_t457;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseMove
struct  MouseMove_t458  : public MonoBehaviour_t67
{
	// System.Single MouseMove::mouseAngleDeg
	float ___mouseAngleDeg_2;
	// System.Single MouseMove::startAngleDeg
	float ___startAngleDeg_3;
	// System.Single MouseMove::endAngleDeg
	float ___endAngleDeg_4;
	// System.Single MouseMove::mouseRadius
	float ___mouseRadius_5;
	// System.Single MouseMove::circlingRadius
	float ___circlingRadius_6;
	// MouseConfig/MovementPhaseType MouseMove::phase
	int32_t ___phase_7;
	// System.Single MouseMove::baseSpeedM
	float ___baseSpeedM_8;
	// System.Single MouseMove::actualSpeedM
	float ___actualSpeedM_9;
	// UnityEngine.SpriteRenderer MouseMove::spriteRenderer
	SpriteRenderer_t404 * ___spriteRenderer_10;
	// UnityEngine.GameObject MouseMove::trackingStatusBarPrototype
	GameObject_t284 * ___trackingStatusBarPrototype_11;
	// System.Boolean MouseMove::isClockwise
	bool ___isClockwise_12;
	// UnityEngine.UI.Slider MouseMove::sliderInstance
	Slider_t373 * ___sliderInstance_13;
	// TweakableSlider MouseMove::tweakableSlider
	TweakableSlider_t457 * ___tweakableSlider_14;
	// System.Boolean MouseMove::registeredForEvents
	bool ___registeredForEvents_16;
	// MouseConfig/MouseType MouseMove::<mouseType>k__BackingField
	int32_t ___U3CmouseTypeU3Ek__BackingField_17;
	// System.Boolean MouseMove::<dead>k__BackingField
	bool ___U3CdeadU3Ek__BackingField_18;
	// System.Boolean MouseMove::<isPoisoned>k__BackingField
	bool ___U3CisPoisonedU3Ek__BackingField_19;
};
struct MouseMove_t458_StaticFields{
	// System.Int32 MouseMove::activeMouseCount
	int32_t ___activeMouseCount_15;
};
