#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// TipController
struct TipController_t651;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TipController
struct  TipController_t651  : public MonoBehaviour_t13
{
	// System.Boolean TipController::registeredForEvents
	bool ___registeredForEvents_2;
	// UnityEngine.GameObject TipController::tipDialogPrototype
	GameObject_t352 * ___tipDialogPrototype_3;
	// System.Collections.IEnumerator TipController::enqueuedTip
	Object_t * ___enqueuedTip_4;
};
struct TipController_t651_StaticFields{
	// TipController TipController::instance
	TipController_t651 * ___instance_5;
};
