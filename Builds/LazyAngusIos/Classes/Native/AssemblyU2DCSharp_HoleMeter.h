#pragma once
#include <stdint.h>
// UnityEngine.Sprite
struct Sprite_t432;
// UnityEngine.GameObject
struct GameObject_t312;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t426;
// MouseHole
struct MouseHole_t478;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// HoleMeter
struct  HoleMeter_t476  : public MonoBehaviour_t66
{
	// UnityEngine.Sprite HoleMeter::emptySprite
	Sprite_t432 * ___emptySprite_2;
	// UnityEngine.Sprite HoleMeter::fullSprite
	Sprite_t432 * ___fullSprite_3;
	// UnityEngine.Vector3 HoleMeter::offset
	Vector3_t451  ___offset_4;
	// UnityEngine.GameObject HoleMeter::meterWidgetPrototype
	GameObject_t312 * ___meterWidgetPrototype_5;
	// UnityEngine.GameObject[] HoleMeter::meterWidgetGameObjects
	GameObjectU5BU5D_t426* ___meterWidgetGameObjects_6;
	// MouseHole HoleMeter::mouseHole
	MouseHole_t478 * ___mouseHole_7;
	// System.Boolean HoleMeter::registerdForEvents
	bool ___registerdForEvents_8;
};
