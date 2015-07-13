﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// TwitterUserInfo
struct TwitterUserInfo_t240;
// System.Action`1<TWResult>
struct Action_1_t241;
// SA_Singleton`1<AndroidTwitterManager>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_1.h"
// AndroidTwitterManager
struct  AndroidTwitterManager_t242  : public SA_Singleton_1_t243
{
	// System.Boolean AndroidTwitterManager::_IsAuthed
	bool ____IsAuthed_6;
	// System.Boolean AndroidTwitterManager::_IsInited
	bool ____IsInited_7;
	// System.String AndroidTwitterManager::_AccessToken
	String_t* ____AccessToken_8;
	// System.String AndroidTwitterManager::_AccessTokenSecret
	String_t* ____AccessTokenSecret_9;
	// TwitterUserInfo AndroidTwitterManager::_userInfo
	TwitterUserInfo_t240 * ____userInfo_10;
	// System.Action`1<TWResult> AndroidTwitterManager::OnTwitterInitedAction
	Action_1_t241 * ___OnTwitterInitedAction_11;
	// System.Action`1<TWResult> AndroidTwitterManager::OnAuthCompleteAction
	Action_1_t241 * ___OnAuthCompleteAction_12;
	// System.Action`1<TWResult> AndroidTwitterManager::OnPostingCompleteAction
	Action_1_t241 * ___OnPostingCompleteAction_13;
	// System.Action`1<TWResult> AndroidTwitterManager::OnUserDataRequestCompleteAction
	Action_1_t241 * ___OnUserDataRequestCompleteAction_14;
};
struct AndroidTwitterManager_t242_StaticFields{
	// System.Action`1<TWResult> AndroidTwitterManager::<>f__am$cache9
	Action_1_t241 * ___U3CU3Ef__amU24cache9_15;
	// System.Action`1<TWResult> AndroidTwitterManager::<>f__am$cacheA
	Action_1_t241 * ___U3CU3Ef__amU24cacheA_16;
	// System.Action`1<TWResult> AndroidTwitterManager::<>f__am$cacheB
	Action_1_t241 * ___U3CU3Ef__amU24cacheB_17;
	// System.Action`1<TWResult> AndroidTwitterManager::<>f__am$cacheC
	Action_1_t241 * ___U3CU3Ef__amU24cacheC_18;
};