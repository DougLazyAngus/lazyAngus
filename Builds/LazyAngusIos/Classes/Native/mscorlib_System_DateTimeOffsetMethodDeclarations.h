#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeOffset
struct DateTimeOffset_t2945;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t4502;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C" void DateTimeOffset__ctor_m19684 (DateTimeOffset_t2945 * __this, DateTime_t287  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C" void DateTimeOffset__ctor_m19685 (DateTimeOffset_t2945 * __this, DateTime_t287  ___dateTime, TimeSpan_t334  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C" void DateTimeOffset__ctor_m19686 (DateTimeOffset_t2945 * __this, int64_t ___ticks, TimeSpan_t334  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DateTimeOffset__ctor_m19687 (DateTimeOffset_t2945 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C" void DateTimeOffset__cctor_m19688 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C" int32_t DateTimeOffset_System_IComparable_CompareTo_m19689 (DateTimeOffset_t2945 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m19690 (DateTimeOffset_t2945 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m19691 (DateTimeOffset_t2945 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C" int32_t DateTimeOffset_CompareTo_m19692 (DateTimeOffset_t2945 * __this, DateTimeOffset_t2945  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C" bool DateTimeOffset_Equals_m19693 (DateTimeOffset_t2945 * __this, DateTimeOffset_t2945  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C" bool DateTimeOffset_Equals_m19694 (DateTimeOffset_t2945 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C" int32_t DateTimeOffset_GetHashCode_m19695 (DateTimeOffset_t2945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C" String_t* DateTimeOffset_ToString_m19696 (DateTimeOffset_t2945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C" String_t* DateTimeOffset_ToString_m10164 (DateTimeOffset_t2945 * __this, String_t* ___format, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
extern "C" DateTimeOffset_t2945  DateTimeOffset_ToUniversalTime_m10163 (DateTimeOffset_t2945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C" DateTime_t287  DateTimeOffset_get_DateTime_m19697 (DateTimeOffset_t2945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C" TimeSpan_t334  DateTimeOffset_get_Offset_m19698 (DateTimeOffset_t2945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C" DateTime_t287  DateTimeOffset_get_UtcDateTime_m19699 (DateTimeOffset_t2945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
