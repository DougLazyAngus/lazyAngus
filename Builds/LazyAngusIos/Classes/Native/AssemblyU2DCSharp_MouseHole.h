#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t393;
// ThrobForEffect
struct ThrobForEffect_t456;
// UnityEngine.GameObject
struct GameObject_t284;
// TipConfig
struct TipConfig_t438;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t454;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t455;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseHole
struct  MouseHole_t434  : public MonoBehaviour_t67
{
	// UnityEngine.Vector3 MouseHole::meterOffset
	Vector3_t414  ___meterOffset_2;
	// UnityEngine.AudioSource MouseHole::safeMouseAudioSource
	AudioSource_t393 * ___safeMouseAudioSource_3;
	// MouseHole/MouseHoleLocation MouseHole::mouseHoleLocation
	int32_t ___mouseHoleLocation_4;
	// System.Int32 MouseHole::savedMouseCount
	int32_t ___savedMouseCount_6;
	// ThrobForEffect MouseHole::throbForEffect
	ThrobForEffect_t456 * ___throbForEffect_7;
	// UnityEngine.GameObject MouseHole::holeMeterPrototype
	GameObject_t284 * ___holeMeterPrototype_8;
	// TipConfig MouseHole::mouseHoleTip
	TipConfig_t438 * ___mouseHoleTip_9;
	// System.Int32 MouseHole::capacity
	int32_t ___capacity_10;
	// System.Boolean MouseHole::registeredForEvents
	bool ___registeredForEvents_11;
	// MouseHole/MousePopChangedEventHandler MouseHole::MousePopChanged
	MousePopChangedEventHandler_t454 * ___MousePopChanged_12;
	// MouseHole/CapacityChangedEventHandler MouseHole::CapacityChanged
	CapacityChangedEventHandler_t455 * ___CapacityChanged_13;
};
struct MouseHole_t434_StaticFields{
	// System.Single MouseHole::angleBetweenHoles
	float ___angleBetweenHoles_5;
};
