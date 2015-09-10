#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.Generic.List`1<MouseTrap>
struct List_1_t628;
// SizeCamera
struct SizeCamera_t587;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MouseSinkController/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseSinkController_MouseHoleLocation.h"
// MouseSinkController
struct  MouseSinkController_t629  : public MonoBehaviour_t13
{
	// System.Int32 MouseSinkController::trapCapacity
	int32_t ___trapCapacity_5;
	// System.Int32 MouseSinkController::trapsSpent
	int32_t ___trapsSpent_6;
	// System.Boolean MouseSinkController::spreadClockwise
	bool ___spreadClockwise_7;
	// System.Single MouseSinkController::trapBasicZ
	float ___trapBasicZ_8;
	// System.Single MouseSinkController::distortDelay
	float ___distortDelay_9;
	// UnityEngine.GameObject MouseSinkController::mouseTrapPrototype
	GameObject_t352 * ___mouseTrapPrototype_11;
	// UnityEngine.GameObject MouseSinkController::mouseExitPrototype
	GameObject_t352 * ___mouseExitPrototype_12;
	// System.Collections.Generic.List`1<MouseTrap> MouseSinkController::mouseTraps
	List_1_t628 * ___mouseTraps_13;
	// MouseSinkController/MouseHoleLocation MouseSinkController::mouseHoleLocation
	int32_t ___mouseHoleLocation_14;
	// SizeCamera MouseSinkController::sizeCameraWorld
	SizeCamera_t587 * ___sizeCameraWorld_15;
	// System.Boolean MouseSinkController::registeredForEvents
	bool ___registeredForEvents_16;
	// System.Int32 MouseSinkController::<savedMouseCount>k__BackingField
	int32_t ___U3CsavedMouseCountU3Ek__BackingField_17;
};
struct MouseSinkController_t629_StaticFields{
	// System.Single MouseSinkController::angleBetweenHoles
	float ___angleBetweenHoles_10;
};
