#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t310;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// TipController
struct TipController_t559;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TipController
struct  TipController_t559  : public MonoBehaviour_t67
{
	// System.Boolean TipController::registeredForEvents
	bool ___registeredForEvents_2;
	// UnityEngine.GameObject TipController::tipDialogPrototype
	GameObject_t310 * ___tipDialogPrototype_3;
	// System.Collections.IEnumerator TipController::enqueuedTip
	Object_t * ___enqueuedTip_4;
};
struct TipController_t559_StaticFields{
	// TipController TipController::instance
	TipController_t559 * ___instance_5;
};
