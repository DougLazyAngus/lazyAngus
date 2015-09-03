#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t9257;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4476;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m69078_gshared (ShimEnumerator_t9257 * __this, Dictionary_2_t4476 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m69078(__this, ___host, method) (( void (*) (ShimEnumerator_t9257 *, Dictionary_2_t4476 *, const MethodInfo*))ShimEnumerator__ctor_m69078_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m69079_gshared (ShimEnumerator_t9257 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m69079(__this, method) (( bool (*) (ShimEnumerator_t9257 *, const MethodInfo*))ShimEnumerator_MoveNext_m69079_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m69080_gshared (ShimEnumerator_t9257 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m69080(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t9257 *, const MethodInfo*))ShimEnumerator_get_Entry_m69080_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m69081_gshared (ShimEnumerator_t9257 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m69081(__this, method) (( Object_t * (*) (ShimEnumerator_t9257 *, const MethodInfo*))ShimEnumerator_get_Key_m69081_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m69082_gshared (ShimEnumerator_t9257 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m69082(__this, method) (( Object_t * (*) (ShimEnumerator_t9257 *, const MethodInfo*))ShimEnumerator_get_Value_m69082_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m69083_gshared (ShimEnumerator_t9257 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m69083(__this, method) (( Object_t * (*) (ShimEnumerator_t9257 *, const MethodInfo*))ShimEnumerator_get_Current_m69083_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m69084_gshared (ShimEnumerator_t9257 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m69084(__this, method) (( void (*) (ShimEnumerator_t9257 *, const MethodInfo*))ShimEnumerator_Reset_m69084_gshared)(__this, method)
