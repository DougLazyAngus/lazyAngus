#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t9199;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3794;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m68157_gshared (ShimEnumerator_t9199 * __this, Dictionary_2_t3794 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m68157(__this, ___host, method) (( void (*) (ShimEnumerator_t9199 *, Dictionary_2_t3794 *, const MethodInfo*))ShimEnumerator__ctor_m68157_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m68158_gshared (ShimEnumerator_t9199 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m68158(__this, method) (( bool (*) (ShimEnumerator_t9199 *, const MethodInfo*))ShimEnumerator_MoveNext_m68158_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m68159_gshared (ShimEnumerator_t9199 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m68159(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t9199 *, const MethodInfo*))ShimEnumerator_get_Entry_m68159_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m68160_gshared (ShimEnumerator_t9199 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m68160(__this, method) (( Object_t * (*) (ShimEnumerator_t9199 *, const MethodInfo*))ShimEnumerator_get_Key_m68160_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m68161_gshared (ShimEnumerator_t9199 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m68161(__this, method) (( Object_t * (*) (ShimEnumerator_t9199 *, const MethodInfo*))ShimEnumerator_get_Value_m68161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m68162_gshared (ShimEnumerator_t9199 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m68162(__this, method) (( Object_t * (*) (ShimEnumerator_t9199 *, const MethodInfo*))ShimEnumerator_get_Current_m68162_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m68163_gshared (ShimEnumerator_t9199 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m68163(__this, method) (( void (*) (ShimEnumerator_t9199 *, const MethodInfo*))ShimEnumerator_Reset_m68163_gshared)(__this, method)
