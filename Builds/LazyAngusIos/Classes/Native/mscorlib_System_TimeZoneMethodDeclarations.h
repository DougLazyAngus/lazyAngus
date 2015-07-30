#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t4153;
// System.Globalization.DaylightTime
struct DaylightTime_t4424;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m19789 (TimeZone_t4153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m19790 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t4153 * TimeZone_get_CurrentTimeZone_m14853 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m19791 (TimeZone_t4153 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m19792 (Object_t * __this /* static, unused */, DateTime_t287  ___time, DaylightTime_t4424 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t287  TimeZone_ToLocalTime_m19793 (TimeZone_t4153 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t287  TimeZone_ToUniversalTime_m19794 (TimeZone_t4153 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t334  TimeZone_GetLocalTimeDiff_m19795 (TimeZone_t4153 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t334  TimeZone_GetLocalTimeDiff_m19796 (TimeZone_t4153 * __this, DateTime_t287  ___time, TimeSpan_t334  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
