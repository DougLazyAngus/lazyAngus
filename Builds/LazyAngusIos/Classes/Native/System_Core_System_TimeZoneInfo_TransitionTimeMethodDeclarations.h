﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZoneInfo/TransitionTime
struct TransitionTime_t3297;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeZoneInfo/TransitionTime
#include "System_Core_System_TimeZoneInfo_TransitionTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32,System.Int32)
extern "C" void TransitionTime__ctor_m11446 (TransitionTime_t3297 * __this, DateTime_t287  ___timeOfDay, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32)
extern "C" void TransitionTime__ctor_m11447 (TransitionTime_t3297 * __this, DateTime_t287  ___timeOfDay, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
extern "C" TransitionTime_t3297  TransitionTime_CreateFixedDateRule_m11448 (Object_t * __this /* static, unused */, DateTime_t287  ___timeOfDay, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TransitionTime_GetObjectData_m11449 (TransitionTime_t3297 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C" bool TransitionTime_Equals_m11450 (TransitionTime_t3297 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_Equals_m11451 (TransitionTime_t3297 * __this, TransitionTime_t3297  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C" int32_t TransitionTime_GetHashCode_m11452 (TransitionTime_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C" void TransitionTime_OnDeserialization_m11453 (TransitionTime_t3297 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_op_Equality_m11454 (Object_t * __this /* static, unused */, TransitionTime_t3297  ___t1, TransitionTime_t3297  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_op_Inequality_m11455 (Object_t * __this /* static, unused */, TransitionTime_t3297  ___t1, TransitionTime_t3297  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;