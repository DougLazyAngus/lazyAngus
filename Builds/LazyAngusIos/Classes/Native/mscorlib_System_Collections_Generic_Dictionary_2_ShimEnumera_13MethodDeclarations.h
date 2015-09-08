#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t9194;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3791;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m68145_gshared (ShimEnumerator_t9194 * __this, Dictionary_2_t3791 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m68145(__this, ___host, method) (( void (*) (ShimEnumerator_t9194 *, Dictionary_2_t3791 *, const MethodInfo*))ShimEnumerator__ctor_m68145_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m68146_gshared (ShimEnumerator_t9194 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m68146(__this, method) (( bool (*) (ShimEnumerator_t9194 *, const MethodInfo*))ShimEnumerator_MoveNext_m68146_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m68147_gshared (ShimEnumerator_t9194 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m68147(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t9194 *, const MethodInfo*))ShimEnumerator_get_Entry_m68147_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m68148_gshared (ShimEnumerator_t9194 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m68148(__this, method) (( Object_t * (*) (ShimEnumerator_t9194 *, const MethodInfo*))ShimEnumerator_get_Key_m68148_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m68149_gshared (ShimEnumerator_t9194 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m68149(__this, method) (( Object_t * (*) (ShimEnumerator_t9194 *, const MethodInfo*))ShimEnumerator_get_Value_m68149_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m68150_gshared (ShimEnumerator_t9194 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m68150(__this, method) (( Object_t * (*) (ShimEnumerator_t9194 *, const MethodInfo*))ShimEnumerator_get_Current_m68150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m68151_gshared (ShimEnumerator_t9194 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m68151(__this, method) (( void (*) (ShimEnumerator_t9194 *, const MethodInfo*))ShimEnumerator_Reset_m68151_gshared)(__this, method)
