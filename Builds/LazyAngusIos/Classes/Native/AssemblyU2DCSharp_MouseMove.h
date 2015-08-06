#pragma once
#include <stdint.h>
// UnityEngine.Renderer
struct Renderer_t563;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.UI.Slider
struct Slider_t457;
// TweakableSlider
struct TweakableSlider_t564;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseMove
struct  MouseMove_t487  : public MonoBehaviour_t13
{
	// UnityEngine.Renderer MouseMove::mouseRenderer
	Renderer_t563 * ___mouseRenderer_3;
	// UnityEngine.GameObject MouseMove::trackingStatusBarPrototype
	GameObject_t352 * ___trackingStatusBarPrototype_4;
	// System.Single MouseMove::minDistanceToManuallyOrient
	float ___minDistanceToManuallyOrient_5;
	// System.Single MouseMove::mouseAngleDeg
	float ___mouseAngleDeg_6;
	// System.Single MouseMove::startAngleDeg
	float ___startAngleDeg_7;
	// System.Single MouseMove::endAngleDeg
	float ___endAngleDeg_8;
	// System.Single MouseMove::mouseRadius
	float ___mouseRadius_9;
	// System.Single MouseMove::circlingRadius
	float ___circlingRadius_10;
	// MouseConfig/MovementPhaseType MouseMove::phase
	int32_t ___phase_11;
	// System.Single MouseMove::phaseStartTime
	float ___phaseStartTime_12;
	// System.Single MouseMove::baseSpeedM
	float ___baseSpeedM_13;
	// System.Single MouseMove::actualSpeedM
	float ___actualSpeedM_14;
	// System.Boolean MouseMove::isClockwise
	bool ___isClockwise_15;
	// System.Single MouseMove::angleAdjustmentWhileRunning
	float ___angleAdjustmentWhileRunning_16;
	// System.Single MouseMove::zeroCenteredAngleAdjustmentWhileRunning
	float ___zeroCenteredAngleAdjustmentWhileRunning_17;
	// UnityEngine.UI.Slider MouseMove::sliderInstance
	Slider_t457 * ___sliderInstance_18;
	// TweakableSlider MouseMove::tweakableSlider
	TweakableSlider_t564 * ___tweakableSlider_19;
	// MouseConfig/MouseWiggleType MouseMove::wiggleType
	int32_t ___wiggleType_20;
	// System.Single MouseMove::wiggleMagnitude
	float ___wiggleMagnitude_21;
	// System.Single MouseMove::wiggleCycles
	float ___wiggleCycles_22;
	// System.Boolean MouseMove::wiggleClockwise
	bool ___wiggleClockwise_23;
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
struct MouseMove_t487_StaticFields{
	// System.Int32 MouseMove::activeMouseCount
	int32_t ___activeMouseCount_2;
};
