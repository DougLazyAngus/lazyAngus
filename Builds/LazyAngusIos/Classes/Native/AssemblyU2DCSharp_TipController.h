#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t284;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// TipController
struct TipController_t520;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TipController
struct  TipController_t520  : public MonoBehaviour_t67
{
	// System.Boolean TipController::registeredForEvents
	bool ___registeredForEvents_2;
	// UnityEngine.GameObject TipController::tipDialogPrototype
	GameObject_t284 * ___tipDialogPrototype_3;
	// System.Collections.IEnumerator TipController::enqueuedTip
	Object_t * ___enqueuedTip_4;
};
struct TipController_t520_StaticFields{
	// TipController TipController::instance
	TipController_t520 * ___instance_5;
};
