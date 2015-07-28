#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IOSTwitterManager
struct IOSTwitterManager_t368;
// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t108;
// TwitterPostingTask
struct TwitterPostingTask_t342;
// TWResult
struct TWResult_t319;

// System.Void IOSTwitterManager::.ctor()
extern "C" void IOSTwitterManager__ctor_m2014 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterInit()
extern "C" void IOSTwitterManager__twitterInit_m2015 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterLoadUserData()
extern "C" void IOSTwitterManager__twitterLoadUserData_m2016 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterAuthificateUser()
extern "C" void IOSTwitterManager__twitterAuthificateUser_m2017 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterPost(System.String)
extern "C" void IOSTwitterManager__twitterPost_m2018 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterPostWithMedia(System.String,System.String)
extern "C" void IOSTwitterManager__twitterPostWithMedia_m2019 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Awake()
extern "C" void IOSTwitterManager_Awake_m2020 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Init(System.String,System.String)
extern "C" void IOSTwitterManager_Init_m2021 (IOSTwitterManager_t368 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Init()
extern "C" void IOSTwitterManager_Init_m2022 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::AuthenticateUser()
extern "C" void IOSTwitterManager_AuthenticateUser_m2023 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::LoadUserData()
extern "C" void IOSTwitterManager_LoadUserData_m2024 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Post(System.String)
extern "C" void IOSTwitterManager_Post_m2025 (IOSTwitterManager_t368 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Post(System.String,UnityEngine.Texture2D)
extern "C" void IOSTwitterManager_Post_m2026 (IOSTwitterManager_t368 * __this, String_t* ___status, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask IOSTwitterManager::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t342 * IOSTwitterManager_PostWithAuthCheck_m2027 (IOSTwitterManager_t368 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask IOSTwitterManager::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t342 * IOSTwitterManager_PostWithAuthCheck_m2028 (IOSTwitterManager_t368 * __this, String_t* ___status, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::LogOut()
extern "C" void IOSTwitterManager_LogOut_m2029 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSTwitterManager::get_IsAuthed()
extern "C" bool IOSTwitterManager_get_IsAuthed_m2030 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSTwitterManager::get_IsInited()
extern "C" bool IOSTwitterManager_get_IsInited_m2031 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo IOSTwitterManager::get_userInfo()
extern "C" TwitterUserInfo_t308 * IOSTwitterManager_get_userInfo_m2032 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnInited(System.String)
extern "C" void IOSTwitterManager_OnInited_m2033 (IOSTwitterManager_t368 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnAuthSuccess()
extern "C" void IOSTwitterManager_OnAuthSuccess_m2034 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnAuthFailed(System.String)
extern "C" void IOSTwitterManager_OnAuthFailed_m2035 (IOSTwitterManager_t368 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnPostSuccess()
extern "C" void IOSTwitterManager_OnPostSuccess_m2036 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnPostFailed()
extern "C" void IOSTwitterManager_OnPostFailed_m2037 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnUserDataLoaded(System.String)
extern "C" void IOSTwitterManager_OnUserDataLoaded_m2038 (IOSTwitterManager_t368 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnUserDataLoadFailed()
extern "C" void IOSTwitterManager_OnUserDataLoadFailed_m2039 (IOSTwitterManager_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnTwitterInitedAction>m__44(TWResult)
extern "C" void IOSTwitterManager_U3COnTwitterInitedActionU3Em__44_m2040 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnAuthCompleteAction>m__45(TWResult)
extern "C" void IOSTwitterManager_U3COnAuthCompleteActionU3Em__45_m2041 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnPostingCompleteAction>m__46(TWResult)
extern "C" void IOSTwitterManager_U3COnPostingCompleteActionU3Em__46_m2042 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnUserDataRequestCompleteAction>m__47(TWResult)
extern "C" void IOSTwitterManager_U3COnUserDataRequestCompleteActionU3Em__47_m2043 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
