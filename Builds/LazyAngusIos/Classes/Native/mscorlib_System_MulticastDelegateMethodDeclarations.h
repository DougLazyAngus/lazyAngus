#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t388;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Delegate[]
struct DelegateU5BU5D_t2097;
// System.Delegate
struct Delegate_t674;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m4248 (MulticastDelegate_t388 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MulticastDelegate::DynamicInvokeImpl(System.Object[])
extern "C" Object_t * MulticastDelegate_DynamicInvokeImpl_m4249 (MulticastDelegate_t388 * __this, ObjectU5BU5D_t634* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m4246 (MulticastDelegate_t388 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m4247 (MulticastDelegate_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2097* MulticastDelegate_GetInvocationList_m4251 (MulticastDelegate_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t674 * MulticastDelegate_CombineImpl_m4252 (MulticastDelegate_t388 * __this, Delegate_t674 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m15766 (MulticastDelegate_t388 * __this, MulticastDelegate_t388 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t388 * MulticastDelegate_KPM_m15767 (Object_t * __this /* static, unused */, MulticastDelegate_t388 * ___needle, MulticastDelegate_t388 * ___haystack, MulticastDelegate_t388 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t674 * MulticastDelegate_RemoveImpl_m4253 (MulticastDelegate_t388 * __this, Delegate_t674 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
