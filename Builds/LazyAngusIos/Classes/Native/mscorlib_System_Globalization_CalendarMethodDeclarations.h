#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.Calendar
struct Calendar_t4419;
// System.Int32[]
struct Int32U5BU5D_t549;
// System.String[]
struct StringU5BU5D_t75;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.Calendar::.ctor()
extern "C" void Calendar__ctor_m16875 (Calendar_t4419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.Calendar::get_Eras()
// System.Void System.Globalization.Calendar::CheckReadOnly()
extern "C" void Calendar_CheckReadOnly_m16876 (Calendar_t4419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.Calendar::GetDayOfMonth(System.DateTime)
// System.DayOfWeek System.Globalization.Calendar::GetDayOfWeek(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetEra(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetMonth(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetYear(System.DateTime)
// System.String[] System.Globalization.Calendar::get_EraNames()
extern "C" StringU5BU5D_t75* Calendar_get_EraNames_m16877 (Calendar_t4419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
