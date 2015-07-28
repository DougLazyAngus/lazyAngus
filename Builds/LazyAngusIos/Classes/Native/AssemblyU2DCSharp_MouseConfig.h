#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// MouseDesc[]
struct MouseDescU5BU5D_t547;
// MouseWiggleDesc[]
struct MouseWiggleDescU5BU5D_t548;
// MouseConfig
struct MouseConfig_t549;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseConfig
struct  MouseConfig_t549  : public MonoBehaviour_t13
{
	// System.Single MouseConfig::timeToTurn
	float ___timeToTurn_2;
	// System.Single MouseConfig::minCirclingRadius
	float ___minCirclingRadius_3;
	// System.Single MouseConfig::maxCirclingRadius
	float ___maxCirclingRadius_4;
	// System.Single MouseConfig::startMouseRadius
	float ___startMouseRadius_5;
	// System.Single MouseConfig::minSpeedM
	float ___minSpeedM_6;
	// System.Single MouseConfig::maxSpeedM
	float ___maxSpeedM_7;
	// System.Single MouseConfig::minScaleM
	float ___minScaleM_8;
	// System.Single MouseConfig::maxScaleM
	float ___maxScaleM_9;
	// System.Single MouseConfig::superSpeedM
	float ___superSpeedM_10;
	// UnityEngine.Color MouseConfig::poisonedColor
	Color_t325  ___poisonedColor_11;
	// UnityEngine.Color MouseConfig::fartedUponColor
	Color_t325  ___fartedUponColor_12;
	// UnityEngine.Vector3 MouseConfig::progressBarOffset
	Vector3_t494  ___progressBarOffset_13;
	// UnityEngine.GameObject MouseConfig::deadMousePrototype
	GameObject_t352 * ___deadMousePrototype_14;
	// System.Single MouseConfig::minBFWiggleMagnitude
	float ___minBFWiggleMagnitude_15;
	// System.Single MouseConfig::maxBFWiggleMagnitude
	float ___maxBFWiggleMagnitude_16;
	// System.Int32 MouseConfig::minBFWiggleCycles
	int32_t ___minBFWiggleCycles_17;
	// System.Int32 MouseConfig::maxBFWiggleCycles
	int32_t ___maxBFWiggleCycles_18;
	// System.Single MouseConfig::minSSWiggleMagnitude
	float ___minSSWiggleMagnitude_19;
	// System.Single MouseConfig::maxSSWiggleMagnitude
	float ___maxSSWiggleMagnitude_20;
	// System.Int32 MouseConfig::minSSWiggleCycles
	int32_t ___minSSWiggleCycles_21;
	// System.Int32 MouseConfig::maxSSWiggleCycles
	int32_t ___maxSSWiggleCycles_22;
	// System.Single MouseConfig::minRDWiggleMagnitude
	float ___minRDWiggleMagnitude_23;
	// System.Single MouseConfig::maxRDWiggleMagnitude
	float ___maxRDWiggleMagnitude_24;
	// System.Int32 MouseConfig::minRDWiggleCycles
	int32_t ___minRDWiggleCycles_25;
	// System.Int32 MouseConfig::maxRDWiggleCycles
	int32_t ___maxRDWiggleCycles_26;
	// MouseDesc[] MouseConfig::mouseDescs
	MouseDescU5BU5D_t547* ___mouseDescs_27;
	// MouseWiggleDesc[] MouseConfig::mouseWiggleDescs
	MouseWiggleDescU5BU5D_t548* ___mouseWiggleDescs_28;
};
struct MouseConfig_t549_StaticFields{
	// MouseConfig MouseConfig::instance
	MouseConfig_t549 * ___instance_29;
};
