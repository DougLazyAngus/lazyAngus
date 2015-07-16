#pragma once
#include <stdint.h>
// TwitterUserInfo
struct TwitterUserInfo_t240;
// System.Action`1<TWResult>
struct Action_1_t241;
// SA_Singleton`1<IOSTwitterManager>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_5.h"
// IOSTwitterManager
struct  IOSTwitterManager_t300  : public SA_Singleton_1_t301
{
	// System.Boolean IOSTwitterManager::_IsAuthed
	bool ____IsAuthed_8;
	// System.Boolean IOSTwitterManager::_IsInited
	bool ____IsInited_9;
	// TwitterUserInfo IOSTwitterManager::_userInfo
	TwitterUserInfo_t240 * ____userInfo_10;
	// System.Action`1<TWResult> IOSTwitterManager::OnTwitterInitedAction
	Action_1_t241 * ___OnTwitterInitedAction_11;
	// System.Action`1<TWResult> IOSTwitterManager::OnAuthCompleteAction
	Action_1_t241 * ___OnAuthCompleteAction_12;
	// System.Action`1<TWResult> IOSTwitterManager::OnPostingCompleteAction
	Action_1_t241 * ___OnPostingCompleteAction_13;
	// System.Action`1<TWResult> IOSTwitterManager::OnUserDataRequestCompleteAction
	Action_1_t241 * ___OnUserDataRequestCompleteAction_14;
};
struct IOSTwitterManager_t300_StaticFields{
	// System.Action`1<TWResult> IOSTwitterManager::<>f__am$cache7
	Action_1_t241 * ___U3CU3Ef__amU24cache7_15;
	// System.Action`1<TWResult> IOSTwitterManager::<>f__am$cache8
	Action_1_t241 * ___U3CU3Ef__amU24cache8_16;
	// System.Action`1<TWResult> IOSTwitterManager::<>f__am$cache9
	Action_1_t241 * ___U3CU3Ef__amU24cache9_17;
	// System.Action`1<TWResult> IOSTwitterManager::<>f__am$cacheA
	Action_1_t241 * ___U3CU3Ef__amU24cacheA_18;
};
