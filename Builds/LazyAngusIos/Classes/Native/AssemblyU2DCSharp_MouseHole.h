#pragma once
#include <stdint.h>
// ThrobForEffect
struct ThrobForEffect_t554;
// UnityEngine.GameObject
struct GameObject_t352;
// TipConfig
struct TipConfig_t474;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t552;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t553;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseHole
struct  MouseHole_t522  : public MonoBehaviour_t13
{
	// UnityEngine.Vector3 MouseHole::meterOffset
	Vector3_t494  ___meterOffset_2;
	// MouseHole/MouseHoleLocation MouseHole::mouseHoleLocation
	int32_t ___mouseHoleLocation_3;
	// System.Int32 MouseHole::savedMouseCount
	int32_t ___savedMouseCount_5;
	// ThrobForEffect MouseHole::throbForEffect
	ThrobForEffect_t554 * ___throbForEffect_6;
	// UnityEngine.GameObject MouseHole::holeMeterPrototype
	GameObject_t352 * ___holeMeterPrototype_7;
	// TipConfig MouseHole::mouseHoleTip
	TipConfig_t474 * ___mouseHoleTip_8;
	// System.Int32 MouseHole::capacity
	int32_t ___capacity_9;
	// System.Boolean MouseHole::registeredForEvents
	bool ___registeredForEvents_10;
	// MouseHole/MousePopChangedEventHandler MouseHole::MousePopChanged
	MousePopChangedEventHandler_t552 * ___MousePopChanged_11;
	// MouseHole/CapacityChangedEventHandler MouseHole::CapacityChanged
	CapacityChangedEventHandler_t553 * ___CapacityChanged_12;
};
struct MouseHole_t522_StaticFields{
	// System.Single MouseHole::angleBetweenHoles
	float ___angleBetweenHoles_4;
};
