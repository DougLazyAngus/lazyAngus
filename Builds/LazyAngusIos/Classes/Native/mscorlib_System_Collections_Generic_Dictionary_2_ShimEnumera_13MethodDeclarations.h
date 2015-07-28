#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t8526;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3306;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m62594_gshared (ShimEnumerator_t8526 * __this, Dictionary_2_t3306 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m62594(__this, ___host, method) (( void (*) (ShimEnumerator_t8526 *, Dictionary_2_t3306 *, const MethodInfo*))ShimEnumerator__ctor_m62594_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m62595_gshared (ShimEnumerator_t8526 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m62595(__this, method) (( bool (*) (ShimEnumerator_t8526 *, const MethodInfo*))ShimEnumerator_MoveNext_m62595_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2079  ShimEnumerator_get_Entry_m62596_gshared (ShimEnumerator_t8526 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m62596(__this, method) (( DictionaryEntry_t2079  (*) (ShimEnumerator_t8526 *, const MethodInfo*))ShimEnumerator_get_Entry_m62596_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m62597_gshared (ShimEnumerator_t8526 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m62597(__this, method) (( Object_t * (*) (ShimEnumerator_t8526 *, const MethodInfo*))ShimEnumerator_get_Key_m62597_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m62598_gshared (ShimEnumerator_t8526 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m62598(__this, method) (( Object_t * (*) (ShimEnumerator_t8526 *, const MethodInfo*))ShimEnumerator_get_Value_m62598_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m62599_gshared (ShimEnumerator_t8526 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m62599(__this, method) (( Object_t * (*) (ShimEnumerator_t8526 *, const MethodInfo*))ShimEnumerator_get_Current_m62599_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m62600_gshared (ShimEnumerator_t8526 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m62600(__this, method) (( void (*) (ShimEnumerator_t8526 *, const MethodInfo*))ShimEnumerator_Reset_m62600_gshared)(__this, method)
