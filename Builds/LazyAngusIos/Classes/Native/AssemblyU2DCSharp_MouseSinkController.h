#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.Generic.List`1<MouseTrap>
struct List_1_t600;
// SizeCamera
struct SizeCamera_t516;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseSinkController/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseSinkController_MouseHoleLocation.h"
// MouseSinkController
struct  MouseSinkController_t601  : public MonoBehaviour_t13
{
	// System.Int32 MouseSinkController::trapCapacity
	int32_t ___trapCapacity_5;
	// System.Boolean MouseSinkController::spreadClockwise
	bool ___spreadClockwise_6;
	// System.Single MouseSinkController::trapBasicZ
	float ___trapBasicZ_7;
	// System.Single MouseSinkController::distortDelay
	float ___distortDelay_8;
	// UnityEngine.GameObject MouseSinkController::mouseTrapPrototype
	GameObject_t352 * ___mouseTrapPrototype_10;
	// UnityEngine.GameObject MouseSinkController::mouseExitPrototype
	GameObject_t352 * ___mouseExitPrototype_11;
	// System.Collections.Generic.List`1<MouseTrap> MouseSinkController::mouseTraps
	List_1_t600 * ___mouseTraps_12;
	// MouseSinkController/MouseHoleLocation MouseSinkController::mouseHoleLocation
	int32_t ___mouseHoleLocation_13;
	// SizeCamera MouseSinkController::sizeCameraWorld
	SizeCamera_t516 * ___sizeCameraWorld_14;
	// System.Boolean MouseSinkController::registeredForEvents
	bool ___registeredForEvents_15;
	// System.Int32 MouseSinkController::<savedMouseCount>k__BackingField
	int32_t ___U3CsavedMouseCountU3Ek__BackingField_16;
};
struct MouseSinkController_t601_StaticFields{
	// System.Single MouseSinkController::angleBetweenHoles
	float ___angleBetweenHoles_9;
};
