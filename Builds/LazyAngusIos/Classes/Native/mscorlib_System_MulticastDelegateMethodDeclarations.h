#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t346;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2845;
// System.Delegate
struct Delegate_t621;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3903 (MulticastDelegate_t346 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3901 (MulticastDelegate_t346 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3902 (MulticastDelegate_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2845* MulticastDelegate_GetInvocationList_m3905 (MulticastDelegate_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t621 * MulticastDelegate_CombineImpl_m3906 (MulticastDelegate_t346 * __this, Delegate_t621 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m12428 (MulticastDelegate_t346 * __this, MulticastDelegate_t346 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t346 * MulticastDelegate_KPM_m12429 (Object_t * __this /* static, unused */, MulticastDelegate_t346 * ___needle, MulticastDelegate_t346 * ___haystack, MulticastDelegate_t346 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t621 * MulticastDelegate_RemoveImpl_m3907 (MulticastDelegate_t346 * __this, Delegate_t621 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
