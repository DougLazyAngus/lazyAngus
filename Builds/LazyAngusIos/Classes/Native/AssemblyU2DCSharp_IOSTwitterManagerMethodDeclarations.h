#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IOSTwitterManager
struct IOSTwitterManager_t328;
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

// System.Void IOSTwitterManager::.ctor()
extern "C" void IOSTwitterManager__ctor_m1743 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterInit()
extern "C" void IOSTwitterManager__twitterInit_m1744 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterLoadUserData()
extern "C" void IOSTwitterManager__twitterLoadUserData_m1745 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterAuthificateUser()
extern "C" void IOSTwitterManager__twitterAuthificateUser_m1746 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterPost(System.String)
extern "C" void IOSTwitterManager__twitterPost_m1747 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::_twitterPostWithMedia(System.String,System.String)
extern "C" void IOSTwitterManager__twitterPostWithMedia_m1748 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Awake()
extern "C" void IOSTwitterManager_Awake_m1749 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Init(System.String,System.String)
extern "C" void IOSTwitterManager_Init_m1750 (IOSTwitterManager_t328 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Init()
extern "C" void IOSTwitterManager_Init_m1751 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::AuthenticateUser()
extern "C" void IOSTwitterManager_AuthenticateUser_m1752 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::LoadUserData()
extern "C" void IOSTwitterManager_LoadUserData_m1753 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Post(System.String)
extern "C" void IOSTwitterManager_Post_m1754 (IOSTwitterManager_t328 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::Post(System.String,UnityEngine.Texture2D)
extern "C" void IOSTwitterManager_Post_m1755 (IOSTwitterManager_t328 * __this, String_t* ___status, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask IOSTwitterManager::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t302 * IOSTwitterManager_PostWithAuthCheck_m1756 (IOSTwitterManager_t328 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask IOSTwitterManager::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t302 * IOSTwitterManager_PostWithAuthCheck_m1757 (IOSTwitterManager_t328 * __this, String_t* ___status, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::LogOut()
extern "C" void IOSTwitterManager_LogOut_m1758 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSTwitterManager::get_IsAuthed()
extern "C" bool IOSTwitterManager_get_IsAuthed_m1759 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSTwitterManager::get_IsInited()
extern "C" bool IOSTwitterManager_get_IsInited_m1760 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo IOSTwitterManager::get_userInfo()
extern "C" TwitterUserInfo_t268 * IOSTwitterManager_get_userInfo_m1761 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnInited(System.String)
extern "C" void IOSTwitterManager_OnInited_m1762 (IOSTwitterManager_t328 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnAuthSuccess()
extern "C" void IOSTwitterManager_OnAuthSuccess_m1763 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnAuthFailed(System.String)
extern "C" void IOSTwitterManager_OnAuthFailed_m1764 (IOSTwitterManager_t328 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnPostSuccess()
extern "C" void IOSTwitterManager_OnPostSuccess_m1765 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnPostFailed()
extern "C" void IOSTwitterManager_OnPostFailed_m1766 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnUserDataLoaded(System.String)
extern "C" void IOSTwitterManager_OnUserDataLoaded_m1767 (IOSTwitterManager_t328 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::OnUserDataLoadFailed()
extern "C" void IOSTwitterManager_OnUserDataLoadFailed_m1768 (IOSTwitterManager_t328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnTwitterInitedAction>m__44(TWResult)
extern "C" void IOSTwitterManager_U3COnTwitterInitedActionU3Em__44_m1769 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnAuthCompleteAction>m__45(TWResult)
extern "C" void IOSTwitterManager_U3COnAuthCompleteActionU3Em__45_m1770 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnPostingCompleteAction>m__46(TWResult)
extern "C" void IOSTwitterManager_U3COnPostingCompleteActionU3Em__46_m1771 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSTwitterManager::<OnUserDataRequestCompleteAction>m__47(TWResult)
extern "C" void IOSTwitterManager_U3COnUserDataRequestCompleteActionU3Em__47_m1772 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
