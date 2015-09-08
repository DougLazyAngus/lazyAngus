#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t9263;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4480;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m69103_gshared (ShimEnumerator_t9263 * __this, Dictionary_2_t4480 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m69103(__this, ___host, method) (( void (*) (ShimEnumerator_t9263 *, Dictionary_2_t4480 *, const MethodInfo*))ShimEnumerator__ctor_m69103_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m69104_gshared (ShimEnumerator_t9263 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m69104(__this, method) (( bool (*) (ShimEnumerator_t9263 *, const MethodInfo*))ShimEnumerator_MoveNext_m69104_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m69105_gshared (ShimEnumerator_t9263 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m69105(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t9263 *, const MethodInfo*))ShimEnumerator_get_Entry_m69105_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m69106_gshared (ShimEnumerator_t9263 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m69106(__this, method) (( Object_t * (*) (ShimEnumerator_t9263 *, const MethodInfo*))ShimEnumerator_get_Key_m69106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m69107_gshared (ShimEnumerator_t9263 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m69107(__this, method) (( Object_t * (*) (ShimEnumerator_t9263 *, const MethodInfo*))ShimEnumerator_get_Value_m69107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m69108_gshared (ShimEnumerator_t9263 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m69108(__this, method) (( Object_t * (*) (ShimEnumerator_t9263 *, const MethodInfo*))ShimEnumerator_get_Current_m69108_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m69109_gshared (ShimEnumerator_t9263 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m69109(__this, method) (( void (*) (ShimEnumerator_t9263 *, const MethodInfo*))ShimEnumerator_Reset_m69109_gshared)(__this, method)
