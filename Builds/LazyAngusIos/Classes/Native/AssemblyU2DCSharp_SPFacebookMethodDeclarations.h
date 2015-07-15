#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPFacebook
struct SPFacebook_t214;
// System.String
struct String_t;
// FacebookUserInfo
struct FacebookUserInfo_t202;
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct Dictionary_2_t203;
// System.Collections.Generic.List`1<System.String>
struct List_1_t73;
// System.Collections.Generic.List`1<FacebookUserInfo>
struct List_1_t538;
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t204;
// System.Collections.Generic.List`1<FBScore>
struct List_1_t539;
// System.Collections.Generic.List`1<FBAppRequest>
struct List_1_t206;
// UnityEngine.Texture2D
struct Texture2D_t65;
// FBPostingTask
struct FBPostingTask_t229;
// System.String[]
struct StringU5BU5D_t45;
// FBResult
struct FBResult_t213;
// Facebook.OGActionType
struct OGActionType_t349;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t535;
// FBScore
struct FBScore_t225;
// System.Collections.Generic.List`1<FBLikeInfo>
struct List_1_t540;
// UnionAssets.FLE.CEvent
struct CEvent_t91;
// FBPostResult
struct FBPostResult_t222;
// FBAppRequestResult
struct FBAppRequestResult_t220;
// FB_APIResult
struct FB_APIResult_t230;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void SPFacebook::.ctor()
extern "C" void SPFacebook__ctor_m779 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Awake()
extern "C" void SPFacebook_Awake_m780 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Init()
extern "C" void SPFacebook_Init_m781 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Login()
extern "C" void SPFacebook_Login_m782 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Login(System.String)
extern "C" void SPFacebook_Login_m783 (SPFacebook_t214 * __this, String_t* ___scopes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Logout()
extern "C" void SPFacebook_Logout_m784 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadUserData()
extern "C" void SPFacebook_LoadUserData_m785 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadFrientdsInfo(System.Int32)
extern "C" void SPFacebook_LoadFrientdsInfo_m786 (SPFacebook_t214 * __this, int32_t ___limit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FacebookUserInfo SPFacebook::GetFriendById(System.String)
extern "C" FacebookUserInfo_t202 * SPFacebook_GetFriendById_m787 (SPFacebook_t214 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::PostImage(System.String,UnityEngine.Texture2D)
extern "C" void SPFacebook_PostImage_m788 (SPFacebook_t214 * __this, String_t* ___caption, Texture2D_t65 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBPostingTask SPFacebook::PostWithAuthCheck(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" FBPostingTask_t229 * SPFacebook_PostWithAuthCheck_m789 (SPFacebook_t214 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Post(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void SPFacebook_Post_m790 (SPFacebook_t214 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendTrunRequest(System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendTrunRequest_m791 (SPFacebook_t214 * __this, String_t* ___title, String_t* ___message, String_t* ___data, StringU5BU5D_t45* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendGift(System.String,System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendGift_m792 (SPFacebook_t214 * __this, String_t* ___title, String_t* ___message, String_t* ___objectId, String_t* ___data, StringU5BU5D_t45* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AskGift(System.String,System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_AskGift_m793 (SPFacebook_t214 * __this, String_t* ___title, String_t* ___message, String_t* ___objectId, String_t* ___data, StringU5BU5D_t45* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendInvite(System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendInvite_m794 (SPFacebook_t214 * __this, String_t* ___title, String_t* ___message, String_t* ___data, StringU5BU5D_t45* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequestCallBack(FBResult)
extern "C" void SPFacebook_AppRequestCallBack_m795 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppRequestFailed_AndroidCB(System.String)
extern "C" void SPFacebook_OnAppRequestFailed_AndroidCB_m796 (SPFacebook_t214 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppRequestCompleted_AndroidCB(System.String)
extern "C" void SPFacebook_OnAppRequestCompleted_AndroidCB_m797 (SPFacebook_t214 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String)
extern "C" void SPFacebook_AppRequest_m798 (SPFacebook_t214 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String)
extern "C" void SPFacebook_AppRequest_m799 (SPFacebook_t214 * __this, String_t* ___message, OGActionType_t349 * ___actionType, String_t* ___objectId, List_1_t535 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t541  ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String)
extern "C" void SPFacebook_AppRequest_m800 (SPFacebook_t214 * __this, String_t* ___message, StringU5BU5D_t45* ___to, List_1_t535 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t541  ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadPendingRequests()
extern "C" void SPFacebook_LoadPendingRequests_m801 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnRequestsLoadComplete(FBResult)
extern "C" void SPFacebook_OnRequestsLoadComplete_m802 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadPlayerScores()
extern "C" void SPFacebook_LoadPlayerScores_m803 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadAppScores()
extern "C" void SPFacebook_LoadAppScores_m804 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SubmitScore(System.Int32)
extern "C" void SPFacebook_SubmitScore_m805 (SPFacebook_t214 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::DeletePlayerScores()
extern "C" void SPFacebook_DeletePlayerScores_m806 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadCurrentUserLikes()
extern "C" void SPFacebook_LoadCurrentUserLikes_m807 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadLikes(System.String)
extern "C" void SPFacebook_LoadLikes_m808 (SPFacebook_t214 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadLikes(System.String,System.String)
extern "C" void SPFacebook_LoadLikes_m809 (SPFacebook_t214 * __this, String_t* ___userId, String_t* ___pageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Pay(System.String,System.Int32)
extern "C" void SPFacebook_Pay_m810 (SPFacebook_t214 * __this, String_t* ___product, int32_t ___quantity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String)
extern "C" void SPFacebook_Pay_m811 (SPFacebook_t214 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t541  ___quantityMin, Nullable_1_t541  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScore SPFacebook::GetCurrentPlayerScoreByAppId(System.String)
extern "C" FBScore_t225 * SPFacebook_GetCurrentPlayerScoreByAppId_m812 (SPFacebook_t214 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SPFacebook::GetCurrentPlayerIntScoreByAppId(System.String)
extern "C" int32_t SPFacebook_GetCurrentPlayerIntScoreByAppId_m813 (SPFacebook_t214 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SPFacebook::GetScoreByUserId(System.String)
extern "C" int32_t SPFacebook_GetScoreByUserId_m814 (SPFacebook_t214 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScore SPFacebook::GetScoreObjectByUserId(System.String)
extern "C" FBScore_t225 * SPFacebook_GetScoreObjectByUserId_m815 (SPFacebook_t214 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBLikeInfo> SPFacebook::GerUserLikesList(System.String)
extern "C" List_1_t540 * SPFacebook_GerUserLikesList_m816 (SPFacebook_t214 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::IsUserLikesPage(System.String,System.String)
extern "C" bool SPFacebook_IsUserLikesPage_m817 (SPFacebook_t214 * __this, String_t* ___userId, String_t* ___pageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::get_IsInited()
extern "C" bool SPFacebook_get_IsInited_m818 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::get_IsLoggedIn()
extern "C" bool SPFacebook_get_IsLoggedIn_m819 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPFacebook::get_UserId()
extern "C" String_t* SPFacebook_get_UserId_m820 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPFacebook::get_AccessToken()
extern "C" String_t* SPFacebook_get_AccessToken_m821 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FacebookUserInfo SPFacebook::get_userInfo()
extern "C" FacebookUserInfo_t202 * SPFacebook_get_userInfo_m822 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo> SPFacebook::get_friends()
extern "C" Dictionary_2_t203 * SPFacebook_get_friends_m823 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> SPFacebook::get_friendsIds()
extern "C" List_1_t73 * SPFacebook_get_friendsIds_m824 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FacebookUserInfo> SPFacebook::get_friendsList()
extern "C" List_1_t538 * SPFacebook_get_friendsList_m825 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FBScore> SPFacebook::get_userScores()
extern "C" Dictionary_2_t204 * SPFacebook_get_userScores_m826 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FBScore> SPFacebook::get_appScores()
extern "C" Dictionary_2_t204 * SPFacebook_get_appScores_m827 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBScore> SPFacebook::get_applicationScoreList()
extern "C" List_1_t539 * SPFacebook_get_applicationScoreList_m828 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBAppRequest> SPFacebook::get_AppRequests()
extern "C" List_1_t206 * SPFacebook_get_AppRequests_m829 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnUserLikesResult(UnionAssets.FLE.CEvent)
extern "C" void SPFacebook_OnUserLikesResult_m830 (SPFacebook_t214 * __this, CEvent_t91 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreDeleted(FBResult)
extern "C" void SPFacebook_OnScoreDeleted_m831 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreSubmited(FBResult)
extern "C" void SPFacebook_OnScoreSubmited_m832 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppScoresComplete(FBResult)
extern "C" void SPFacebook_OnAppScoresComplete_m833 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AddToAppScores(FBScore)
extern "C" void SPFacebook_AddToAppScores_m834 (SPFacebook_t214 * __this, FBScore_t225 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AddToUserScores(FBScore)
extern "C" void SPFacebook_AddToUserScores_m835 (SPFacebook_t214 * __this, FBScore_t225 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnLoaPlayrScoresComplete(FBResult)
extern "C" void SPFacebook_OnLoaPlayrScoresComplete_m836 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::resultTest(FBResult)
extern "C" void SPFacebook_resultTest_m837 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void SPFacebook_OnScoreRequestComplete_m838 (SPFacebook_t214 * __this, CEvent_t91 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::PostCallBack(FBResult)
extern "C" void SPFacebook_PostCallBack_m839 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::FriendsDataCallBack(FBResult)
extern "C" void SPFacebook_FriendsDataCallBack_m840 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::ParceFriendsData(System.String)
extern "C" void SPFacebook_ParceFriendsData_m841 (SPFacebook_t214 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::ScoreLoadResult(FBResult)
extern "C" void SPFacebook_ScoreLoadResult_m842 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::UserDataCallBack(FBResult)
extern "C" void SPFacebook_UserDataCallBack_m843 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnInitComplete()
extern "C" void SPFacebook_OnInitComplete_m844 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnHideUnity(System.Boolean)
extern "C" void SPFacebook_OnHideUnity_m845 (SPFacebook_t214 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoginCallback(FBResult)
extern "C" void SPFacebook_LoginCallback_m846 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::BroadcastLoginResult()
extern "C" void SPFacebook_BroadcastLoginResult_m847 (SPFacebook_t214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::FBPaymentCallBack(FBResult)
extern "C" void SPFacebook_FBPaymentCallBack_m848 (SPFacebook_t214 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnInitCompleteAction>m__1()
extern "C" void SPFacebook_U3COnInitCompleteActionU3Em__1_m849 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPostingCompleteAction>m__2(FBPostResult)
extern "C" void SPFacebook_U3COnPostingCompleteActionU3Em__2_m850 (Object_t * __this /* static, unused */, FBPostResult_t222 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnFocusChangedAction>m__3(System.Boolean)
extern "C" void SPFacebook_U3COnFocusChangedActionU3Em__3_m851 (Object_t * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAuthCompleteAction>m__4(FBResult)
extern "C" void SPFacebook_U3COnAuthCompleteActionU3Em__4_m852 (Object_t * __this /* static, unused */, FBResult_t213 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPaymentCompleteAction>m__5(FBResult)
extern "C" void SPFacebook_U3COnPaymentCompleteActionU3Em__5_m853 (Object_t * __this /* static, unused */, FBResult_t213 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnUserDataRequestCompleteAction>m__6(FBResult)
extern "C" void SPFacebook_U3COnUserDataRequestCompleteActionU3Em__6_m854 (Object_t * __this /* static, unused */, FBResult_t213 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnFriendsDataRequestCompleteAction>m__7(FBResult)
extern "C" void SPFacebook_U3COnFriendsDataRequestCompleteActionU3Em__7_m855 (Object_t * __this /* static, unused */, FBResult_t213 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppRequestCompleteAction>m__8(FBAppRequestResult)
extern "C" void SPFacebook_U3COnAppRequestCompleteActionU3Em__8_m856 (Object_t * __this /* static, unused */, FBAppRequestResult_t220 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppRequestsLoaded>m__9(FBResult)
extern "C" void SPFacebook_U3COnAppRequestsLoadedU3Em__9_m857 (Object_t * __this /* static, unused */, FBResult_t213 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppScoresRequestCompleteAction>m__A(FB_APIResult)
extern "C" void SPFacebook_U3COnAppScoresRequestCompleteActionU3Em__A_m858 (Object_t * __this /* static, unused */, FB_APIResult_t230 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPlayerScoresRequestCompleteAction>m__B(FB_APIResult)
extern "C" void SPFacebook_U3COnPlayerScoresRequestCompleteActionU3Em__B_m859 (Object_t * __this /* static, unused */, FB_APIResult_t230 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnSubmitScoreRequestCompleteAction>m__C(FB_APIResult)
extern "C" void SPFacebook_U3COnSubmitScoreRequestCompleteActionU3Em__C_m860 (Object_t * __this /* static, unused */, FB_APIResult_t230 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnDeleteScoresRequestCompleteAction>m__D(FB_APIResult)
extern "C" void SPFacebook_U3COnDeleteScoresRequestCompleteActionU3Em__D_m861 (Object_t * __this /* static, unused */, FB_APIResult_t230 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnLikesListLoadedAction>m__E(FB_APIResult)
extern "C" void SPFacebook_U3COnLikesListLoadedActionU3Em__E_m862 (Object_t * __this /* static, unused */, FB_APIResult_t230 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
