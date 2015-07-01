#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2337;
// System.String[]
struct StringU5BU5D_t45;
// System.String
struct String_t;
// System.Globalization.Calendar
struct Calendar_t2332;
// System.IFormatProvider
struct IFormatProvider_t2370;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
extern "C" void DateTimeFormatInfo__ctor_m12657 (DateTimeFormatInfo_t2337 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
extern "C" void DateTimeFormatInfo__ctor_m12658 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
extern "C" void DateTimeFormatInfo__cctor_m12659 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
extern "C" DateTimeFormatInfo_t2337 * DateTimeFormatInfo_GetInstance_m12660 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
extern "C" bool DateTimeFormatInfo_get_IsReadOnly_m12661 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
extern "C" DateTimeFormatInfo_t2337 * DateTimeFormatInfo_ReadOnly_m12662 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t2337 * ___dtfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
extern "C" Object_t * DateTimeFormatInfo_Clone_m12663 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
extern "C" Object_t * DateTimeFormatInfo_GetFormat_m12664 (DateTimeFormatInfo_t2337 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m12665 (DateTimeFormatInfo_t2337 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetEraName_m12666 (DateTimeFormatInfo_t2337 * __this, int32_t ___era, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetMonthName_m12667 (DateTimeFormatInfo_t2337 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
extern "C" StringU5BU5D_t45* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m12668 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
extern "C" StringU5BU5D_t45* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m12669 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
extern "C" StringU5BU5D_t45* DateTimeFormatInfo_get_RawDayNames_m12670 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
extern "C" StringU5BU5D_t45* DateTimeFormatInfo_get_RawMonthNames_m12671 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_AMDesignator_m12672 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_PMDesignator_m12673 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
extern "C" String_t* DateTimeFormatInfo_get_DateSeparator_m12674 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
extern "C" String_t* DateTimeFormatInfo_get_TimeSeparator_m12675 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongDatePattern_m12676 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortDatePattern_m12677 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortTimePattern_m12678 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongTimePattern_m12679 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
extern "C" String_t* DateTimeFormatInfo_get_MonthDayPattern_m12680 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
extern "C" String_t* DateTimeFormatInfo_get_YearMonthPattern_m12681 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_FullDateTimePattern_m12682 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
extern "C" DateTimeFormatInfo_t2337 * DateTimeFormatInfo_get_CurrentInfo_m12683 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C" DateTimeFormatInfo_t2337 * DateTimeFormatInfo_get_InvariantInfo_m12684 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
extern "C" Calendar_t2332 * DateTimeFormatInfo_get_Calendar_m12685 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
extern "C" void DateTimeFormatInfo_set_Calendar_m12686 (DateTimeFormatInfo_t2337 * __this, Calendar_t2332 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
extern "C" String_t* DateTimeFormatInfo_get_RFC1123Pattern_m12687 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
extern "C" String_t* DateTimeFormatInfo_get_RoundtripPattern_m12688 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m12689 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m12690 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
extern "C" StringU5BU5D_t45* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m12691 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
extern "C" void DateTimeFormatInfo_FillAllDateTimePatterns_m12692 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
extern "C" StringU5BU5D_t45* DateTimeFormatInfo_GetAllRawDateTimePatterns_m12693 (DateTimeFormatInfo_t2337 * __this, uint16_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetDayName_m12694 (DateTimeFormatInfo_t2337 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m12695 (DateTimeFormatInfo_t2337 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
extern "C" void DateTimeFormatInfo_FillInvariantPatterns_m12696 (DateTimeFormatInfo_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
extern "C" StringU5BU5D_t45* DateTimeFormatInfo_PopulateCombinedList_m12697 (DateTimeFormatInfo_t2337 * __this, StringU5BU5D_t45* ___dates, StringU5BU5D_t45* ___times, const MethodInfo* method) IL2CPP_METHOD_ATTR;
