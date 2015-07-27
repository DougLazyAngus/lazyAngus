﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t348;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2846;
// System.Delegate
struct Delegate_t622;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3906 (MulticastDelegate_t348 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3904 (MulticastDelegate_t348 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3905 (MulticastDelegate_t348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2846* MulticastDelegate_GetInvocationList_m3908 (MulticastDelegate_t348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t622 * MulticastDelegate_CombineImpl_m3909 (MulticastDelegate_t348 * __this, Delegate_t622 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m12431 (MulticastDelegate_t348 * __this, MulticastDelegate_t348 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t348 * MulticastDelegate_KPM_m12432 (Object_t * __this /* static, unused */, MulticastDelegate_t348 * ___needle, MulticastDelegate_t348 * ___haystack, MulticastDelegate_t348 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t622 * MulticastDelegate_RemoveImpl_m3910 (MulticastDelegate_t348 * __this, Delegate_t622 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
