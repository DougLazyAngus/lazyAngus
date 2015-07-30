#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTime
struct DateTime_t287;
// System.IFormatProvider
struct IFormatProvider_t4454;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t75;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t4420;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.DateTime/Which
#include "mscorlib_System_DateTime_Which.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Globalization.DateTimeStyles
#include "mscorlib_System_Globalization_DateTimeStyles.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTime::.ctor(System.Int64)
extern "C" void DateTime__ctor_m19338 (DateTime_t287 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m4060 (DateTime_t287 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m19339 (DateTime_t287 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m3684 (DateTime_t287 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___millisecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
extern "C" void DateTime__ctor_m19340 (DateTime_t287 * __this, bool ___check, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C" void DateTime__ctor_m19341 (DateTime_t287 * __this, int64_t ___ticks, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C" void DateTime__ctor_m9841 (DateTime_t287 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
extern "C" void DateTime__cctor_m19342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool DateTime_System_IConvertible_ToBoolean_m19343 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t DateTime_System_IConvertible_ToByte_m19344 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t DateTime_System_IConvertible_ToChar_m19345 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t287  DateTime_System_IConvertible_ToDateTime_m19346 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t695  DateTime_System_IConvertible_ToDecimal_m19347 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double DateTime_System_IConvertible_ToDouble_m19348 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t DateTime_System_IConvertible_ToInt16_m19349 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t DateTime_System_IConvertible_ToInt32_m19350 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t DateTime_System_IConvertible_ToInt64_m19351 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t DateTime_System_IConvertible_ToSByte_m19352 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float DateTime_System_IConvertible_ToSingle_m19353 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * DateTime_System_IConvertible_ToType_m19354 (DateTime_t287 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t DateTime_System_IConvertible_ToUInt16_m19355 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t DateTime_System_IConvertible_ToUInt32_m19356 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t DateTime_System_IConvertible_ToUInt64_m19357 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
extern "C" int32_t DateTime_AbsoluteDays_m19358 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
extern "C" int32_t DateTime_FromTicks_m19359 (DateTime_t287 * __this, int32_t ___what, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Date()
extern "C" DateTime_t287  DateTime_get_Date_m11581 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
extern "C" int32_t DateTime_get_Month_m11571 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
extern "C" int32_t DateTime_get_Day_m11572 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C" int32_t DateTime_get_DayOfWeek_m19360 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_DayOfYear()
extern "C" int32_t DateTime_get_DayOfYear_m19361 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::get_TimeOfDay()
extern "C" TimeSpan_t334  DateTime_get_TimeOfDay_m11583 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C" int32_t DateTime_get_Hour_m19362 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C" int32_t DateTime_get_Minute_m19363 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C" int32_t DateTime_get_Second_m19364 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Millisecond()
extern "C" int32_t DateTime_get_Millisecond_m19365 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetTimeMonotonic()
extern "C" int64_t DateTime_GetTimeMonotonic_m19366 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
extern "C" int64_t DateTime_GetNow_m19367 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C" DateTime_t287  DateTime_get_Now_m3690 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C" int64_t DateTime_get_Ticks_m3691 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
extern "C" DateTime_t287  DateTime_get_Today_m19368 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
extern "C" DateTime_t287  DateTime_get_UtcNow_m3683 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C" int32_t DateTime_get_Year_m11570 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C" int32_t DateTime_get_Kind_m11561 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C" DateTime_t287  DateTime_Add_m19369 (DateTime_t287 * __this, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C" DateTime_t287  DateTime_AddTicks_m19370 (DateTime_t287 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
extern "C" DateTime_t287  DateTime_AddMilliseconds_m9813 (DateTime_t287 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C" DateTime_t287  DateTime_AddSeconds_m3841 (DateTime_t287 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
extern "C" int32_t DateTime_Compare_m19371 (Object_t * __this /* static, unused */, DateTime_t287  ___t1, DateTime_t287  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
extern "C" int32_t DateTime_CompareTo_m19372 (DateTime_t287 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsDaylightSavingTime()
extern "C" bool DateTime_IsDaylightSavingTime_m19373 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
extern "C" int32_t DateTime_CompareTo_m19374 (DateTime_t287 * __this, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
extern "C" bool DateTime_Equals_m19375 (DateTime_t287 * __this, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToBinary()
extern "C" int64_t DateTime_ToBinary_m19376 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
extern "C" DateTime_t287  DateTime_FromBinary_m19377 (Object_t * __this /* static, unused */, int64_t ___dateData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C" DateTime_t287  DateTime_SpecifyKind_m14852 (Object_t * __this /* static, unused */, DateTime_t287  ___value, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C" int32_t DateTime_DaysInMonth_m19378 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
extern "C" bool DateTime_Equals_m19379 (DateTime_t287 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats()
extern "C" StringU5BU5D_t75* DateTime_GetDateTimeFormats_m19380 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.IFormatProvider)
extern "C" StringU5BU5D_t75* DateTime_GetDateTimeFormats_m19381 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.Char,System.IFormatProvider)
extern "C" StringU5BU5D_t75* DateTime_GetDateTimeFormats_m19382 (DateTime_t287 * __this, uint16_t ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.Boolean,System.String[],System.Globalization.DateTimeFormatInfo)
extern "C" StringU5BU5D_t75* DateTime_GetDateTimeFormats_m19383 (DateTime_t287 * __this, bool ___adjustutc, StringU5BU5D_t75* ___patterns, DateTimeFormatInfo_t4420 * ___dfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
extern "C" void DateTime_CheckDateTimeKind_m19384 (DateTime_t287 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
extern "C" int32_t DateTime_GetHashCode_m11568 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.DateTime::GetTypeCode()
extern "C" int32_t DateTime_GetTypeCode_m19385 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
extern "C" bool DateTime_IsLeapYear_m19386 (Object_t * __this /* static, unused */, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String)
extern "C" DateTime_t287  DateTime_Parse_m3645 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
extern "C" DateTime_t287  DateTime_Parse_m19387 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t287  DateTime_Parse_m19388 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
extern "C" bool DateTime_CoreParse_m19389 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, DateTime_t287 * ___result, DateTimeOffset_t2893 * ___dto, bool ___setExceptionOnError, Exception_t57 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider)
extern "C" DateTime_t287  DateTime_ParseExact_m3813 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
extern "C" StringU5BU5D_t75* DateTime_YearMonthDayFormats_m19390 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t4420 * ___dfi, bool ___setExceptionOnError, Exception_t57 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C" int32_t DateTime__ParseNumber_m19391 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___min_digits, int32_t ___digits, bool ___leadingzero, bool ___sloppy_parsing, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
extern "C" int32_t DateTime__ParseEnum_m19392 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, StringU5BU5D_t75* ___values, StringU5BU5D_t75* ___invValues, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
extern "C" bool DateTime__ParseString_m19393 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, int32_t ___maxlength, String_t* ___value, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
extern "C" bool DateTime__ParseAmPm_m19394 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___num, DateTimeFormatInfo_t4420 * ___dfi, bool ___exact, int32_t* ___num_parsed, int32_t* ___ampm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C" bool DateTime__ParseTimeSeparator_m19395 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t4420 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C" bool DateTime__ParseDateSeparator_m19396 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t4420 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
extern "C" bool DateTime_IsLetter_m19397 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
extern "C" bool DateTime__DoParse_m19398 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___firstPart, String_t* ___secondPart, bool ___exact, DateTime_t287 * ___result, DateTimeOffset_t2893 * ___dto, DateTimeFormatInfo_t4420 * ___dfi, int32_t ___style, bool ___firstPartIsDate, bool* ___incompleteFormat, bool* ___longYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t287  DateTime_ParseExact_m12861 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t287  DateTime_ParseExact_m19399 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t75* ___formats, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
extern "C" void DateTime_CheckStyle_m19400 (Object_t * __this /* static, unused */, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
extern "C" bool DateTime_ParseExact_m19401 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t75* ___formats, DateTimeFormatInfo_t4420 * ___dfi, int32_t ___style, DateTime_t287 * ___ret, bool ___exact, bool* ___longYear, bool ___setExceptionOnError, Exception_t57 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
extern "C" DateTime_t287  DateTime_Subtract_m19402 (DateTime_t287 * __this, TimeSpan_t334  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToFileTime()
extern "C" int64_t DateTime_ToFileTime_m19403 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToFileTimeUtc()
extern "C" int64_t DateTime_ToFileTimeUtc_m19404 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToLongDateString()
extern "C" String_t* DateTime_ToLongDateString_m19405 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToLongTimeString()
extern "C" String_t* DateTime_ToLongTimeString_m19406 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::ToOADate()
extern "C" double DateTime_ToOADate_m19407 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToShortDateString()
extern "C" String_t* DateTime_ToShortDateString_m19408 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToShortTimeString()
extern "C" String_t* DateTime_ToShortTimeString_m19409 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
extern "C" String_t* DateTime_ToString_m19410 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
extern "C" String_t* DateTime_ToString_m19411 (DateTime_t287 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
extern "C" String_t* DateTime_ToString_m7052 (DateTime_t287 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C" String_t* DateTime_ToString_m9887 (DateTime_t287 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C" DateTime_t287  DateTime_ToLocalTime_m14883 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" DateTime_t287  DateTime_ToUniversalTime_m9886 (DateTime_t287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C" DateTime_t287  DateTime_op_Addition_m7042 (Object_t * __this /* static, unused */, DateTime_t287  ___d, TimeSpan_t334  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_Equality_m11566 (Object_t * __this /* static, unused */, DateTime_t287  ___d1, DateTime_t287  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_GreaterThan_m11574 (Object_t * __this /* static, unused */, DateTime_t287  ___t1, DateTime_t287  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_GreaterThanOrEqual_m9814 (Object_t * __this /* static, unused */, DateTime_t287  ___t1, DateTime_t287  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_Inequality_m14823 (Object_t * __this /* static, unused */, DateTime_t287  ___d1, DateTime_t287  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_LessThan_m9901 (Object_t * __this /* static, unused */, DateTime_t287  ___t1, DateTime_t287  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_LessThanOrEqual_m12895 (Object_t * __this /* static, unused */, DateTime_t287  ___t1, DateTime_t287  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
extern "C" TimeSpan_t334  DateTime_op_Subtraction_m3685 (Object_t * __this /* static, unused */, DateTime_t287  ___d1, DateTime_t287  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C" DateTime_t287  DateTime_op_Subtraction_m11582 (Object_t * __this /* static, unused */, DateTime_t287  ___d, TimeSpan_t334  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
