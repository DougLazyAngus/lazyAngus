#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1274;
// System.Globalization.DaylightTime
struct DaylightTime_t4424;
// System.TimeZone
#include "mscorlib_System_TimeZone.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t4793  : public TimeZone_t4153
{
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_1;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_2;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t1274 * ___m_CachedDaylightChanges_3;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_4;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t334  ___utcOffsetWithOutDLS_5;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t334  ___utcOffsetWithDLS_6;
};
struct CurrentSystemTimeZone_t4793_StaticFields{
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_7;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t4424 * ___this_year_dlt_8;
};
