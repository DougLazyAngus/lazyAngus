#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t8534;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3314;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m62641_gshared (ShimEnumerator_t8534 * __this, Dictionary_2_t3314 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m62641(__this, ___host, method) (( void (*) (ShimEnumerator_t8534 *, Dictionary_2_t3314 *, const MethodInfo*))ShimEnumerator__ctor_m62641_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m62642_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m62642(__this, method) (( bool (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_MoveNext_m62642_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m62643_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m62643(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_get_Entry_m62643_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m62644_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m62644(__this, method) (( Object_t * (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_get_Key_m62644_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m62645_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m62645(__this, method) (( Object_t * (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_get_Value_m62645_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m62646_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m62646(__this, method) (( Object_t * (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_get_Current_m62646_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m62647_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m62647(__this, method) (( void (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_Reset_m62647_gshared)(__this, method)
