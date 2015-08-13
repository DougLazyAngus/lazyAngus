#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t8653;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4124;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m63921_gshared (ShimEnumerator_t8653 * __this, Dictionary_2_t4124 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m63921(__this, ___host, method) (( void (*) (ShimEnumerator_t8653 *, Dictionary_2_t4124 *, const MethodInfo*))ShimEnumerator__ctor_m63921_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m63922_gshared (ShimEnumerator_t8653 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m63922(__this, method) (( bool (*) (ShimEnumerator_t8653 *, const MethodInfo*))ShimEnumerator_MoveNext_m63922_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m63923_gshared (ShimEnumerator_t8653 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m63923(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t8653 *, const MethodInfo*))ShimEnumerator_get_Entry_m63923_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m63924_gshared (ShimEnumerator_t8653 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m63924(__this, method) (( Object_t * (*) (ShimEnumerator_t8653 *, const MethodInfo*))ShimEnumerator_get_Key_m63924_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m63925_gshared (ShimEnumerator_t8653 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m63925(__this, method) (( Object_t * (*) (ShimEnumerator_t8653 *, const MethodInfo*))ShimEnumerator_get_Value_m63925_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m63926_gshared (ShimEnumerator_t8653 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m63926(__this, method) (( Object_t * (*) (ShimEnumerator_t8653 *, const MethodInfo*))ShimEnumerator_get_Current_m63926_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m63927_gshared (ShimEnumerator_t8653 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m63927(__this, method) (( void (*) (ShimEnumerator_t8653 *, const MethodInfo*))ShimEnumerator_Reset_m63927_gshared)(__this, method)
