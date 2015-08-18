#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t8608;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3364;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m63338_gshared (ShimEnumerator_t8608 * __this, Dictionary_2_t3364 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m63338(__this, ___host, method) (( void (*) (ShimEnumerator_t8608 *, Dictionary_2_t3364 *, const MethodInfo*))ShimEnumerator__ctor_m63338_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m63339_gshared (ShimEnumerator_t8608 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m63339(__this, method) (( bool (*) (ShimEnumerator_t8608 *, const MethodInfo*))ShimEnumerator_MoveNext_m63339_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m63340_gshared (ShimEnumerator_t8608 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m63340(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t8608 *, const MethodInfo*))ShimEnumerator_get_Entry_m63340_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m63341_gshared (ShimEnumerator_t8608 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m63341(__this, method) (( Object_t * (*) (ShimEnumerator_t8608 *, const MethodInfo*))ShimEnumerator_get_Key_m63341_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m63342_gshared (ShimEnumerator_t8608 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m63342(__this, method) (( Object_t * (*) (ShimEnumerator_t8608 *, const MethodInfo*))ShimEnumerator_get_Value_m63342_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m63343_gshared (ShimEnumerator_t8608 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m63343(__this, method) (( Object_t * (*) (ShimEnumerator_t8608 *, const MethodInfo*))ShimEnumerator_get_Current_m63343_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m63344_gshared (ShimEnumerator_t8608 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m63344(__this, method) (( void (*) (ShimEnumerator_t8608 *, const MethodInfo*))ShimEnumerator_Reset_m63344_gshared)(__this, method)
