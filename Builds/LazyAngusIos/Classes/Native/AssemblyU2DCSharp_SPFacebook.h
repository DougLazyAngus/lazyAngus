#pragma once
#include <stdint.h>
// FacebookUserInfo
struct FacebookUserInfo_t229;
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct Dictionary_2_t230;
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t231;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>>
struct Dictionary_2_t232;
// System.Collections.Generic.List`1<FBAppRequest>
struct List_1_t233;
// System.Action
struct Action_t101;
// System.Action`1<FBPostResult>
struct Action_1_t234;
// System.Action`1<System.Boolean>
struct Action_1_t235;
// System.Action`1<FBResult>
struct Action_1_t236;
// System.Action`1<FBAppRequestResult>
struct Action_1_t237;
// System.Action`1<FB_APIResult>
struct Action_1_t238;
// FBResult
struct FBResult_t239;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t181;
// SA_Singleton`1<SPFacebook>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_2.h"
// SPFacebook
struct  SPFacebook_t240  : public SA_Singleton_1_t241
{
	// FacebookUserInfo SPFacebook::_userInfo
	FacebookUserInfo_t229 * ____userInfo_6;
	// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo> SPFacebook::_friends
	Dictionary_2_t230 * ____friends_7;
	// System.Boolean SPFacebook::_IsInited
	bool ____IsInited_8;
	// System.Collections.Generic.Dictionary`2<System.String,FBScore> SPFacebook::_userScores
	Dictionary_2_t231 * ____userScores_9;
	// System.Collections.Generic.Dictionary`2<System.String,FBScore> SPFacebook::_appScores
	Dictionary_2_t231 * ____appScores_10;
	// System.Int32 SPFacebook::lastSubmitedScore
	int32_t ___lastSubmitedScore_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>> SPFacebook::_likes
	Dictionary_2_t232 * ____likes_12;
	// System.Collections.Generic.List`1<FBAppRequest> SPFacebook::_AppRequests
	List_1_t233 * ____AppRequests_13;
	// System.Action SPFacebook::OnInitCompleteAction
	Action_t101 * ___OnInitCompleteAction_14;
	// System.Action`1<FBPostResult> SPFacebook::OnPostingCompleteAction
	Action_1_t234 * ___OnPostingCompleteAction_15;
	// System.Action`1<System.Boolean> SPFacebook::OnFocusChangedAction
	Action_1_t235 * ___OnFocusChangedAction_16;
	// System.Action`1<FBResult> SPFacebook::OnAuthCompleteAction
	Action_1_t236 * ___OnAuthCompleteAction_17;
	// System.Action`1<FBResult> SPFacebook::OnPaymentCompleteAction
	Action_1_t236 * ___OnPaymentCompleteAction_18;
	// System.Action`1<FBResult> SPFacebook::OnUserDataRequestCompleteAction
	Action_1_t236 * ___OnUserDataRequestCompleteAction_19;
	// System.Action`1<FBResult> SPFacebook::OnFriendsDataRequestCompleteAction
	Action_1_t236 * ___OnFriendsDataRequestCompleteAction_20;
	// System.Action`1<FBAppRequestResult> SPFacebook::OnAppRequestCompleteAction
	Action_1_t237 * ___OnAppRequestCompleteAction_21;
	// System.Action`1<FBResult> SPFacebook::OnAppRequestsLoaded
	Action_1_t236 * ___OnAppRequestsLoaded_22;
	// System.Action`1<FB_APIResult> SPFacebook::OnAppScoresRequestCompleteAction
	Action_1_t238 * ___OnAppScoresRequestCompleteAction_23;
	// System.Action`1<FB_APIResult> SPFacebook::OnPlayerScoresRequestCompleteAction
	Action_1_t238 * ___OnPlayerScoresRequestCompleteAction_24;
	// System.Action`1<FB_APIResult> SPFacebook::OnSubmitScoreRequestCompleteAction
	Action_1_t238 * ___OnSubmitScoreRequestCompleteAction_25;
	// System.Action`1<FB_APIResult> SPFacebook::OnDeleteScoresRequestCompleteAction
	Action_1_t238 * ___OnDeleteScoresRequestCompleteAction_26;
	// System.Action`1<FB_APIResult> SPFacebook::OnLikesListLoadedAction
	Action_1_t238 * ___OnLikesListLoadedAction_27;
	// System.Boolean SPFacebook::IsLoginRequestSent
	bool ___IsLoginRequestSent_28;
	// FBResult SPFacebook::LoginCallbackResult
	FBResult_t239 * ___LoginCallbackResult_29;
};
struct SPFacebook_t240_StaticFields{
	// System.Action SPFacebook::<>f__am$cache18
	Action_t101 * ___U3CU3Ef__amU24cache18_30;
	// System.Action`1<FBPostResult> SPFacebook::<>f__am$cache19
	Action_1_t234 * ___U3CU3Ef__amU24cache19_31;
	// System.Action`1<System.Boolean> SPFacebook::<>f__am$cache1A
	Action_1_t235 * ___U3CU3Ef__amU24cache1A_32;
	// System.Action`1<FBResult> SPFacebook::<>f__am$cache1B
	Action_1_t236 * ___U3CU3Ef__amU24cache1B_33;
	// System.Action`1<FBResult> SPFacebook::<>f__am$cache1C
	Action_1_t236 * ___U3CU3Ef__amU24cache1C_34;
	// System.Action`1<FBResult> SPFacebook::<>f__am$cache1D
	Action_1_t236 * ___U3CU3Ef__amU24cache1D_35;
	// System.Action`1<FBResult> SPFacebook::<>f__am$cache1E
	Action_1_t236 * ___U3CU3Ef__amU24cache1E_36;
	// System.Action`1<FBAppRequestResult> SPFacebook::<>f__am$cache1F
	Action_1_t237 * ___U3CU3Ef__amU24cache1F_37;
	// System.Action`1<FBResult> SPFacebook::<>f__am$cache20
	Action_1_t236 * ___U3CU3Ef__amU24cache20_38;
	// System.Action`1<FB_APIResult> SPFacebook::<>f__am$cache21
	Action_1_t238 * ___U3CU3Ef__amU24cache21_39;
	// System.Action`1<FB_APIResult> SPFacebook::<>f__am$cache22
	Action_1_t238 * ___U3CU3Ef__amU24cache22_40;
	// System.Action`1<FB_APIResult> SPFacebook::<>f__am$cache23
	Action_1_t238 * ___U3CU3Ef__amU24cache23_41;
	// System.Action`1<FB_APIResult> SPFacebook::<>f__am$cache24
	Action_1_t238 * ___U3CU3Ef__amU24cache24_42;
	// System.Action`1<FB_APIResult> SPFacebook::<>f__am$cache25
	Action_1_t238 * ___U3CU3Ef__amU24cache25_43;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SPFacebook::<>f__switch$map1
	Dictionary_2_t181 * ___U3CU3Ef__switchU24map1_44;
};
