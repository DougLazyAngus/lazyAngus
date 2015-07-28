#pragma once
#include <stdint.h>
// UnityEngine.Sprite
struct Sprite_t473;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t467;
// MouseHole
struct MouseHole_t522;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// HoleMeter
struct  HoleMeter_t520  : public MonoBehaviour_t13
{
	// UnityEngine.Sprite HoleMeter::emptySprite
	Sprite_t473 * ___emptySprite_2;
	// UnityEngine.Sprite HoleMeter::fullSprite
	Sprite_t473 * ___fullSprite_3;
	// UnityEngine.Vector3 HoleMeter::offset
	Vector3_t494  ___offset_4;
	// UnityEngine.GameObject HoleMeter::meterWidgetPrototype
	GameObject_t352 * ___meterWidgetPrototype_5;
	// UnityEngine.GameObject[] HoleMeter::meterWidgetGameObjects
	GameObjectU5BU5D_t467* ___meterWidgetGameObjects_6;
	// MouseHole HoleMeter::mouseHole
	MouseHole_t522 * ___mouseHole_7;
	// System.Boolean HoleMeter::registerdForEvents
	bool ___registerdForEvents_8;
};
