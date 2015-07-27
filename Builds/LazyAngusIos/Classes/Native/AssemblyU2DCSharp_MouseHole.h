#pragma once
#include <stdint.h>
// ThrobForEffect
struct ThrobForEffect_t510;
// UnityEngine.GameObject
struct GameObject_t312;
// TipConfig
struct TipConfig_t433;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t508;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t509;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseHole
struct  MouseHole_t478  : public MonoBehaviour_t66
{
	// UnityEngine.Vector3 MouseHole::meterOffset
	Vector3_t451  ___meterOffset_2;
	// MouseHole/MouseHoleLocation MouseHole::mouseHoleLocation
	int32_t ___mouseHoleLocation_3;
	// System.Int32 MouseHole::savedMouseCount
	int32_t ___savedMouseCount_5;
	// ThrobForEffect MouseHole::throbForEffect
	ThrobForEffect_t510 * ___throbForEffect_6;
	// UnityEngine.GameObject MouseHole::holeMeterPrototype
	GameObject_t312 * ___holeMeterPrototype_7;
	// TipConfig MouseHole::mouseHoleTip
	TipConfig_t433 * ___mouseHoleTip_8;
	// System.Int32 MouseHole::capacity
	int32_t ___capacity_9;
	// System.Boolean MouseHole::registeredForEvents
	bool ___registeredForEvents_10;
	// MouseHole/MousePopChangedEventHandler MouseHole::MousePopChanged
	MousePopChangedEventHandler_t508 * ___MousePopChanged_11;
	// MouseHole/CapacityChangedEventHandler MouseHole::CapacityChanged
	CapacityChangedEventHandler_t509 * ___CapacityChanged_12;
};
struct MouseHole_t478_StaticFields{
	// System.Single MouseHole::angleBetweenHoles
	float ___angleBetweenHoles_4;
};
