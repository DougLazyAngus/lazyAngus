#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IOSTwitterManager
struct IOSTwitterManager_t300;
// TwitterUserInfo
struct TwitterUserInfo_t240;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;
// TwitterPostingTask
struct TwitterPostingTask_t274;
// TWResult
struct TWResult_t251;

// System.Void IOSTwitterManager::.ctor()
extern "C" void IOSTwitterManager__ctor_m1341 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterInit()
extern "C" void IOSTwitterManager__twitterInit_m1342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterLoadUserData()
extern "C" void IOSTwitterManager__twitterLoadUserData_m1343 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterAuthificateUser()
extern "C" void IOSTwitterManager__twitterAuthificateUser_m1344 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterPost(System.String)
extern "C" void IOSTwitterManager__twitterPost_m1345 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterPostWithMedia(System.String,System.String)
extern "C" void IOSTwitterManager__twitterPostWithMedia_m1346 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Awake()
extern "C" void IOSTwitterManager_Awake_m1347 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Init(System.String,System.String)
extern "C" void IOSTwitterManager_Init_m1348 (IOSTwitterManager_t300 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Init()
extern "C" void IOSTwitterManager_Init_m1349 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::AuthenticateUser()
extern "C" void IOSTwitterManager_AuthenticateUser_m1350 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::LoadUserData()
extern "C" void IOSTwitterManager_LoadUserData_m1351 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Post(System.String)
extern "C" void IOSTwitterManager_Post_m1352 (IOSTwitterManager_t300 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Post(System.String,UnityEngine.Texture2D)
extern "C" void IOSTwitterManager_Post_m1353 (IOSTwitterManager_t300 * __this, String_t* ___status, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask IOSTwitterManager::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t274 * IOSTwitterManager_PostWithAuthCheck_m1354 (IOSTwitterManager_t300 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask IOSTwitterManager::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t274 * IOSTwitterManager_PostWithAuthCheck_m1355 (IOSTwitterManager_t300 * __this, String_t* ___status, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::LogOut()
extern "C" void IOSTwitterManager_LogOut_m1356 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSTwitterManager::get_IsAuthed()
extern "C" bool IOSTwitterManager_get_IsAuthed_m1357 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSTwitterManager::get_IsInited()
extern "C" bool IOSTwitterManager_get_IsInited_m1358 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo IOSTwitterManager::get_userInfo()
extern "C" TwitterUserInfo_t240 * IOSTwitterManager_get_userInfo_m1359 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnInited(System.String)
extern "C" void IOSTwitterManager_OnInited_m1360 (IOSTwitterManager_t300 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnAuthSuccess()
extern "C" void IOSTwitterManager_OnAuthSuccess_m1361 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnAuthFailed(System.String)
extern "C" void IOSTwitterManager_OnAuthFailed_m1362 (IOSTwitterManager_t300 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnPostSuccess()
extern "C" void IOSTwitterManager_OnPostSuccess_m1363 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnPostFailed()
extern "C" void IOSTwitterManager_OnPostFailed_m1364 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnUserDataLoaded(System.String)
extern "C" void IOSTwitterManager_OnUserDataLoaded_m1365 (IOSTwitterManager_t300 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnUserDataLoadFailed()
extern "C" void IOSTwitterManager_OnUserDataLoadFailed_m1366 (IOSTwitterManager_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnTwitterInitedAction>m__1D(TWResult)
extern "C" void IOSTwitterManager_U3COnTwitterInitedActionU3Em__1D_m1367 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnAuthCompleteAction>m__1E(TWResult)
extern "C" void IOSTwitterManager_U3COnAuthCompleteActionU3Em__1E_m1368 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnPostingCompleteAction>m__1F(TWResult)
extern "C" void IOSTwitterManager_U3COnPostingCompleteActionU3Em__1F_m1369 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnUserDataRequestCompleteAction>m__20(TWResult)
extern "C" void IOSTwitterManager_U3COnUserDataRequestCompleteActionU3Em__20_m1370 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
