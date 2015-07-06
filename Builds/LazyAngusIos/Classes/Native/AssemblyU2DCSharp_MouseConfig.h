#pragma once
#include <stdint.h>
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t405;
// UnityEngine.GameObject
struct GameObject_t284;
// MouseConfig
struct MouseConfig_t452;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseConfig
struct  MouseConfig_t452  : public MonoBehaviour_t67
{
	// System.Single MouseConfig::minCirclingRadius
	float ___minCirclingRadius_2;
	// System.Single MouseConfig::maxCirclingRadius
	float ___maxCirclingRadius_3;
	// System.Single MouseConfig::startMouseRadius
	float ___startMouseRadius_4;
	// System.Single MouseConfig::minSpeedM
	float ___minSpeedM_5;
	// System.Single MouseConfig::maxSpeedM
	float ___maxSpeedM_6;
	// System.Single MouseConfig::superSpeedM
	float ___superSpeedM_7;
	// UnityEngine.Sprite[] MouseConfig::baseSprites
	SpriteU5BU5D_t405* ___baseSprites_8;
	// UnityEngine.Sprite[] MouseConfig::introSprites
	SpriteU5BU5D_t405* ___introSprites_9;
	// UnityEngine.Color MouseConfig::poisonedColor
	Color_t257  ___poisonedColor_10;
	// UnityEngine.Vector3 MouseConfig::progressBarOffset
	Vector3_t414  ___progressBarOffset_11;
	// UnityEngine.GameObject MouseConfig::deadMousePrototype
	GameObject_t284 * ___deadMousePrototype_12;
};
struct MouseConfig_t452_StaticFields{
	// MouseConfig MouseConfig::instance
	MouseConfig_t452 * ___instance_13;
};
