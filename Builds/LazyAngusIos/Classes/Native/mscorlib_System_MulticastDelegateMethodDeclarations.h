#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t389;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2792;
// System.Delegate
struct Delegate_t583;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3348 (MulticastDelegate_t389 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3346 (MulticastDelegate_t389 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3347 (MulticastDelegate_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2792* MulticastDelegate_GetInvocationList_m3350 (MulticastDelegate_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t583 * MulticastDelegate_CombineImpl_m3351 (MulticastDelegate_t389 * __this, Delegate_t583 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m11845 (MulticastDelegate_t389 * __this, MulticastDelegate_t389 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t389 * MulticastDelegate_KPM_m11846 (Object_t * __this /* static, unused */, MulticastDelegate_t389 * ___needle, MulticastDelegate_t389 * ___haystack, MulticastDelegate_t389 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t583 * MulticastDelegate_RemoveImpl_m3352 (MulticastDelegate_t389 * __this, Delegate_t583 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
