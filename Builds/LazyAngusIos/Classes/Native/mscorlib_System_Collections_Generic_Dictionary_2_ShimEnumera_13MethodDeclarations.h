#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t9193;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3790;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m68132_gshared (ShimEnumerator_t9193 * __this, Dictionary_2_t3790 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m68132(__this, ___host, method) (( void (*) (ShimEnumerator_t9193 *, Dictionary_2_t3790 *, const MethodInfo*))ShimEnumerator__ctor_m68132_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m68133_gshared (ShimEnumerator_t9193 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m68133(__this, method) (( bool (*) (ShimEnumerator_t9193 *, const MethodInfo*))ShimEnumerator_MoveNext_m68133_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m68134_gshared (ShimEnumerator_t9193 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m68134(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t9193 *, const MethodInfo*))ShimEnumerator_get_Entry_m68134_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m68135_gshared (ShimEnumerator_t9193 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m68135(__this, method) (( Object_t * (*) (ShimEnumerator_t9193 *, const MethodInfo*))ShimEnumerator_get_Key_m68135_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m68136_gshared (ShimEnumerator_t9193 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m68136(__this, method) (( Object_t * (*) (ShimEnumerator_t9193 *, const MethodInfo*))ShimEnumerator_get_Value_m68136_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m68137_gshared (ShimEnumerator_t9193 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m68137(__this, method) (( Object_t * (*) (ShimEnumerator_t9193 *, const MethodInfo*))ShimEnumerator_get_Current_m68137_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m68138_gshared (ShimEnumerator_t9193 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m68138(__this, method) (( void (*) (ShimEnumerator_t9193 *, const MethodInfo*))ShimEnumerator_Reset_m68138_gshared)(__this, method)
