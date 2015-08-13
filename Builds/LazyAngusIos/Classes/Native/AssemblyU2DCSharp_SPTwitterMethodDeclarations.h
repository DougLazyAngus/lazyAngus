#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPTwitter
struct SPTwitter_t364;
// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t108;
// TwitterPostingTask
struct TwitterPostingTask_t342;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t675;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t676;
// System.Object
struct Object_t;
// TWResult
struct TWResult_t319;

// System.Void SPTwitter::.ctor()
extern "C" void SPTwitter__ctor_m1944 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::.cctor()
extern "C" void SPTwitter__cctor_m1945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Awake()
extern "C" void SPTwitter_Awake_m1946 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPTwitter SPTwitter::get_instance()
extern "C" SPTwitter_t364 * SPTwitter_get_instance_m1947 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Init()
extern "C" void SPTwitter_Init_m1948 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Init(System.String,System.String)
extern "C" void SPTwitter_Init_m1949 (SPTwitter_t364 * __this, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::AuthenticateUser()
extern "C" void SPTwitter_AuthenticateUser_m1950 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::LoadUserData()
extern "C" void SPTwitter_LoadUserData_m1951 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Post(System.String)
extern "C" void SPTwitter_Post_m1952 (SPTwitter_t364 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::Post(System.String,UnityEngine.Texture2D)
extern "C" void SPTwitter_Post_m1953 (SPTwitter_t364 * __this, String_t* ___status, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask SPTwitter::PostWithAuthCheck(System.String)
extern "C" TwitterPostingTask_t342 * SPTwitter_PostWithAuthCheck_m1954 (SPTwitter_t364 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterPostingTask SPTwitter::PostWithAuthCheck(System.String,UnityEngine.Texture2D)
extern "C" TwitterPostingTask_t342 * SPTwitter_PostWithAuthCheck_m1955 (SPTwitter_t364 * __this, String_t* ___status, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::LogOut()
extern "C" void SPTwitter_LogOut_m1956 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPTwitter::get_IsAuthed()
extern "C" bool SPTwitter_get_IsAuthed_m1957 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPTwitter::get_IsInited()
extern "C" bool SPTwitter_get_IsInited_m1958 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TwitterUserInfo SPTwitter::get_userInfo()
extern "C" TwitterUserInfo_t308 * SPTwitter_get_userInfo_m1959 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1960 (SPTwitter_t364 * __this, String_t* ___eventName, EventHandlerFunction_t675 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1961 (SPTwitter_t364 * __this, String_t* ___eventName, DataEventHandlerFunction_t676 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1962 (SPTwitter_t364 * __this, int32_t ___eventID, EventHandlerFunction_t675 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::addEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_addEventListener_m1963 (SPTwitter_t364 * __this, int32_t ___eventID, DataEventHandlerFunction_t676 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1964 (SPTwitter_t364 * __this, String_t* ___eventName, EventHandlerFunction_t675 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1965 (SPTwitter_t364 * __this, String_t* ___eventName, DataEventHandlerFunction_t676 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.Int32,UnionAssets.FLE.EventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1966 (SPTwitter_t364 * __this, int32_t ___eventID, EventHandlerFunction_t675 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::removeEventListener(System.Int32,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void SPTwitter_removeEventListener_m1967 (SPTwitter_t364 * __this, int32_t ___eventID, DataEventHandlerFunction_t676 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.Int32)
extern "C" void SPTwitter_dispatchEvent_m1968 (SPTwitter_t364 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.Int32,System.Object)
extern "C" void SPTwitter_dispatchEvent_m1969 (SPTwitter_t364 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.String)
extern "C" void SPTwitter_dispatchEvent_m1970 (SPTwitter_t364 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatchEvent(System.String,System.Object)
extern "C" void SPTwitter_dispatchEvent_m1971 (SPTwitter_t364 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.Int32)
extern "C" void SPTwitter_dispatch_m1972 (SPTwitter_t364 * __this, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.Int32,System.Object)
extern "C" void SPTwitter_dispatch_m1973 (SPTwitter_t364 * __this, int32_t ___eventID, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.String)
extern "C" void SPTwitter_dispatch_m1974 (SPTwitter_t364 * __this, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::dispatch(System.String,System.Object)
extern "C" void SPTwitter_dispatch_m1975 (SPTwitter_t364 * __this, String_t* ___eventName, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnTwitterInitedActionMethod(TWResult)
extern "C" void SPTwitter_OnTwitterInitedActionMethod_m1976 (SPTwitter_t364 * __this, TWResult_t319 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnAuthCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnAuthCompleteActionMethod_m1977 (SPTwitter_t364 * __this, TWResult_t319 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnPostingCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnPostingCompleteActionMethod_m1978 (SPTwitter_t364 * __this, TWResult_t319 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::OnUserDataRequestCompleteActionMethod(TWResult)
extern "C" void SPTwitter_OnUserDataRequestCompleteActionMethod_m1979 (SPTwitter_t364 * __this, TWResult_t319 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::clearEvents()
extern "C" void SPTwitter_clearEvents_m1980 (SPTwitter_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnTwitterInitedAction>m__40(TWResult)
extern "C" void SPTwitter_U3COnTwitterInitedActionU3Em__40_m1981 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnAuthCompleteAction>m__41(TWResult)
extern "C" void SPTwitter_U3COnAuthCompleteActionU3Em__41_m1982 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnPostingCompleteAction>m__42(TWResult)
extern "C" void SPTwitter_U3COnPostingCompleteActionU3Em__42_m1983 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPTwitter::<OnUserDataRequestCompleteAction>m__43(TWResult)
extern "C" void SPTwitter_U3COnUserDataRequestCompleteActionU3Em__43_m1984 (Object_t * __this /* static, unused */, TWResult_t319 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
