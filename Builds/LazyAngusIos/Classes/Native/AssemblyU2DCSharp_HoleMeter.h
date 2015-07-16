#pragma once
#include <stdint.h>
// UnityEngine.Sprite
struct Sprite_t392;
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t383;
// MouseHole
struct MouseHole_t437;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// HoleMeter
struct  HoleMeter_t435  : public MonoBehaviour_t67
{
	// UnityEngine.Sprite HoleMeter::emptySprite
	Sprite_t392 * ___emptySprite_2;
	// UnityEngine.Sprite HoleMeter::fullSprite
	Sprite_t392 * ___fullSprite_3;
	// UnityEngine.Vector3 HoleMeter::offset
	Vector3_t411  ___offset_4;
	// UnityEngine.GameObject HoleMeter::meterWidgetPrototype
	GameObject_t284 * ___meterWidgetPrototype_5;
	// UnityEngine.GameObject[] HoleMeter::meterWidgetGameObjects
	GameObjectU5BU5D_t383* ___meterWidgetGameObjects_6;
	// MouseHole HoleMeter::mouseHole
	MouseHole_t437 * ___mouseHole_7;
	// System.Boolean HoleMeter::registerdForEvents
	bool ___registerdForEvents_8;
};
