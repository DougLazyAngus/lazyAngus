#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t391;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1198;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2745;
// System.Delegate
struct Delegate_t538;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3031 (MulticastDelegate_t391 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3029 (MulticastDelegate_t391 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3030 (MulticastDelegate_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2745* MulticastDelegate_GetInvocationList_m3033 (MulticastDelegate_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t538 * MulticastDelegate_CombineImpl_m3034 (MulticastDelegate_t391 * __this, Delegate_t538 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m11517 (MulticastDelegate_t391 * __this, MulticastDelegate_t391 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t391 * MulticastDelegate_KPM_m11518 (Object_t * __this /* static, unused */, MulticastDelegate_t391 * ___needle, MulticastDelegate_t391 * ___haystack, MulticastDelegate_t391 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t538 * MulticastDelegate_RemoveImpl_m3035 (MulticastDelegate_t391 * __this, Delegate_t538 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
