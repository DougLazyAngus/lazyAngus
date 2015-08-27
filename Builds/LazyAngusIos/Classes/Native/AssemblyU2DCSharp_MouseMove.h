#pragma once
#include <stdint.h>
// UnityEngine.Renderer
struct Renderer_t597;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.UI.Slider
struct Slider_t495;
// TweakableSlider
struct TweakableSlider_t598;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseMove
struct  MouseMove_t527  : public MonoBehaviour_t13
{
	// UnityEngine.Renderer MouseMove::mouseRenderer
	Renderer_t597 * ___mouseRenderer_3;
	// UnityEngine.GameObject MouseMove::trackingStatusBarPrototype
	GameObject_t352 * ___trackingStatusBarPrototype_4;
	// System.Single MouseMove::minDistanceToManuallyOrient
	float ___minDistanceToManuallyOrient_5;
	// UnityEngine.Transform MouseMove::artTransform
	Transform_t406 * ___artTransform_6;
	// System.Single MouseMove::mouseAngleDeg
	float ___mouseAngleDeg_7;
	// System.Single MouseMove::startAngleDeg
	float ___startAngleDeg_8;
	// System.Single MouseMove::endAngleDeg
	float ___endAngleDeg_9;
	// System.Single MouseMove::mouseRadius
	float ___mouseRadius_10;
	// System.Single MouseMove::circlingRadius
	float ___circlingRadius_11;
	// MouseConfig/MovementPhaseType MouseMove::phase
	int32_t ___phase_12;
	// System.Single MouseMove::phaseStartTime
	float ___phaseStartTime_13;
	// System.Single MouseMove::baseSpeedM
	float ___baseSpeedM_14;
	// System.Single MouseMove::actualSpeedM
	float ___actualSpeedM_15;
	// System.Boolean MouseMove::isClockwise
	bool ___isClockwise_16;
	// System.Single MouseMove::angleAdjustmentWhileRunning
	float ___angleAdjustmentWhileRunning_17;
	// System.Single MouseMove::zeroCenteredAngleAdjustmentWhileRunning
	float ___zeroCenteredAngleAdjustmentWhileRunning_18;
	// UnityEngine.UI.Slider MouseMove::sliderInstance
	Slider_t495 * ___sliderInstance_19;
	// TweakableSlider MouseMove::tweakableSlider
	TweakableSlider_t598 * ___tweakableSlider_20;
	// MouseConfig/MouseWiggleType MouseMove::wiggleType
	int32_t ___wiggleType_21;
	// System.Single MouseMove::wiggleMagnitude
	float ___wiggleMagnitude_22;
	// System.Single MouseMove::wiggleCycles
	float ___wiggleCycles_23;
	// System.Boolean MouseMove::wiggleClockwise
	bool ___wiggleClockwise_24;
	// System.Boolean MouseMove::registeredForEvents
	bool ___registeredForEvents_25;
	// MouseConfig/MouseType MouseMove::<mouseType>k__BackingField
	int32_t ___U3CmouseTypeU3Ek__BackingField_26;
	// System.Boolean MouseMove::<dead>k__BackingField
	bool ___U3CdeadU3Ek__BackingField_27;
	// System.Boolean MouseMove::<isPoisoned>k__BackingField
	bool ___U3CisPoisonedU3Ek__BackingField_28;
	// System.Boolean MouseMove::<isFartedUpon>k__BackingField
	bool ___U3CisFartedUponU3Ek__BackingField_29;
};
struct MouseMove_t527_StaticFields{
	// System.Int32 MouseMove::activeMouseCount
	int32_t ___activeMouseCount_2;
};
