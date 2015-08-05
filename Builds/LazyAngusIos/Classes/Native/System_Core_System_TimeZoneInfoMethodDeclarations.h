#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZoneInfo
struct TimeZoneInfo_t1463;
// System.String
struct String_t;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t3310;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>
struct List_1_t3316;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t103;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3317;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3318;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZoneInfo::.ctor(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C" void TimeZoneInfo__ctor_m11528 (TimeZoneInfo_t1463 * __this, String_t* ___id, TimeSpan_t334  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t3310* ___adjustmentRules, bool ___disableDaylightSavingTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::.cctor()
extern "C" void TimeZoneInfo__cctor_m11529 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
extern "C" TimeSpan_t334  TimeZoneInfo_get_BaseUtcOffset_m11530 (TimeZoneInfo_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_DisplayName()
extern "C" String_t* TimeZoneInfo_get_DisplayName_m11531 (TimeZoneInfo_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_Id()
extern "C" String_t* TimeZoneInfo_get_Id_m11532 (TimeZoneInfo_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C" TimeZoneInfo_t1463 * TimeZoneInfo_get_Local_m7401 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_StandardName()
extern "C" String_t* TimeZoneInfo_get_StandardName_m7402 (TimeZoneInfo_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_TimeZoneDirectory()
extern "C" String_t* TimeZoneInfo_get_TimeZoneDirectory_m11533 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
extern "C" TimeZoneInfo_t1463 * TimeZoneInfo_CreateCustomTimeZone_m11534 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t334  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[])
extern "C" TimeZoneInfo_t1463 * TimeZoneInfo_CreateCustomTimeZone_m11535 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t334  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t3310* ___adjustmentRules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C" TimeZoneInfo_t1463 * TimeZoneInfo_CreateCustomTimeZone_m11536 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t334  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t3310* ___adjustmentRules, bool ___disableDaylightSavingTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::Equals(System.TimeZoneInfo)
extern "C" bool TimeZoneInfo_Equals_m11537 (TimeZoneInfo_t1463 * __this, TimeZoneInfo_t1463 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::FindSystemTimeZoneByFileName(System.String,System.String)
extern "C" TimeZoneInfo_t1463 * TimeZoneInfo_FindSystemTimeZoneByFileName_m11538 (Object_t * __this /* static, unused */, String_t* ___id, String_t* ___filepath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::GetAdjustmentRules()
extern "C" AdjustmentRuleU5BU5D_t3310* TimeZoneInfo_GetAdjustmentRules_m11539 (TimeZoneInfo_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::GetHashCode()
extern "C" int32_t TimeZoneInfo_GetHashCode_m11540 (TimeZoneInfo_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TimeZoneInfo_GetObjectData_m11541 (TimeZoneInfo_t1463 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::HasSameRules(System.TimeZoneInfo)
extern "C" bool TimeZoneInfo_HasSameRules_m11542 (TimeZoneInfo_t1463 * __this, TimeZoneInfo_t1463 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::OnDeserialization(System.Object)
extern "C" void TimeZoneInfo_OnDeserialization_m11543 (TimeZoneInfo_t1463 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::ToString()
extern "C" String_t* TimeZoneInfo_ToString_m11544 (TimeZoneInfo_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::ValidTZFile(System.Byte[],System.Int32)
extern "C" bool TimeZoneInfo_ValidTZFile_m11545 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::SwapInt32(System.Int32)
extern "C" int32_t TimeZoneInfo_SwapInt32_m11546 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::ReadBigEndianInt32(System.Byte[],System.Int32)
extern "C" int32_t TimeZoneInfo_ReadBigEndianInt32_m11547 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___buffer, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::ParseTZBuffer(System.String,System.Byte[],System.Int32)
extern "C" TimeZoneInfo_t1463 * TimeZoneInfo_ParseTZBuffer_m11548 (Object_t * __this /* static, unused */, String_t* ___id, ByteU5BU5D_t66* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> System.TimeZoneInfo::ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>)
extern "C" List_1_t3316 * TimeZoneInfo_ValidateRules_m11549 (Object_t * __this /* static, unused */, List_1_t3316 * ___adjustmentRules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.TimeZoneInfo::ParseAbbreviations(System.Byte[],System.Int32,System.Int32)
extern "C" Dictionary_2_t103 * TimeZoneInfo_ParseAbbreviations_m11550 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType> System.TimeZoneInfo::ParseTimesTypes(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C" Dictionary_2_t3317 * TimeZoneInfo_ParseTimesTypes_m11551 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___buffer, int32_t ___index, int32_t ___count, Dictionary_2_t103 * ___abbreviations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>> System.TimeZoneInfo::ParseTransitions(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>)
extern "C" List_1_t3318 * TimeZoneInfo_ParseTransitions_m11552 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___buffer, int32_t ___index, int32_t ___count, Dictionary_2_t3317 * ___time_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo::DateTimeFromUnixTime(System.Int64)
extern "C" DateTime_t287  TimeZoneInfo_DateTimeFromUnixTime_m11553 (Object_t * __this /* static, unused */, int64_t ___unix_time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
