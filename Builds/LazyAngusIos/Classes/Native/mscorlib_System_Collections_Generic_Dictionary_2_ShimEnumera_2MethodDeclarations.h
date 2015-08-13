#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t6017;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6008;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m31211_gshared (ShimEnumerator_t6017 * __this, Dictionary_2_t6008 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m31211(__this, ___host, method) (( void (*) (ShimEnumerator_t6017 *, Dictionary_2_t6008 *, const MethodInfo*))ShimEnumerator__ctor_m31211_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m31212_gshared (ShimEnumerator_t6017 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m31212(__this, method) (( bool (*) (ShimEnumerator_t6017 *, const MethodInfo*))ShimEnumerator_MoveNext_m31212_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m31213_gshared (ShimEnumerator_t6017 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m31213(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t6017 *, const MethodInfo*))ShimEnumerator_get_Entry_m31213_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m31214_gshared (ShimEnumerator_t6017 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m31214(__this, method) (( Object_t * (*) (ShimEnumerator_t6017 *, const MethodInfo*))ShimEnumerator_get_Key_m31214_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m31215_gshared (ShimEnumerator_t6017 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m31215(__this, method) (( Object_t * (*) (ShimEnumerator_t6017 *, const MethodInfo*))ShimEnumerator_get_Value_m31215_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m31216_gshared (ShimEnumerator_t6017 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m31216(__this, method) (( Object_t * (*) (ShimEnumerator_t6017 *, const MethodInfo*))ShimEnumerator_get_Current_m31216_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m31217_gshared (ShimEnumerator_t6017 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m31217(__this, method) (( void (*) (ShimEnumerator_t6017 *, const MethodInfo*))ShimEnumerator_Reset_m31217_gshared)(__this, method)
