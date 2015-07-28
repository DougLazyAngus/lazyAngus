﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t4417;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C" void DaylightTime__ctor_m16922 (DaylightTime_t4417 * __this, DateTime_t287  ___start, DateTime_t287  ___end, TimeSpan_t334  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C" DateTime_t287  DaylightTime_get_Start_m16923 (DaylightTime_t4417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C" DateTime_t287  DaylightTime_get_End_m16924 (DaylightTime_t4417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C" TimeSpan_t334  DaylightTime_get_Delta_m16925 (DaylightTime_t4417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
