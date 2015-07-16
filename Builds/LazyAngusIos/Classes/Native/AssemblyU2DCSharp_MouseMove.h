#pragma once
#include <stdint.h>
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t470;
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.UI.Slider
struct Slider_t374;
// TweakableSlider
struct TweakableSlider_t471;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseMove
struct  MouseMove_t472  : public MonoBehaviour_t67
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
	// System.Single MouseMove::phaseStartTime
	float ___phaseStartTime_8;
	// System.Single MouseMove::baseSpeedM
	float ___baseSpeedM_9;
	// System.Single MouseMove::actualSpeedM
	float ___actualSpeedM_10;
	// UnityEngine.SpriteRenderer MouseMove::spriteRenderer
	SpriteRenderer_t470 * ___spriteRenderer_11;
	// UnityEngine.GameObject MouseMove::trackingStatusBarPrototype
	GameObject_t284 * ___trackingStatusBarPrototype_12;
	// System.Boolean MouseMove::isClockwise
	bool ___isClockwise_13;
	// System.Single MouseMove::angleAdjustmentWhileRunning
	float ___angleAdjustmentWhileRunning_14;
	// System.Single MouseMove::zeroCenteredAngleAdjustmentWhileRunning
	float ___zeroCenteredAngleAdjustmentWhileRunning_15;
	// UnityEngine.UI.Slider MouseMove::sliderInstance
	Slider_t374 * ___sliderInstance_16;
	// TweakableSlider MouseMove::tweakableSlider
	TweakableSlider_t471 * ___tweakableSlider_17;
	// MouseConfig/MouseWiggleType MouseMove::wiggleType
	int32_t ___wiggleType_19;
	// System.Single MouseMove::wiggleMagnitude
	float ___wiggleMagnitude_20;
	// System.Single MouseMove::wiggleCycles
	float ___wiggleCycles_21;
	// System.Boolean MouseMove::wiggleClockwise
	bool ___wiggleClockwise_22;
	// System.Single MouseMove::minDistanceToManuallyOrient
	float ___minDistanceToManuallyOrient_23;
	// System.Boolean MouseMove::registeredForEvents
	bool ___registeredForEvents_24;
	// MouseConfig/MouseType MouseMove::<mouseType>k__BackingField
	int32_t ___U3CmouseTypeU3Ek__BackingField_25;
	// System.Boolean MouseMove::<dead>k__BackingField
	bool ___U3CdeadU3Ek__BackingField_26;
	// System.Boolean MouseMove::<isPoisoned>k__BackingField
	bool ___U3CisPoisonedU3Ek__BackingField_27;
	// System.Boolean MouseMove::<isFartedUpon>k__BackingField
	bool ___U3CisFartedUponU3Ek__BackingField_28;
};
struct MouseMove_t472_StaticFields{
	// System.Int32 MouseMove::activeMouseCount
	int32_t ___activeMouseCount_18;
};
