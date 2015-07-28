#pragma once
#include <stdint.h>
// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.Action`1<TWResult>
struct Action_1_t309;
// SA_Singleton`1<IOSTwitterManager>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_8.h"
// IOSTwitterManager
struct  IOSTwitterManager_t368  : public SA_Singleton_1_t369
{
	// System.Boolean IOSTwitterManager::_IsAuthed
	bool ____IsAuthed_8;
	// System.Boolean IOSTwitterManager::_IsInited
	bool ____IsInited_9;
	// TwitterUserInfo IOSTwitterManager::_userInfo
	TwitterUserInfo_t308 * ____userInfo_10;
	// System.Action`1<TWResult> IOSTwitterManager::OnTwitterInitedAction
	Action_1_t309 * ___OnTwitterInitedAction_11;
	// System.Action`1<TWResult> IOSTwitterManager::OnAuthCompleteAction
	Action_1_t309 * ___OnAuthCompleteAction_12;
	// System.Action`1<TWResult> IOSTwitterManager::OnPostingCompleteAction
	Action_1_t309 * ___OnPostingCompleteAction_13;
	// System.Action`1<TWResult> IOSTwitterManager::OnUserDataRequestCompleteAction
	Action_1_t309 * ___OnUserDataRequestCompleteAction_14;
};
struct IOSTwitterManager_t368_StaticFields{
	// System.Action`1<TWResult> IOSTwitterManager::<>f__am$cache7
	Action_1_t309 * ___U3CU3Ef__amU24cache7_15;
	// System.Action`1<TWResult> IOSTwitterManager::<>f__am$cache8
	Action_1_t309 * ___U3CU3Ef__amU24cache8_16;
	// System.Action`1<TWResult> IOSTwitterManager::<>f__am$cache9
	Action_1_t309 * ___U3CU3Ef__amU24cache9_17;
	// System.Action`1<TWResult> IOSTwitterManager::<>f__am$cacheA
	Action_1_t309 * ___U3CU3Ef__amU24cacheA_18;
};
