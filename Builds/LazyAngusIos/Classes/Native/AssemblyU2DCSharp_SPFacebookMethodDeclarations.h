#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPFacebook
struct SPFacebook_t282;
// System.String
struct String_t;
// FacebookUserInfo
struct FacebookUserInfo_t271;
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct Dictionary_2_t272;
// System.Collections.Generic.List`1<System.String>
struct List_1_t115;
// System.Collections.Generic.List`1<FacebookUserInfo>
struct List_1_t641;
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t273;
// System.Collections.Generic.List`1<FBScore>
struct List_1_t642;
// System.Collections.Generic.List`1<FBAppRequest>
struct List_1_t275;
// UnityEngine.Texture2D
struct Texture2D_t108;
// FBPostingTask
struct FBPostingTask_t297;
// System.String[]
struct StringU5BU5D_t75;
// FBResult
struct FBResult_t281;
// Facebook.OGActionType
struct OGActionType_t432;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t638;
// FBScore
struct FBScore_t293;
// System.Collections.Generic.List`1<FBLikeInfo>
struct List_1_t643;
// UnionAssets.FLE.CEvent
struct CEvent_t133;
// FBPostResult
struct FBPostResult_t290;
// FBAppRequestResult
struct FBAppRequestResult_t288;
// FB_APIResult
struct FB_APIResult_t298;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void SPFacebook::.ctor()
extern "C" void SPFacebook__ctor_m1452 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Awake()
extern "C" void SPFacebook_Awake_m1453 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Init()
extern "C" void SPFacebook_Init_m1454 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Login()
extern "C" void SPFacebook_Login_m1455 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Login(System.String)
extern "C" void SPFacebook_Login_m1456 (SPFacebook_t282 * __this, String_t* ___scopes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Logout()
extern "C" void SPFacebook_Logout_m1457 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadUserData()
extern "C" void SPFacebook_LoadUserData_m1458 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadFrientdsInfo(System.Int32)
extern "C" void SPFacebook_LoadFrientdsInfo_m1459 (SPFacebook_t282 * __this, int32_t ___limit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FacebookUserInfo SPFacebook::GetFriendById(System.String)
extern "C" FacebookUserInfo_t271 * SPFacebook_GetFriendById_m1460 (SPFacebook_t282 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::PostImage(System.String,UnityEngine.Texture2D)
extern "C" void SPFacebook_PostImage_m1461 (SPFacebook_t282 * __this, String_t* ___caption, Texture2D_t108 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBPostingTask SPFacebook::PostWithAuthCheck(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" FBPostingTask_t297 * SPFacebook_PostWithAuthCheck_m1462 (SPFacebook_t282 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Post(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void SPFacebook_Post_m1463 (SPFacebook_t282 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendTrunRequest(System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendTrunRequest_m1464 (SPFacebook_t282 * __this, String_t* ___title, String_t* ___message, String_t* ___data, StringU5BU5D_t75* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendGift(System.String,System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendGift_m1465 (SPFacebook_t282 * __this, String_t* ___title, String_t* ___message, String_t* ___objectId, String_t* ___data, StringU5BU5D_t75* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AskGift(System.String,System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_AskGift_m1466 (SPFacebook_t282 * __this, String_t* ___title, String_t* ___message, String_t* ___objectId, String_t* ___data, StringU5BU5D_t75* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendInvite(System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendInvite_m1467 (SPFacebook_t282 * __this, String_t* ___title, String_t* ___message, String_t* ___data, StringU5BU5D_t75* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequestCallBack(FBResult)
extern "C" void SPFacebook_AppRequestCallBack_m1468 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppRequestFailed_AndroidCB(System.String)
extern "C" void SPFacebook_OnAppRequestFailed_AndroidCB_m1469 (SPFacebook_t282 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppRequestCompleted_AndroidCB(System.String)
extern "C" void SPFacebook_OnAppRequestCompleted_AndroidCB_m1470 (SPFacebook_t282 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String)
extern "C" void SPFacebook_AppRequest_m1471 (SPFacebook_t282 * __this, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String)
extern "C" void SPFacebook_AppRequest_m1472 (SPFacebook_t282 * __this, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, List_1_t638 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t644  ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String)
extern "C" void SPFacebook_AppRequest_m1473 (SPFacebook_t282 * __this, String_t* ___message, StringU5BU5D_t75* ___to, List_1_t638 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t644  ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadPendingRequests()
extern "C" void SPFacebook_LoadPendingRequests_m1474 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnRequestsLoadComplete(FBResult)
extern "C" void SPFacebook_OnRequestsLoadComplete_m1475 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadPlayerScores()
extern "C" void SPFacebook_LoadPlayerScores_m1476 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadAppScores()
extern "C" void SPFacebook_LoadAppScores_m1477 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SubmitScore(System.Int32)
extern "C" void SPFacebook_SubmitScore_m1478 (SPFacebook_t282 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::DeletePlayerScores()
extern "C" void SPFacebook_DeletePlayerScores_m1479 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadCurrentUserLikes()
extern "C" void SPFacebook_LoadCurrentUserLikes_m1480 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadLikes(System.String)
extern "C" void SPFacebook_LoadLikes_m1481 (SPFacebook_t282 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadLikes(System.String,System.String)
extern "C" void SPFacebook_LoadLikes_m1482 (SPFacebook_t282 * __this, String_t* ___userId, String_t* ___pageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Pay(System.String,System.Int32)
extern "C" void SPFacebook_Pay_m1483 (SPFacebook_t282 * __this, String_t* ___product, int32_t ___quantity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String)
extern "C" void SPFacebook_Pay_m1484 (SPFacebook_t282 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t644  ___quantityMin, Nullable_1_t644  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScore SPFacebook::GetCurrentPlayerScoreByAppId(System.String)
extern "C" FBScore_t293 * SPFacebook_GetCurrentPlayerScoreByAppId_m1485 (SPFacebook_t282 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SPFacebook::GetCurrentPlayerIntScoreByAppId(System.String)
extern "C" int32_t SPFacebook_GetCurrentPlayerIntScoreByAppId_m1486 (SPFacebook_t282 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SPFacebook::GetScoreByUserId(System.String)
extern "C" int32_t SPFacebook_GetScoreByUserId_m1487 (SPFacebook_t282 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScore SPFacebook::GetScoreObjectByUserId(System.String)
extern "C" FBScore_t293 * SPFacebook_GetScoreObjectByUserId_m1488 (SPFacebook_t282 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBLikeInfo> SPFacebook::GerUserLikesList(System.String)
extern "C" List_1_t643 * SPFacebook_GerUserLikesList_m1489 (SPFacebook_t282 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::IsUserLikesPage(System.String,System.String)
extern "C" bool SPFacebook_IsUserLikesPage_m1490 (SPFacebook_t282 * __this, String_t* ___userId, String_t* ___pageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::get_IsInited()
extern "C" bool SPFacebook_get_IsInited_m1491 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::get_IsLoggedIn()
extern "C" bool SPFacebook_get_IsLoggedIn_m1492 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPFacebook::get_UserId()
extern "C" String_t* SPFacebook_get_UserId_m1493 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPFacebook::get_AccessToken()
extern "C" String_t* SPFacebook_get_AccessToken_m1494 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FacebookUserInfo SPFacebook::get_userInfo()
extern "C" FacebookUserInfo_t271 * SPFacebook_get_userInfo_m1495 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo> SPFacebook::get_friends()
extern "C" Dictionary_2_t272 * SPFacebook_get_friends_m1496 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> SPFacebook::get_friendsIds()
extern "C" List_1_t115 * SPFacebook_get_friendsIds_m1497 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FacebookUserInfo> SPFacebook::get_friendsList()
extern "C" List_1_t641 * SPFacebook_get_friendsList_m1498 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FBScore> SPFacebook::get_userScores()
extern "C" Dictionary_2_t273 * SPFacebook_get_userScores_m1499 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FBScore> SPFacebook::get_appScores()
extern "C" Dictionary_2_t273 * SPFacebook_get_appScores_m1500 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBScore> SPFacebook::get_applicationScoreList()
extern "C" List_1_t642 * SPFacebook_get_applicationScoreList_m1501 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBAppRequest> SPFacebook::get_AppRequests()
extern "C" List_1_t275 * SPFacebook_get_AppRequests_m1502 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnUserLikesResult(UnionAssets.FLE.CEvent)
extern "C" void SPFacebook_OnUserLikesResult_m1503 (SPFacebook_t282 * __this, CEvent_t133 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreDeleted(FBResult)
extern "C" void SPFacebook_OnScoreDeleted_m1504 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreSubmited(FBResult)
extern "C" void SPFacebook_OnScoreSubmited_m1505 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppScoresComplete(FBResult)
extern "C" void SPFacebook_OnAppScoresComplete_m1506 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AddToAppScores(FBScore)
extern "C" void SPFacebook_AddToAppScores_m1507 (SPFacebook_t282 * __this, FBScore_t293 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AddToUserScores(FBScore)
extern "C" void SPFacebook_AddToUserScores_m1508 (SPFacebook_t282 * __this, FBScore_t293 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnLoaPlayrScoresComplete(FBResult)
extern "C" void SPFacebook_OnLoaPlayrScoresComplete_m1509 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::resultTest(FBResult)
extern "C" void SPFacebook_resultTest_m1510 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void SPFacebook_OnScoreRequestComplete_m1511 (SPFacebook_t282 * __this, CEvent_t133 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::PostCallBack(FBResult)
extern "C" void SPFacebook_PostCallBack_m1512 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::FriendsDataCallBack(FBResult)
extern "C" void SPFacebook_FriendsDataCallBack_m1513 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::ParceFriendsData(System.String)
extern "C" void SPFacebook_ParceFriendsData_m1514 (SPFacebook_t282 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::ScoreLoadResult(FBResult)
extern "C" void SPFacebook_ScoreLoadResult_m1515 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::UserDataCallBack(FBResult)
extern "C" void SPFacebook_UserDataCallBack_m1516 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnInitComplete()
extern "C" void SPFacebook_OnInitComplete_m1517 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnHideUnity(System.Boolean)
extern "C" void SPFacebook_OnHideUnity_m1518 (SPFacebook_t282 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoginCallback(FBResult)
extern "C" void SPFacebook_LoginCallback_m1519 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::BroadcastLoginResult()
extern "C" void SPFacebook_BroadcastLoginResult_m1520 (SPFacebook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::FBPaymentCallBack(FBResult)
extern "C" void SPFacebook_FBPaymentCallBack_m1521 (SPFacebook_t282 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnInitCompleteAction>m__28()
extern "C" void SPFacebook_U3COnInitCompleteActionU3Em__28_m1522 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPostingCompleteAction>m__29(FBPostResult)
extern "C" void SPFacebook_U3COnPostingCompleteActionU3Em__29_m1523 (Object_t * __this /* static, unused */, FBPostResult_t290 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnFocusChangedAction>m__2A(System.Boolean)
extern "C" void SPFacebook_U3COnFocusChangedActionU3Em__2A_m1524 (Object_t * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAuthCompleteAction>m__2B(FBResult)
extern "C" void SPFacebook_U3COnAuthCompleteActionU3Em__2B_m1525 (Object_t * __this /* static, unused */, FBResult_t281 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPaymentCompleteAction>m__2C(FBResult)
extern "C" void SPFacebook_U3COnPaymentCompleteActionU3Em__2C_m1526 (Object_t * __this /* static, unused */, FBResult_t281 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnUserDataRequestCompleteAction>m__2D(FBResult)
extern "C" void SPFacebook_U3COnUserDataRequestCompleteActionU3Em__2D_m1527 (Object_t * __this /* static, unused */, FBResult_t281 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnFriendsDataRequestCompleteAction>m__2E(FBResult)
extern "C" void SPFacebook_U3COnFriendsDataRequestCompleteActionU3Em__2E_m1528 (Object_t * __this /* static, unused */, FBResult_t281 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppRequestCompleteAction>m__2F(FBAppRequestResult)
extern "C" void SPFacebook_U3COnAppRequestCompleteActionU3Em__2F_m1529 (Object_t * __this /* static, unused */, FBAppRequestResult_t288 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppRequestsLoaded>m__30(FBResult)
extern "C" void SPFacebook_U3COnAppRequestsLoadedU3Em__30_m1530 (Object_t * __this /* static, unused */, FBResult_t281 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppScoresRequestCompleteAction>m__31(FB_APIResult)
extern "C" void SPFacebook_U3COnAppScoresRequestCompleteActionU3Em__31_m1531 (Object_t * __this /* static, unused */, FB_APIResult_t298 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPlayerScoresRequestCompleteAction>m__32(FB_APIResult)
extern "C" void SPFacebook_U3COnPlayerScoresRequestCompleteActionU3Em__32_m1532 (Object_t * __this /* static, unused */, FB_APIResult_t298 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnSubmitScoreRequestCompleteAction>m__33(FB_APIResult)
extern "C" void SPFacebook_U3COnSubmitScoreRequestCompleteActionU3Em__33_m1533 (Object_t * __this /* static, unused */, FB_APIResult_t298 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnDeleteScoresRequestCompleteAction>m__34(FB_APIResult)
extern "C" void SPFacebook_U3COnDeleteScoresRequestCompleteActionU3Em__34_m1534 (Object_t * __this /* static, unused */, FB_APIResult_t298 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnLikesListLoadedAction>m__35(FB_APIResult)
extern "C" void SPFacebook_U3COnLikesListLoadedActionU3Em__35_m1535 (Object_t * __this /* static, unused */, FB_APIResult_t298 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
