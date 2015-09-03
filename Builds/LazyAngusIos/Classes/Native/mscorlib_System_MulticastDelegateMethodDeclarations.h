#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t388;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Delegate[]
struct DelegateU5BU5D_t2167;
// System.Delegate
struct Delegate_t738;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m4686 (MulticastDelegate_t388 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MulticastDelegate::DynamicInvokeImpl(System.Object[])
extern "C" Object_t * MulticastDelegate_DynamicInvokeImpl_m4687 (MulticastDelegate_t388 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m4683 (MulticastDelegate_t388 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m4684 (MulticastDelegate_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2167* MulticastDelegate_GetInvocationList_m4688 (MulticastDelegate_t388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t738 * MulticastDelegate_CombineImpl_m4689 (MulticastDelegate_t388 * __this, Delegate_t738 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m19031 (MulticastDelegate_t388 * __this, MulticastDelegate_t388 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t388 * MulticastDelegate_KPM_m19032 (Object_t * __this /* static, unused */, MulticastDelegate_t388 * ___needle, MulticastDelegate_t388 * ___haystack, MulticastDelegate_t388 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t738 * MulticastDelegate_RemoveImpl_m4690 (MulticastDelegate_t388 * __this, Delegate_t738 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
