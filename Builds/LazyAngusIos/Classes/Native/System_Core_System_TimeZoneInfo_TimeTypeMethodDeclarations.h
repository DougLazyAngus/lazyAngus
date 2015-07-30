#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZoneInfo/TimeType
struct TimeType_t3306;
struct TimeType_t3306_marshaled;
// System.String
struct String_t;

// System.Void System.TimeZoneInfo/TimeType::.ctor(System.Int32,System.Boolean,System.String)
extern "C" void TimeType__ctor_m11503 (TimeType_t3306 * __this, int32_t ___offset, bool ___is_dst, String_t* ___abbrev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo/TimeType::ToString()
extern "C" String_t* TimeType_ToString_m11504 (TimeType_t3306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TimeType_t3306_marshal(const TimeType_t3306& unmarshaled, TimeType_t3306_marshaled& marshaled);
void TimeType_t3306_marshal_back(const TimeType_t3306_marshaled& marshaled, TimeType_t3306& unmarshaled);
void TimeType_t3306_marshal_cleanup(TimeType_t3306_marshaled& marshaled);
