#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidTwitterManager
struct AndroidTwitterManager_t310;
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

// System.Void AndroidTwitterManager::.ctor()
extern "C" void AndroidTwitterManager__ctor_m1639 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Awake()
extern "C" void AndroidTwitterManager_Awake_m1640 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Init()
extern "C" void AndroidTwitterManager_Init_m1641 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Init(System.String,System.String)
extern "C" void AndroidTwitterManager_Init_m1642 (AndroidTwitterManager_t310 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::AuthenticateUser()
extern "C" void AndroidTwitterManager_AuthenticateUser_m1643 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::LoadUserData()
extern "C" void AndroidTwitterManager_LoadUserData_m1644 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Post(System.String)
extern "C" void AndroidTwitterManager_Post_m1645 (AndroidTwitterManager_t310 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::Post(System.String,UnityEngine.Texture2D)
extern "C" void AndroidTwitterManager_Post_m1646 (AndroidTwitterManager_t310 * __this, String_t* ___status, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask AndroidTwitterManager::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t342 * AndroidTwitterManager_PostWithAuthCheck_m1647 (AndroidTwitterManager_t310 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask AndroidTwitterManager::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t342 * AndroidTwitterManager_PostWithAuthCheck_m1648 (AndroidTwitterManager_t310 * __this, String_t* ___status, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::LogOut()
extern "C" void AndroidTwitterManager_LogOut_m1649 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidTwitterManager::get_IsAuthed()
extern "C" bool AndroidTwitterManager_get_IsAuthed_m1650 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidTwitterManager::get_IsInited()
extern "C" bool AndroidTwitterManager_get_IsInited_m1651 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo AndroidTwitterManager::get_userInfo()
extern "C" TwitterUserInfo_t308 * AndroidTwitterManager_get_userInfo_m1652 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidTwitterManager::get_AccessToken()
extern "C" String_t* AndroidTwitterManager_get_AccessToken_m1653 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidTwitterManager::get_AccessTokenSecret()
extern "C" String_t* AndroidTwitterManager_get_AccessTokenSecret_m1654 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnInited(System.String)
extern "C" void AndroidTwitterManager_OnInited_m1655 (AndroidTwitterManager_t310 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthSuccess()
extern "C" void AndroidTwitterManager_OnAuthSuccess_m1656 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthFailed()
extern "C" void AndroidTwitterManager_OnAuthFailed_m1657 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnPostSuccess()
extern "C" void AndroidTwitterManager_OnPostSuccess_m1658 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnPostFailed()
extern "C" void AndroidTwitterManager_OnPostFailed_m1659 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnUserDataLoaded(System.String)
extern "C" void AndroidTwitterManager_OnUserDataLoaded_m1660 (AndroidTwitterManager_t310 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnUserDataLoadFailed()
extern "C" void AndroidTwitterManager_OnUserDataLoadFailed_m1661 (AndroidTwitterManager_t310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::OnAuthInfoReceived(System.String)
extern "C" void AndroidTwitterManager_OnAuthInfoReceived_m1662 (AndroidTwitterManager_t310 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnTwitterInitedAction>m__3A(TWResult)
extern "C" void AndroidTwitterManager_U3COnTwitterInitedActionU3Em__3A_m1663 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnAuthCompleteAction>m__3B(TWResult)
extern "C" void AndroidTwitterManager_U3COnAuthCompleteActionU3Em__3B_m1664 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnPostingCompleteAction>m__3C(TWResult)
extern "C" void AndroidTwitterManager_U3COnPostingCompleteActionU3Em__3C_m1665 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidTwitterManager::<OnUserDataRequestCompleteAction>m__3D(TWResult)
extern "C" void AndroidTwitterManager_U3COnUserDataRequestCompleteActionU3Em__3D_m1666 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
