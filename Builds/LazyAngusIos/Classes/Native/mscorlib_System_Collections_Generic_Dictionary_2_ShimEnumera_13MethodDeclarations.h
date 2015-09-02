#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t8644;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3381;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m63794_gshared (ShimEnumerator_t8644 * __this, Dictionary_2_t3381 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m63794(__this, ___host, method) (( void (*) (ShimEnumerator_t8644 *, Dictionary_2_t3381 *, const MethodInfo*))ShimEnumerator__ctor_m63794_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m63795_gshared (ShimEnumerator_t8644 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m63795(__this, method) (( bool (*) (ShimEnumerator_t8644 *, const MethodInfo*))ShimEnumerator_MoveNext_m63795_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m63796_gshared (ShimEnumerator_t8644 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m63796(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t8644 *, const MethodInfo*))ShimEnumerator_get_Entry_m63796_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m63797_gshared (ShimEnumerator_t8644 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m63797(__this, method) (( Object_t * (*) (ShimEnumerator_t8644 *, const MethodInfo*))ShimEnumerator_get_Key_m63797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m63798_gshared (ShimEnumerator_t8644 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m63798(__this, method) (( Object_t * (*) (ShimEnumerator_t8644 *, const MethodInfo*))ShimEnumerator_get_Value_m63798_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m63799_gshared (ShimEnumerator_t8644 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m63799(__this, method) (( Object_t * (*) (ShimEnumerator_t8644 *, const MethodInfo*))ShimEnumerator_get_Current_m63799_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m63800_gshared (ShimEnumerator_t8644 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m63800(__this, method) (( void (*) (ShimEnumerator_t8644 *, const MethodInfo*))ShimEnumerator_Reset_m63800_gshared)(__this, method)
