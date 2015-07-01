#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidTwitterManager
struct AndroidTwitterManager_t242;
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

// System.Void AndroidTwitterManager::.ctor()
extern "C" void AndroidTwitterManager__ctor_m964 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Awake()
extern "C" void AndroidTwitterManager_Awake_m965 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Init()
extern "C" void AndroidTwitterManager_Init_m966 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Init(System.String,System.String)
extern "C" void AndroidTwitterManager_Init_m967 (AndroidTwitterManager_t242 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::AuthenticateUser()
extern "C" void AndroidTwitterManager_AuthenticateUser_m968 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::LoadUserData()
extern "C" void AndroidTwitterManager_LoadUserData_m969 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Post(System.String)
extern "C" void AndroidTwitterManager_Post_m970 (AndroidTwitterManager_t242 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Post(System.String,UnityEngine.Texture2D)
extern "C" void AndroidTwitterManager_Post_m971 (AndroidTwitterManager_t242 * __this, String_t* ___status, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask AndroidTwitterManager::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t274 * AndroidTwitterManager_PostWithAuthCheck_m972 (AndroidTwitterManager_t242 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask AndroidTwitterManager::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t274 * AndroidTwitterManager_PostWithAuthCheck_m973 (AndroidTwitterManager_t242 * __this, String_t* ___status, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::LogOut()
extern "C" void AndroidTwitterManager_LogOut_m974 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidTwitterManager::get_IsAuthed()
extern "C" bool AndroidTwitterManager_get_IsAuthed_m975 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidTwitterManager::get_IsInited()
extern "C" bool AndroidTwitterManager_get_IsInited_m976 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo AndroidTwitterManager::get_userInfo()
extern "C" TwitterUserInfo_t240 * AndroidTwitterManager_get_userInfo_m977 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidTwitterManager::get_AccessToken()
extern "C" String_t* AndroidTwitterManager_get_AccessToken_m978 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidTwitterManager::get_AccessTokenSecret()
extern "C" String_t* AndroidTwitterManager_get_AccessTokenSecret_m979 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnInited(System.String)
extern "C" void AndroidTwitterManager_OnInited_m980 (AndroidTwitterManager_t242 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthSuccess()
extern "C" void AndroidTwitterManager_OnAuthSuccess_m981 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthFailed()
extern "C" void AndroidTwitterManager_OnAuthFailed_m982 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnPostSuccess()
extern "C" void AndroidTwitterManager_OnPostSuccess_m983 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnPostFailed()
extern "C" void AndroidTwitterManager_OnPostFailed_m984 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnUserDataLoaded(System.String)
extern "C" void AndroidTwitterManager_OnUserDataLoaded_m985 (AndroidTwitterManager_t242 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnUserDataLoadFailed()
extern "C" void AndroidTwitterManager_OnUserDataLoadFailed_m986 (AndroidTwitterManager_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthInfoReceived(System.String)
extern "C" void AndroidTwitterManager_OnAuthInfoReceived_m987 (AndroidTwitterManager_t242 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnTwitterInitedAction>m__13(TWResult)
extern "C" void AndroidTwitterManager_U3COnTwitterInitedActionU3Em__13_m988 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnAuthCompleteAction>m__14(TWResult)
extern "C" void AndroidTwitterManager_U3COnAuthCompleteActionU3Em__14_m989 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnPostingCompleteAction>m__15(TWResult)
extern "C" void AndroidTwitterManager_U3COnPostingCompleteActionU3Em__15_m990 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnUserDataRequestCompleteAction>m__16(TWResult)
extern "C" void AndroidTwitterManager_U3COnUserDataRequestCompleteActionU3Em__16_m991 (Object_t * __this /* static, unused */, TWResult_t251 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
