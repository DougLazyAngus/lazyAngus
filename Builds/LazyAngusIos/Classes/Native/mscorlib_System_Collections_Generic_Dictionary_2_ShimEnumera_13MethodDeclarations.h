#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t8615;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3365;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m63462_gshared (ShimEnumerator_t8615 * __this, Dictionary_2_t3365 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m63462(__this, ___host, method) (( void (*) (ShimEnumerator_t8615 *, Dictionary_2_t3365 *, const MethodInfo*))ShimEnumerator__ctor_m63462_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m63463_gshared (ShimEnumerator_t8615 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m63463(__this, method) (( bool (*) (ShimEnumerator_t8615 *, const MethodInfo*))ShimEnumerator_MoveNext_m63463_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m63464_gshared (ShimEnumerator_t8615 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m63464(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t8615 *, const MethodInfo*))ShimEnumerator_get_Entry_m63464_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m63465_gshared (ShimEnumerator_t8615 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m63465(__this, method) (( Object_t * (*) (ShimEnumerator_t8615 *, const MethodInfo*))ShimEnumerator_get_Key_m63465_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m63466_gshared (ShimEnumerator_t8615 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m63466(__this, method) (( Object_t * (*) (ShimEnumerator_t8615 *, const MethodInfo*))ShimEnumerator_get_Value_m63466_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m63467_gshared (ShimEnumerator_t8615 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m63467(__this, method) (( Object_t * (*) (ShimEnumerator_t8615 *, const MethodInfo*))ShimEnumerator_get_Current_m63467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m63468_gshared (ShimEnumerator_t8615 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m63468(__this, method) (( void (*) (ShimEnumerator_t8615 *, const MethodInfo*))ShimEnumerator_Reset_m63468_gshared)(__this, method)
