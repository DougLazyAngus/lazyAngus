#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t8353;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8344;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m59873_gshared (ShimEnumerator_t8353 * __this, Dictionary_2_t8344 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m59873(__this, ___host, method) (( void (*) (ShimEnumerator_t8353 *, Dictionary_2_t8344 *, const MethodInfo*))ShimEnumerator__ctor_m59873_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m59874_gshared (ShimEnumerator_t8353 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m59874(__this, method) (( bool (*) (ShimEnumerator_t8353 *, const MethodInfo*))ShimEnumerator_MoveNext_m59874_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m59875_gshared (ShimEnumerator_t8353 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m59875(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t8353 *, const MethodInfo*))ShimEnumerator_get_Entry_m59875_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m59876_gshared (ShimEnumerator_t8353 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m59876(__this, method) (( Object_t * (*) (ShimEnumerator_t8353 *, const MethodInfo*))ShimEnumerator_get_Key_m59876_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m59877_gshared (ShimEnumerator_t8353 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m59877(__this, method) (( Object_t * (*) (ShimEnumerator_t8353 *, const MethodInfo*))ShimEnumerator_get_Value_m59877_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m59878_gshared (ShimEnumerator_t8353 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m59878(__this, method) (( Object_t * (*) (ShimEnumerator_t8353 *, const MethodInfo*))ShimEnumerator_get_Current_m59878_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m59879_gshared (ShimEnumerator_t8353 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m59879(__this, method) (( void (*) (ShimEnumerator_t8353 *, const MethodInfo*))ShimEnumerator_Reset_m59879_gshared)(__this, method)
