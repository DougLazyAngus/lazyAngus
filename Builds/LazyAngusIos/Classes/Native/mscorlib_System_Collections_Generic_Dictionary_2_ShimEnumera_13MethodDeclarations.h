#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t8612;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3362;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m63430_gshared (ShimEnumerator_t8612 * __this, Dictionary_2_t3362 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m63430(__this, ___host, method) (( void (*) (ShimEnumerator_t8612 *, Dictionary_2_t3362 *, const MethodInfo*))ShimEnumerator__ctor_m63430_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m63431_gshared (ShimEnumerator_t8612 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m63431(__this, method) (( bool (*) (ShimEnumerator_t8612 *, const MethodInfo*))ShimEnumerator_MoveNext_m63431_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m63432_gshared (ShimEnumerator_t8612 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m63432(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t8612 *, const MethodInfo*))ShimEnumerator_get_Entry_m63432_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m63433_gshared (ShimEnumerator_t8612 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m63433(__this, method) (( Object_t * (*) (ShimEnumerator_t8612 *, const MethodInfo*))ShimEnumerator_get_Key_m63433_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m63434_gshared (ShimEnumerator_t8612 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m63434(__this, method) (( Object_t * (*) (ShimEnumerator_t8612 *, const MethodInfo*))ShimEnumerator_get_Value_m63434_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m63435_gshared (ShimEnumerator_t8612 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m63435(__this, method) (( Object_t * (*) (ShimEnumerator_t8612 *, const MethodInfo*))ShimEnumerator_get_Current_m63435_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m63436_gshared (ShimEnumerator_t8612 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m63436(__this, method) (( void (*) (ShimEnumerator_t8612 *, const MethodInfo*))ShimEnumerator_Reset_m63436_gshared)(__this, method)
