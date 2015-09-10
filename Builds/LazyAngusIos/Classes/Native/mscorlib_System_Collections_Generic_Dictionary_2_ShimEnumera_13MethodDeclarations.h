#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t9206;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3801;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m68214_gshared (ShimEnumerator_t9206 * __this, Dictionary_2_t3801 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m68214(__this, ___host, method) (( void (*) (ShimEnumerator_t9206 *, Dictionary_2_t3801 *, const MethodInfo*))ShimEnumerator__ctor_m68214_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m68215_gshared (ShimEnumerator_t9206 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m68215(__this, method) (( bool (*) (ShimEnumerator_t9206 *, const MethodInfo*))ShimEnumerator_MoveNext_m68215_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m68216_gshared (ShimEnumerator_t9206 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m68216(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t9206 *, const MethodInfo*))ShimEnumerator_get_Entry_m68216_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m68217_gshared (ShimEnumerator_t9206 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m68217(__this, method) (( Object_t * (*) (ShimEnumerator_t9206 *, const MethodInfo*))ShimEnumerator_get_Key_m68217_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m68218_gshared (ShimEnumerator_t9206 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m68218(__this, method) (( Object_t * (*) (ShimEnumerator_t9206 *, const MethodInfo*))ShimEnumerator_get_Value_m68218_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m68219_gshared (ShimEnumerator_t9206 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m68219(__this, method) (( Object_t * (*) (ShimEnumerator_t9206 *, const MethodInfo*))ShimEnumerator_get_Current_m68219_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m68220_gshared (ShimEnumerator_t9206 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m68220(__this, method) (( void (*) (ShimEnumerator_t9206 *, const MethodInfo*))ShimEnumerator_Reset_m68220_gshared)(__this, method)
