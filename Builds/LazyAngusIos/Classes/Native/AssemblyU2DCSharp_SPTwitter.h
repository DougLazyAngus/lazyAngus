#pragma once
#include <stdint.h>
// SPTwitter
struct SPTwitter_t324;
// TwitterManagerInterface
struct TwitterManagerInterface_t301;
// System.Action`1<TWResult>
struct Action_1_t269;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SPTwitter
struct  SPTwitter_t324  : public MonoBehaviour_t66
{
	// System.Action`1<TWResult> SPTwitter::OnTwitterInitedAction
	Action_1_t269 * ___OnTwitterInitedAction_4;
	// System.Action`1<TWResult> SPTwitter::OnAuthCompleteAction
	Action_1_t269 * ___OnAuthCompleteAction_5;
	// System.Action`1<TWResult> SPTwitter::OnPostingCompleteAction
	Action_1_t269 * ___OnPostingCompleteAction_6;
	// System.Action`1<TWResult> SPTwitter::OnUserDataRequestCompleteAction
	Action_1_t269 * ___OnUserDataRequestCompleteAction_7;
};
struct SPTwitter_t324_StaticFields{
	// SPTwitter SPTwitter::_instance
	SPTwitter_t324 * ____instance_2;
	// TwitterManagerInterface SPTwitter::_twitterGate
	Object_t * ____twitterGate_3;
	// System.Action`1<TWResult> SPTwitter::<>f__am$cache6
	Action_1_t269 * ___U3CU3Ef__amU24cache6_8;
	// System.Action`1<TWResult> SPTwitter::<>f__am$cache7
	Action_1_t269 * ___U3CU3Ef__amU24cache7_9;
	// System.Action`1<TWResult> SPTwitter::<>f__am$cache8
	Action_1_t269 * ___U3CU3Ef__amU24cache8_10;
	// System.Action`1<TWResult> SPTwitter::<>f__am$cache9
	Action_1_t269 * ___U3CU3Ef__amU24cache9_11;
};
