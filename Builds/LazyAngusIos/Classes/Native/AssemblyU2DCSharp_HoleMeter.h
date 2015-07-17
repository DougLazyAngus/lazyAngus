#pragma once
#include <stdint.h>
// UnityEngine.Sprite
struct Sprite_t430;
// UnityEngine.GameObject
struct GameObject_t310;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t424;
// MouseHole
struct MouseHole_t475;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// HoleMeter
struct  HoleMeter_t473  : public MonoBehaviour_t67
{
	// UnityEngine.Sprite HoleMeter::emptySprite
	Sprite_t430 * ___emptySprite_2;
	// UnityEngine.Sprite HoleMeter::fullSprite
	Sprite_t430 * ___fullSprite_3;
	// UnityEngine.Vector3 HoleMeter::offset
	Vector3_t449  ___offset_4;
	// UnityEngine.GameObject HoleMeter::meterWidgetPrototype
	GameObject_t310 * ___meterWidgetPrototype_5;
	// UnityEngine.GameObject[] HoleMeter::meterWidgetGameObjects
	GameObjectU5BU5D_t424* ___meterWidgetGameObjects_6;
	// MouseHole HoleMeter::mouseHole
	MouseHole_t475 * ___mouseHole_7;
	// System.Boolean HoleMeter::registerdForEvents
	bool ___registerdForEvents_8;
};
