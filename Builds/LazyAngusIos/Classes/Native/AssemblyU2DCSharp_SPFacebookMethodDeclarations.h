#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPFacebook
struct SPFacebook_t242;
// System.String
struct String_t;
// FacebookUserInfo
struct FacebookUserInfo_t231;
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct Dictionary_2_t232;
// System.Collections.Generic.List`1<System.String>
struct List_1_t75;
// System.Collections.Generic.List`1<FacebookUserInfo>
struct List_1_t587;
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t233;
// System.Collections.Generic.List`1<FBScore>
struct List_1_t588;
// System.Collections.Generic.List`1<FBAppRequest>
struct List_1_t235;
// UnityEngine.Texture2D
struct Texture2D_t68;
// FBPostingTask
struct FBPostingTask_t257;
// System.String[]
struct StringU5BU5D_t45;
// FBResult
struct FBResult_t241;
// Facebook.OGActionType
struct OGActionType_t392;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t584;
// FBScore
struct FBScore_t253;
// System.Collections.Generic.List`1<FBLikeInfo>
struct List_1_t589;
// UnionAssets.FLE.CEvent
struct CEvent_t93;
// FBPostResult
struct FBPostResult_t250;
// FBAppRequestResult
struct FBAppRequestResult_t248;
// FB_APIResult
struct FB_APIResult_t258;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void SPFacebook::.ctor()
extern "C" void SPFacebook__ctor_m1181 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Awake()
extern "C" void SPFacebook_Awake_m1182 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Init()
extern "C" void SPFacebook_Init_m1183 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Login()
extern "C" void SPFacebook_Login_m1184 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Login(System.String)
extern "C" void SPFacebook_Login_m1185 (SPFacebook_t242 * __this, String_t* ___scopes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Logout()
extern "C" void SPFacebook_Logout_m1186 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadUserData()
extern "C" void SPFacebook_LoadUserData_m1187 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadFrientdsInfo(System.Int32)
extern "C" void SPFacebook_LoadFrientdsInfo_m1188 (SPFacebook_t242 * __this, int32_t ___limit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FacebookUserInfo SPFacebook::GetFriendById(System.String)
extern "C" FacebookUserInfo_t231 * SPFacebook_GetFriendById_m1189 (SPFacebook_t242 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::PostImage(System.String,UnityEngine.Texture2D)
extern "C" void SPFacebook_PostImage_m1190 (SPFacebook_t242 * __this, String_t* ___caption, Texture2D_t68 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBPostingTask SPFacebook::PostWithAuthCheck(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" FBPostingTask_t257 * SPFacebook_PostWithAuthCheck_m1191 (SPFacebook_t242 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Post(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void SPFacebook_Post_m1192 (SPFacebook_t242 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendTrunRequest(System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendTrunRequest_m1193 (SPFacebook_t242 * __this, String_t* ___title, String_t* ___message, String_t* ___data, StringU5BU5D_t45* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendGift(System.String,System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendGift_m1194 (SPFacebook_t242 * __this, String_t* ___title, String_t* ___message, String_t* ___objectId, String_t* ___data, StringU5BU5D_t45* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AskGift(System.String,System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_AskGift_m1195 (SPFacebook_t242 * __this, String_t* ___title, String_t* ___message, String_t* ___objectId, String_t* ___data, StringU5BU5D_t45* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SendInvite(System.String,System.String,System.String,System.String[])
extern "C" void SPFacebook_SendInvite_m1196 (SPFacebook_t242 * __this, String_t* ___title, String_t* ___message, String_t* ___data, StringU5BU5D_t45* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequestCallBack(FBResult)
extern "C" void SPFacebook_AppRequestCallBack_m1197 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppRequestFailed_AndroidCB(System.String)
extern "C" void SPFacebook_OnAppRequestFailed_AndroidCB_m1198 (SPFacebook_t242 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppRequestCompleted_AndroidCB(System.String)
extern "C" void SPFacebook_OnAppRequestCompleted_AndroidCB_m1199 (SPFacebook_t242 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String)
extern "C" void SPFacebook_AppRequest_m1200 (SPFacebook_t242 * __this, String_t* ___message, OGActionType_t392 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String)
extern "C" void SPFacebook_AppRequest_m1201 (SPFacebook_t242 * __this, String_t* ___message, OGActionType_t392 * ___actionType, String_t* ___objectId, List_1_t584 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t590  ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String)
extern "C" void SPFacebook_AppRequest_m1202 (SPFacebook_t242 * __this, String_t* ___message, StringU5BU5D_t45* ___to, List_1_t584 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t590  ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadPendingRequests()
extern "C" void SPFacebook_LoadPendingRequests_m1203 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnRequestsLoadComplete(FBResult)
extern "C" void SPFacebook_OnRequestsLoadComplete_m1204 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadPlayerScores()
extern "C" void SPFacebook_LoadPlayerScores_m1205 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadAppScores()
extern "C" void SPFacebook_LoadAppScores_m1206 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::SubmitScore(System.Int32)
extern "C" void SPFacebook_SubmitScore_m1207 (SPFacebook_t242 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::DeletePlayerScores()
extern "C" void SPFacebook_DeletePlayerScores_m1208 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadCurrentUserLikes()
extern "C" void SPFacebook_LoadCurrentUserLikes_m1209 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadLikes(System.String)
extern "C" void SPFacebook_LoadLikes_m1210 (SPFacebook_t242 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoadLikes(System.String,System.String)
extern "C" void SPFacebook_LoadLikes_m1211 (SPFacebook_t242 * __this, String_t* ___userId, String_t* ___pageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Pay(System.String,System.Int32)
extern "C" void SPFacebook_Pay_m1212 (SPFacebook_t242 * __this, String_t* ___product, int32_t ___quantity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String)
extern "C" void SPFacebook_Pay_m1213 (SPFacebook_t242 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t590  ___quantityMin, Nullable_1_t590  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScore SPFacebook::GetCurrentPlayerScoreByAppId(System.String)
extern "C" FBScore_t253 * SPFacebook_GetCurrentPlayerScoreByAppId_m1214 (SPFacebook_t242 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SPFacebook::GetCurrentPlayerIntScoreByAppId(System.String)
extern "C" int32_t SPFacebook_GetCurrentPlayerIntScoreByAppId_m1215 (SPFacebook_t242 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SPFacebook::GetScoreByUserId(System.String)
extern "C" int32_t SPFacebook_GetScoreByUserId_m1216 (SPFacebook_t242 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScore SPFacebook::GetScoreObjectByUserId(System.String)
extern "C" FBScore_t253 * SPFacebook_GetScoreObjectByUserId_m1217 (SPFacebook_t242 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBLikeInfo> SPFacebook::GerUserLikesList(System.String)
extern "C" List_1_t589 * SPFacebook_GerUserLikesList_m1218 (SPFacebook_t242 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::IsUserLikesPage(System.String,System.String)
extern "C" bool SPFacebook_IsUserLikesPage_m1219 (SPFacebook_t242 * __this, String_t* ___userId, String_t* ___pageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::get_IsInited()
extern "C" bool SPFacebook_get_IsInited_m1220 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPFacebook::get_IsLoggedIn()
extern "C" bool SPFacebook_get_IsLoggedIn_m1221 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPFacebook::get_UserId()
extern "C" String_t* SPFacebook_get_UserId_m1222 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPFacebook::get_AccessToken()
extern "C" String_t* SPFacebook_get_AccessToken_m1223 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FacebookUserInfo SPFacebook::get_userInfo()
extern "C" FacebookUserInfo_t231 * SPFacebook_get_userInfo_m1224 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo> SPFacebook::get_friends()
extern "C" Dictionary_2_t232 * SPFacebook_get_friends_m1225 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> SPFacebook::get_friendsIds()
extern "C" List_1_t75 * SPFacebook_get_friendsIds_m1226 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FacebookUserInfo> SPFacebook::get_friendsList()
extern "C" List_1_t587 * SPFacebook_get_friendsList_m1227 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FBScore> SPFacebook::get_userScores()
extern "C" Dictionary_2_t233 * SPFacebook_get_userScores_m1228 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,FBScore> SPFacebook::get_appScores()
extern "C" Dictionary_2_t233 * SPFacebook_get_appScores_m1229 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBScore> SPFacebook::get_applicationScoreList()
extern "C" List_1_t588 * SPFacebook_get_applicationScoreList_m1230 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FBAppRequest> SPFacebook::get_AppRequests()
extern "C" List_1_t235 * SPFacebook_get_AppRequests_m1231 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnUserLikesResult(UnionAssets.FLE.CEvent)
extern "C" void SPFacebook_OnUserLikesResult_m1232 (SPFacebook_t242 * __this, CEvent_t93 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreDeleted(FBResult)
extern "C" void SPFacebook_OnScoreDeleted_m1233 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreSubmited(FBResult)
extern "C" void SPFacebook_OnScoreSubmited_m1234 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnAppScoresComplete(FBResult)
extern "C" void SPFacebook_OnAppScoresComplete_m1235 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AddToAppScores(FBScore)
extern "C" void SPFacebook_AddToAppScores_m1236 (SPFacebook_t242 * __this, FBScore_t253 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::AddToUserScores(FBScore)
extern "C" void SPFacebook_AddToUserScores_m1237 (SPFacebook_t242 * __this, FBScore_t253 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnLoaPlayrScoresComplete(FBResult)
extern "C" void SPFacebook_OnLoaPlayrScoresComplete_m1238 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::resultTest(FBResult)
extern "C" void SPFacebook_resultTest_m1239 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnScoreRequestComplete(UnionAssets.FLE.CEvent)
extern "C" void SPFacebook_OnScoreRequestComplete_m1240 (SPFacebook_t242 * __this, CEvent_t93 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::PostCallBack(FBResult)
extern "C" void SPFacebook_PostCallBack_m1241 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::FriendsDataCallBack(FBResult)
extern "C" void SPFacebook_FriendsDataCallBack_m1242 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::ParceFriendsData(System.String)
extern "C" void SPFacebook_ParceFriendsData_m1243 (SPFacebook_t242 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::ScoreLoadResult(FBResult)
extern "C" void SPFacebook_ScoreLoadResult_m1244 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::UserDataCallBack(FBResult)
extern "C" void SPFacebook_UserDataCallBack_m1245 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnInitComplete()
extern "C" void SPFacebook_OnInitComplete_m1246 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::OnHideUnity(System.Boolean)
extern "C" void SPFacebook_OnHideUnity_m1247 (SPFacebook_t242 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::LoginCallback(FBResult)
extern "C" void SPFacebook_LoginCallback_m1248 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::BroadcastLoginResult()
extern "C" void SPFacebook_BroadcastLoginResult_m1249 (SPFacebook_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::FBPaymentCallBack(FBResult)
extern "C" void SPFacebook_FBPaymentCallBack_m1250 (SPFacebook_t242 * __this, FBResult_t241 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnInitCompleteAction>m__28()
extern "C" void SPFacebook_U3COnInitCompleteActionU3Em__28_m1251 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPostingCompleteAction>m__29(FBPostResult)
extern "C" void SPFacebook_U3COnPostingCompleteActionU3Em__29_m1252 (Object_t * __this /* static, unused */, FBPostResult_t250 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnFocusChangedAction>m__2A(System.Boolean)
extern "C" void SPFacebook_U3COnFocusChangedActionU3Em__2A_m1253 (Object_t * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAuthCompleteAction>m__2B(FBResult)
extern "C" void SPFacebook_U3COnAuthCompleteActionU3Em__2B_m1254 (Object_t * __this /* static, unused */, FBResult_t241 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPaymentCompleteAction>m__2C(FBResult)
extern "C" void SPFacebook_U3COnPaymentCompleteActionU3Em__2C_m1255 (Object_t * __this /* static, unused */, FBResult_t241 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnUserDataRequestCompleteAction>m__2D(FBResult)
extern "C" void SPFacebook_U3COnUserDataRequestCompleteActionU3Em__2D_m1256 (Object_t * __this /* static, unused */, FBResult_t241 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnFriendsDataRequestCompleteAction>m__2E(FBResult)
extern "C" void SPFacebook_U3COnFriendsDataRequestCompleteActionU3Em__2E_m1257 (Object_t * __this /* static, unused */, FBResult_t241 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppRequestCompleteAction>m__2F(FBAppRequestResult)
extern "C" void SPFacebook_U3COnAppRequestCompleteActionU3Em__2F_m1258 (Object_t * __this /* static, unused */, FBAppRequestResult_t248 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppRequestsLoaded>m__30(FBResult)
extern "C" void SPFacebook_U3COnAppRequestsLoadedU3Em__30_m1259 (Object_t * __this /* static, unused */, FBResult_t241 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnAppScoresRequestCompleteAction>m__31(FB_APIResult)
extern "C" void SPFacebook_U3COnAppScoresRequestCompleteActionU3Em__31_m1260 (Object_t * __this /* static, unused */, FB_APIResult_t258 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnPlayerScoresRequestCompleteAction>m__32(FB_APIResult)
extern "C" void SPFacebook_U3COnPlayerScoresRequestCompleteActionU3Em__32_m1261 (Object_t * __this /* static, unused */, FB_APIResult_t258 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnSubmitScoreRequestCompleteAction>m__33(FB_APIResult)
extern "C" void SPFacebook_U3COnSubmitScoreRequestCompleteActionU3Em__33_m1262 (Object_t * __this /* static, unused */, FB_APIResult_t258 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnDeleteScoresRequestCompleteAction>m__34(FB_APIResult)
extern "C" void SPFacebook_U3COnDeleteScoresRequestCompleteActionU3Em__34_m1263 (Object_t * __this /* static, unused */, FB_APIResult_t258 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPFacebook::<OnLikesListLoadedAction>m__35(FB_APIResult)
extern "C" void SPFacebook_U3COnLikesListLoadedActionU3Em__35_m1264 (Object_t * __this /* static, unused */, FB_APIResult_t258 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
