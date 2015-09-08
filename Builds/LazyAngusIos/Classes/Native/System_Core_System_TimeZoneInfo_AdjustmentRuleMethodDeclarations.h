#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t3753;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TimeZoneInfo/TransitionTime
#include "System_Core_System_TimeZoneInfo_TransitionTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" void AdjustmentRule__ctor_m14966 (AdjustmentRule_t3753 * __this, DateTime_t287  ___dateStart, DateTime_t287  ___dateEnd, TimeSpan_t334  ___daylightDelta, TransitionTime_t3754  ___daylightTransitionStart, TransitionTime_t3754  ___daylightTransitionEnd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateEnd()
extern "C" DateTime_t287  AdjustmentRule_get_DateEnd_m14967 (AdjustmentRule_t3753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
extern "C" DateTime_t287  AdjustmentRule_get_DateStart_m14968 (AdjustmentRule_t3753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::get_DaylightDelta()
extern "C" TimeSpan_t334  AdjustmentRule_get_DaylightDelta_m14969 (AdjustmentRule_t3753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" AdjustmentRule_t3753 * AdjustmentRule_CreateAdjustmentRule_m14970 (Object_t * __this /* static, unused */, DateTime_t287  ___dateStart, DateTime_t287  ___dateEnd, TimeSpan_t334  ___daylightDelta, TransitionTime_t3754  ___daylightTransitionStart, TransitionTime_t3754  ___daylightTransitionEnd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/AdjustmentRule::Equals(System.TimeZoneInfo/AdjustmentRule)
extern "C" bool AdjustmentRule_Equals_m14971 (AdjustmentRule_t3753 * __this, AdjustmentRule_t3753 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/AdjustmentRule::GetHashCode()
extern "C" int32_t AdjustmentRule_GetHashCode_m14972 (AdjustmentRule_t3753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/AdjustmentRule::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AdjustmentRule_GetObjectData_m14973 (AdjustmentRule_t3753 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/AdjustmentRule::OnDeserialization(System.Object)
extern "C" void AdjustmentRule_OnDeserialization_m14974 (AdjustmentRule_t3753 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
