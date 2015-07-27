#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidTwitterManager
struct AndroidTwitterManager_t270;
// TwitterUserInfo
struct TwitterUserInfo_t268;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t68;
// TwitterPostingTask
struct TwitterPostingTask_t302;
// TWResult
struct TWResult_t279;

// System.Void AndroidTwitterManager::.ctor()
extern "C" void AndroidTwitterManager__ctor_m1366 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Awake()
extern "C" void AndroidTwitterManager_Awake_m1367 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Init()
extern "C" void AndroidTwitterManager_Init_m1368 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Init(System.String,System.String)
extern "C" void AndroidTwitterManager_Init_m1369 (AndroidTwitterManager_t270 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::AuthenticateUser()
extern "C" void AndroidTwitterManager_AuthenticateUser_m1370 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::LoadUserData()
extern "C" void AndroidTwitterManager_LoadUserData_m1371 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Post(System.String)
extern "C" void AndroidTwitterManager_Post_m1372 (AndroidTwitterManager_t270 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Post(System.String,UnityEngine.Texture2D)
extern "C" void AndroidTwitterManager_Post_m1373 (AndroidTwitterManager_t270 * __this, String_t* ___status, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask AndroidTwitterManager::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t302 * AndroidTwitterManager_PostWithAuthCheck_m1374 (AndroidTwitterManager_t270 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask AndroidTwitterManager::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t302 * AndroidTwitterManager_PostWithAuthCheck_m1375 (AndroidTwitterManager_t270 * __this, String_t* ___status, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::LogOut()
extern "C" void AndroidTwitterManager_LogOut_m1376 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidTwitterManager::get_IsAuthed()
extern "C" bool AndroidTwitterManager_get_IsAuthed_m1377 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidTwitterManager::get_IsInited()
extern "C" bool AndroidTwitterManager_get_IsInited_m1378 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo AndroidTwitterManager::get_userInfo()
extern "C" TwitterUserInfo_t268 * AndroidTwitterManager_get_userInfo_m1379 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidTwitterManager::get_AccessToken()
extern "C" String_t* AndroidTwitterManager_get_AccessToken_m1380 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidTwitterManager::get_AccessTokenSecret()
extern "C" String_t* AndroidTwitterManager_get_AccessTokenSecret_m1381 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnInited(System.String)
extern "C" void AndroidTwitterManager_OnInited_m1382 (AndroidTwitterManager_t270 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthSuccess()
extern "C" void AndroidTwitterManager_OnAuthSuccess_m1383 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthFailed()
extern "C" void AndroidTwitterManager_OnAuthFailed_m1384 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnPostSuccess()
extern "C" void AndroidTwitterManager_OnPostSuccess_m1385 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnPostFailed()
extern "C" void AndroidTwitterManager_OnPostFailed_m1386 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnUserDataLoaded(System.String)
extern "C" void AndroidTwitterManager_OnUserDataLoaded_m1387 (AndroidTwitterManager_t270 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnUserDataLoadFailed()
extern "C" void AndroidTwitterManager_OnUserDataLoadFailed_m1388 (AndroidTwitterManager_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthInfoReceived(System.String)
extern "C" void AndroidTwitterManager_OnAuthInfoReceived_m1389 (AndroidTwitterManager_t270 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnTwitterInitedAction>m__3A(TWResult)
extern "C" void AndroidTwitterManager_U3COnTwitterInitedActionU3Em__3A_m1390 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnAuthCompleteAction>m__3B(TWResult)
extern "C" void AndroidTwitterManager_U3COnAuthCompleteActionU3Em__3B_m1391 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnPostingCompleteAction>m__3C(TWResult)
extern "C" void AndroidTwitterManager_U3COnPostingCompleteActionU3Em__3C_m1392 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnUserDataRequestCompleteAction>m__3D(TWResult)
extern "C" void AndroidTwitterManager_U3COnUserDataRequestCompleteActionU3Em__3D_m1393 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
