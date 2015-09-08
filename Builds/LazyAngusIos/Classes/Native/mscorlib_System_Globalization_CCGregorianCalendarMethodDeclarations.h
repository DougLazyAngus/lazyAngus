#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CCGregorianCalendar
struct CCGregorianCalendar_t4969;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Boolean System.Globalization.CCGregorianCalendar::is_leap_year(System.Int32)
extern "C" bool CCGregorianCalendar_is_leap_year_m21237 (Object_t * __this /* static, unused */, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::fixed_from_dmy(System.Int32,System.Int32,System.Int32)
extern "C" int32_t CCGregorianCalendar_fixed_from_dmy_m21238 (Object_t * __this /* static, unused */, int32_t ___day, int32_t ___month, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::year_from_fixed(System.Int32)
extern "C" int32_t CCGregorianCalendar_year_from_fixed_m21239 (Object_t * __this /* static, unused */, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::my_from_fixed(System.Int32&,System.Int32&,System.Int32)
extern "C" void CCGregorianCalendar_my_from_fixed_m21240 (Object_t * __this /* static, unused */, int32_t* ___month, int32_t* ___year, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::dmy_from_fixed(System.Int32&,System.Int32&,System.Int32&,System.Int32)
extern "C" void CCGregorianCalendar_dmy_from_fixed_m21241 (Object_t * __this /* static, unused */, int32_t* ___day, int32_t* ___month, int32_t* ___year, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::month_from_fixed(System.Int32)
extern "C" int32_t CCGregorianCalendar_month_from_fixed_m21242 (Object_t * __this /* static, unused */, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::day_from_fixed(System.Int32)
extern "C" int32_t CCGregorianCalendar_day_from_fixed_m21243 (Object_t * __this /* static, unused */, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C" int32_t CCGregorianCalendar_GetDayOfMonth_m21244 (Object_t * __this /* static, unused */, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetMonth(System.DateTime)
extern "C" int32_t CCGregorianCalendar_GetMonth_m21245 (Object_t * __this /* static, unused */, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetYear(System.DateTime)
extern "C" int32_t CCGregorianCalendar_GetYear_m21246 (Object_t * __this /* static, unused */, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
