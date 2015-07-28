#pragma once
#include <stdint.h>
// SPTwitter
struct SPTwitter_t364;
// TwitterManagerInterface
struct TwitterManagerInterface_t341;
// System.Action`1<TWResult>
struct Action_1_t309;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SPTwitter
struct  SPTwitter_t364  : public MonoBehaviour_t13
{
	// System.Action`1<TWResult> SPTwitter::OnTwitterInitedAction
	Action_1_t309 * ___OnTwitterInitedAction_4;
	// System.Action`1<TWResult> SPTwitter::OnAuthCompleteAction
	Action_1_t309 * ___OnAuthCompleteAction_5;
	// System.Action`1<TWResult> SPTwitter::OnPostingCompleteAction
	Action_1_t309 * ___OnPostingCompleteAction_6;
	// System.Action`1<TWResult> SPTwitter::OnUserDataRequestCompleteAction
	Action_1_t309 * ___OnUserDataRequestCompleteAction_7;
};
struct SPTwitter_t364_StaticFields{
	// SPTwitter SPTwitter::_instance
	SPTwitter_t364 * ____instance_2;
	// TwitterManagerInterface SPTwitter::_twitterGate
	Object_t * ____twitterGate_3;
	// System.Action`1<TWResult> SPTwitter::<>f__am$cache6
	Action_1_t309 * ___U3CU3Ef__amU24cache6_8;
	// System.Action`1<TWResult> SPTwitter::<>f__am$cache7
	Action_1_t309 * ___U3CU3Ef__amU24cache7_9;
	// System.Action`1<TWResult> SPTwitter::<>f__am$cache8
	Action_1_t309 * ___U3CU3Ef__amU24cache8_10;
	// System.Action`1<TWResult> SPTwitter::<>f__am$cache9
	Action_1_t309 * ___U3CU3Ef__amU24cache9_11;
};
