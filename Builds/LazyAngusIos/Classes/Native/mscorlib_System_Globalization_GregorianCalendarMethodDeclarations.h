#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t4474;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Globalization.GregorianCalendarTypes
#include "mscorlib_System_Globalization_GregorianCalendarTypes.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar__ctor_m17272 (GregorianCalendar_t4474 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
extern "C" void GregorianCalendar__ctor_m17273 (GregorianCalendar_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
extern "C" Int32U5BU5D_t484* GregorianCalendar_get_Eras_m17274 (GregorianCalendar_t4474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar_set_CalendarType_m17275 (GregorianCalendar_t4474 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfMonth_m17276 (GregorianCalendar_t4474 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfWeek_m17277 (GregorianCalendar_t4474 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
extern "C" int32_t GregorianCalendar_GetEra_m17278 (GregorianCalendar_t4474 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetMonth_m17279 (GregorianCalendar_t4474 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
extern "C" int32_t GregorianCalendar_GetYear_m17280 (GregorianCalendar_t4474 * __this, DateTime_t287  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
