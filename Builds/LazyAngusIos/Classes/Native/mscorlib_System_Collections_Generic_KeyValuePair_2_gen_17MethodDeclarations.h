#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
struct KeyValuePair_2_t3379;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m11863_gshared (KeyValuePair_2_t3379 * __this, DateTime_t287  ___key, TimeType_t3356  ___value, const MethodInfo* method);
#define KeyValuePair_2__ctor_m11863(__this, ___key, ___value, method) (( void (*) (KeyValuePair_2_t3379 *, DateTime_t287 , TimeType_t3356 , const MethodInfo*))KeyValuePair_2__ctor_m11863_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" DateTime_t287  KeyValuePair_2_get_Key_m11853_gshared (KeyValuePair_2_t3379 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Key_m11853(__this, method) (( DateTime_t287  (*) (KeyValuePair_2_t3379 *, const MethodInfo*))KeyValuePair_2_get_Key_m11853_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m63511_gshared (KeyValuePair_2_t3379 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Key_m63511(__this, ___value, method) (( void (*) (KeyValuePair_2_t3379 *, DateTime_t287 , const MethodInfo*))KeyValuePair_2_set_Key_m63511_gshared)(__this, ___value, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" TimeType_t3356  KeyValuePair_2_get_Value_m11854_gshared (KeyValuePair_2_t3379 * __this, const MethodInfo* method);
#define KeyValuePair_2_get_Value_m11854(__this, method) (( TimeType_t3356  (*) (KeyValuePair_2_t3379 *, const MethodInfo*))KeyValuePair_2_get_Value_m11854_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m63512_gshared (KeyValuePair_2_t3379 * __this, TimeType_t3356  ___value, const MethodInfo* method);
#define KeyValuePair_2_set_Value_m63512(__this, ___value, method) (( void (*) (KeyValuePair_2_t3379 *, TimeType_t3356 , const MethodInfo*))KeyValuePair_2_set_Value_m63512_gshared)(__this, ___value, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::ToString()
extern "C" String_t* KeyValuePair_2_ToString_m63513_gshared (KeyValuePair_2_t3379 * __this, const MethodInfo* method);
#define KeyValuePair_2_ToString_m63513(__this, method) (( String_t* (*) (KeyValuePair_2_t3379 *, const MethodInfo*))KeyValuePair_2_ToString_m63513_gshared)(__this, method)
