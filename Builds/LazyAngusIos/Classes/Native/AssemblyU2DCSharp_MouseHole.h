#pragma once
#include <stdint.h>
// UnityEngine.UI.Slider
struct Slider_t374;
// ThrobForEffect
struct ThrobForEffect_t449;
// UnityEngine.GameObject
struct GameObject_t284;
// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t447;
// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t448;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseHole
struct  MouseHole_t427  : public MonoBehaviour_t67
{
	// UnityEngine.Vector3 MouseHole::meterOffset
	Vector3_t412  ___meterOffset_2;
	// MouseHole/MouseHoleLocation MouseHole::mouseHoleLocation
	int32_t ___mouseHoleLocation_3;
	// UnityEngine.UI.Slider MouseHole::sliderInstance
	Slider_t374 * ___sliderInstance_5;
	// System.Int32 MouseHole::savedMouseCount
	int32_t ___savedMouseCount_6;
	// ThrobForEffect MouseHole::throbForEffect
	ThrobForEffect_t449 * ___throbForEffect_7;
	// UnityEngine.GameObject MouseHole::holeMeterPrototype
	GameObject_t284 * ___holeMeterPrototype_8;
	// System.Int32 MouseHole::capacity
	int32_t ___capacity_9;
	// MouseHole/MousePopChangedEventHandler MouseHole::MousePopChanged
	MousePopChangedEventHandler_t447 * ___MousePopChanged_10;
	// MouseHole/CapacityChangedEventHandler MouseHole::CapacityChanged
	CapacityChangedEventHandler_t448 * ___CapacityChanged_11;
};
struct MouseHole_t427_StaticFields{
	// System.Single MouseHole::angleBetweenHoles
	float ___angleBetweenHoles_4;
};
