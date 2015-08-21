#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.Generic.List`1<MouseTrap>
struct List_1_t599;
// SizeCamera
struct SizeCamera_t516;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseSinkController/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseSinkController_MouseHoleLocation.h"
// MouseSinkController
struct  MouseSinkController_t600  : public MonoBehaviour_t13
{
	// System.Int32 MouseSinkController::trapCapacity
	int32_t ___trapCapacity_5;
	// System.Boolean MouseSinkController::spreadClockwise
	bool ___spreadClockwise_6;
	// System.Single MouseSinkController::trapBasicZ
	float ___trapBasicZ_7;
	// UnityEngine.GameObject MouseSinkController::mouseTrapPrototype
	GameObject_t352 * ___mouseTrapPrototype_9;
	// UnityEngine.GameObject MouseSinkController::mouseExitPrototype
	GameObject_t352 * ___mouseExitPrototype_10;
	// System.Collections.Generic.List`1<MouseTrap> MouseSinkController::mouseTraps
	List_1_t599 * ___mouseTraps_11;
	// MouseSinkController/MouseHoleLocation MouseSinkController::mouseHoleLocation
	int32_t ___mouseHoleLocation_12;
	// SizeCamera MouseSinkController::sizeCameraWorld
	SizeCamera_t516 * ___sizeCameraWorld_13;
	// System.Boolean MouseSinkController::registeredForEvents
	bool ___registeredForEvents_14;
	// System.Int32 MouseSinkController::<savedMouseCount>k__BackingField
	int32_t ___U3CsavedMouseCountU3Ek__BackingField_15;
};
struct MouseSinkController_t600_StaticFields{
	// System.Single MouseSinkController::angleBetweenHoles
	float ___angleBetweenHoles_8;
};
