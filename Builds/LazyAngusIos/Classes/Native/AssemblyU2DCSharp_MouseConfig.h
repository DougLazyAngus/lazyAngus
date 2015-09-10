#pragma once
#include <stdint.h>
// System.Single[]
struct SingleU5BU5D_t541;
// MouseTypeDesc[]
struct MouseTypeDescU5BU5D_t542;
// MouseWiggleDesc[]
struct MouseWiggleDescU5BU5D_t543;
// MouseConfig
struct MouseConfig_t544;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseConfig
struct  MouseConfig_t544  : public MonoBehaviour_t13
{
	// System.Single MouseConfig::timeToTurn
	float ___timeToTurn_2;
	// System.Single MouseConfig::minCirclingRadius
	float ___minCirclingRadius_3;
	// System.Single MouseConfig::maxCirclingRadius
	float ___maxCirclingRadius_4;
	// System.Single MouseConfig::startMouseRadius
	float ___startMouseRadius_5;
	// System.Single[] MouseConfig::speeds
	SingleU5BU5D_t541* ___speeds_6;
	// System.Single[] MouseConfig::scales
	SingleU5BU5D_t541* ___scales_7;
	// UnityEngine.Color MouseConfig::poisonedColor
	Color_t325  ___poisonedColor_8;
	// UnityEngine.Color MouseConfig::fartedUponColor
	Color_t325  ___fartedUponColor_9;
	// UnityEngine.Vector3 MouseConfig::progressBarOffset
	Vector3_t523  ___progressBarOffset_10;
	// System.Single MouseConfig::minBFWiggleMagnitude
	float ___minBFWiggleMagnitude_11;
	// System.Single MouseConfig::maxBFWiggleMagnitude
	float ___maxBFWiggleMagnitude_12;
	// System.Int32 MouseConfig::minBFWiggleCycles
	int32_t ___minBFWiggleCycles_13;
	// System.Int32 MouseConfig::maxBFWiggleCycles
	int32_t ___maxBFWiggleCycles_14;
	// System.Single MouseConfig::minSSWiggleMagnitude
	float ___minSSWiggleMagnitude_15;
	// System.Single MouseConfig::maxSSWiggleMagnitude
	float ___maxSSWiggleMagnitude_16;
	// System.Int32 MouseConfig::minSSWiggleCycles
	int32_t ___minSSWiggleCycles_17;
	// System.Int32 MouseConfig::maxSSWiggleCycles
	int32_t ___maxSSWiggleCycles_18;
	// System.Single MouseConfig::minRDWiggleMagnitude
	float ___minRDWiggleMagnitude_19;
	// System.Single MouseConfig::maxRDWiggleMagnitude
	float ___maxRDWiggleMagnitude_20;
	// System.Int32 MouseConfig::minRDWiggleCycles
	int32_t ___minRDWiggleCycles_21;
	// System.Int32 MouseConfig::maxRDWiggleCycles
	int32_t ___maxRDWiggleCycles_22;
	// MouseTypeDesc[] MouseConfig::mouseDescs
	MouseTypeDescU5BU5D_t542* ___mouseDescs_23;
	// MouseWiggleDesc[] MouseConfig::mouseWiggleDescs
	MouseWiggleDescU5BU5D_t543* ___mouseWiggleDescs_24;
};
struct MouseConfig_t544_StaticFields{
	// MouseConfig MouseConfig::instance
	MouseConfig_t544 * ___instance_25;
};
