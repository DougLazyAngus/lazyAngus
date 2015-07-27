#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPTwitter
struct SPTwitter_t324;
// TwitterUserInfo
struct TwitterUserInfo_t268;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t68;
// TwitterPostingTask
struct TwitterPostingTask_t302;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t575;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t576;
// System.Object
struct Object_t;
// TWResult
struct TWResult_t279;

// System.Void SPTwitter::.ctor()
extern "C" void SPTwitter__ctor_m1673 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::.cctor()
extern "C" void SPTwitter__cctor_m1674 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Awake()
extern "C" void SPTwitter_Awake_m1675 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPTwitter SPTwitter::get_instance()
extern "C" SPTwitter_t324 * SPTwitter_get_instance_m1676 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Init()
extern "C" void SPTwitter_Init_m1677 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Init(System.String,System.String)
extern "C" void SPTwitter_Init_m1678 (SPTwitter_t324 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::AuthenticateUser()
extern "C" void SPTwitter_AuthenticateUser_m1679 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::LoadUserData()
extern "C" void SPTwitter_LoadUserData_m1680 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Post(System.String)
extern "C" void SPTwitter_Post_m1681 (SPTwitter_t324 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Post(System.String,UnityEngine.Texture2D)
extern "C" void SPTwitter_Post_m1682 (SPTwitter_t324 * __this, String_t* ___status, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask SPTwitter::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t302 * SPTwitter_PostWithAuthCheck_m1683 (SPTwitter_t324 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask SPTwitter::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t302 * SPTwitter_PostWithAuthCheck_m1684 (SPTwitter_t324 * __this, String_t* ___status, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::LogOut()
extern "C" void SPTwitter_LogOut_m1685 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPTwitter::get_IsAuthed()
extern "C" bool SPTwitter_get_IsAuthed_m1686 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPTwitter::get_IsInited()
extern "C" bool SPTwitter_get_IsInited_m1687 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo SPTwitter::get_userInfo()
extern "C" TwitterUserInfo_t268 * SPTwitter_get_userInfo_m1688 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1689 (SPTwitter_t324 * __this, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1690 (SPTwitter_t324 * __this, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1691 (SPTwitter_t324 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1692 (SPTwitter_t324 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1693 (SPTwitter_t324 * __this, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1694 (SPTwitter_t324 * __this, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1695 (SPTwitter_t324 * __this, int32_t ___eventID, EventHandlerFunction_t575 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1696 (SPTwitter_t324 * __this, int32_t ___eventID, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.Int32)
extern "C" void SPTwitter_dispatchEvent_m1697 (SPTwitter_t324 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.Int32,System.Object)
extern "C" void SPTwitter_dispatchEvent_m1698 (SPTwitter_t324 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.String)
extern "C" void SPTwitter_dispatchEvent_m1699 (SPTwitter_t324 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.String,System.Object)
extern "C" void SPTwitter_dispatchEvent_m1700 (SPTwitter_t324 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.Int32)
extern "C" void SPTwitter_dispatch_m1701 (SPTwitter_t324 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.Int32,System.Object)
extern "C" void SPTwitter_dispatch_m1702 (SPTwitter_t324 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.String)
extern "C" void SPTwitter_dispatch_m1703 (SPTwitter_t324 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.String,System.Object)
extern "C" void SPTwitter_dispatch_m1704 (SPTwitter_t324 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnTwitterInitedActionMethod(TWResult)
extern "C" void SPTwitter_OnTwitterInitedActionMethod_m1705 (SPTwitter_t324 * __this, TWResult_t279 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnAuthCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnAuthCompleteActionMethod_m1706 (SPTwitter_t324 * __this, TWResult_t279 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnPostingCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnPostingCompleteActionMethod_m1707 (SPTwitter_t324 * __this, TWResult_t279 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnUserDataRequestCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnUserDataRequestCompleteActionMethod_m1708 (SPTwitter_t324 * __this, TWResult_t279 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::clearEvents()
extern "C" void SPTwitter_clearEvents_m1709 (SPTwitter_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnTwitterInitedAction>m__40(TWResult)
extern "C" void SPTwitter_U3COnTwitterInitedActionU3Em__40_m1710 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnAuthCompleteAction>m__41(TWResult)
extern "C" void SPTwitter_U3COnAuthCompleteActionU3Em__41_m1711 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnPostingCompleteAction>m__42(TWResult)
extern "C" void SPTwitter_U3COnPostingCompleteActionU3Em__42_m1712 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnUserDataRequestCompleteAction>m__43(TWResult)
extern "C" void SPTwitter_U3COnUserDataRequestCompleteActionU3Em__43_m1713 (Object_t * __this /* static, unused */, TWResult_t279 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
