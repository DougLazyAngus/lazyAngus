#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t8455;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8446;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61211_gshared (ShimEnumerator_t8455 * __this, Dictionary_2_t8446 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61211(__this, ___host, method) (( void (*) (ShimEnumerator_t8455 *, Dictionary_2_t8446 *, const MethodInfo*))ShimEnumerator__ctor_m61211_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61212_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61212(__this, method) (( bool (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_MoveNext_m61212_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m61213_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61213(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_get_Entry_m61213_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61214_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61214(__this, method) (( Object_t * (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_get_Key_m61214_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61215_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61215(__this, method) (( Object_t * (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_get_Value_m61215_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61216_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61216(__this, method) (( Object_t * (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_get_Current_m61216_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m61217_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61217(__this, method) (( void (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_Reset_m61217_gshared)(__this, method)
