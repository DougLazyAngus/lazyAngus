#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZoneInfo/TransitionTime
struct TransitionTime_t3308;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeZoneInfo/TransitionTime
#include "System_Core_System_TimeZoneInfo_TransitionTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32,System.Int32)
extern "C" void TransitionTime__ctor_m11516 (TransitionTime_t3308 * __this, DateTime_t287  ___timeOfDay, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32)
extern "C" void TransitionTime__ctor_m11517 (TransitionTime_t3308 * __this, DateTime_t287  ___timeOfDay, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
extern "C" TransitionTime_t3308  TransitionTime_CreateFixedDateRule_m11518 (Object_t * __this /* static, unused */, DateTime_t287  ___timeOfDay, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TransitionTime_GetObjectData_m11519 (TransitionTime_t3308 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C" bool TransitionTime_Equals_m11520 (TransitionTime_t3308 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_Equals_m11521 (TransitionTime_t3308 * __this, TransitionTime_t3308  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C" int32_t TransitionTime_GetHashCode_m11522 (TransitionTime_t3308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C" void TransitionTime_OnDeserialization_m11523 (TransitionTime_t3308 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_op_Equality_m11524 (Object_t * __this /* static, unused */, TransitionTime_t3308  ___t1, TransitionTime_t3308  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_op_Inequality_m11525 (Object_t * __this /* static, unused */, TransitionTime_t3308  ___t1, TransitionTime_t3308  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
