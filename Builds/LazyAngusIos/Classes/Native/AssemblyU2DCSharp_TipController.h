#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t312;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// TipController
struct TipController_t560;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TipController
struct  TipController_t560  : public MonoBehaviour_t66
{
	// System.Boolean TipController::registeredForEvents
	bool ___registeredForEvents_2;
	// UnityEngine.GameObject TipController::tipDialogPrototype
	GameObject_t312 * ___tipDialogPrototype_3;
	// System.Collections.IEnumerator TipController::enqueuedTip
	Object_t * ___enqueuedTip_4;
};
struct TipController_t560_StaticFields{
	// TipController TipController::instance
	TipController_t560 * ___instance_5;
};
