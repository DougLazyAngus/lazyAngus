#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3444;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1228;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18587_gshared (ShimEnumerator_t3444 * __this, Dictionary_2_t1228 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18587(__this, ___host, method) (( void (*) (ShimEnumerator_t3444 *, Dictionary_2_t1228 *, const MethodInfo*))ShimEnumerator__ctor_m18587_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18588_gshared (ShimEnumerator_t3444 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18588(__this, method) (( bool (*) (ShimEnumerator_t3444 *, const MethodInfo*))ShimEnumerator_MoveNext_m18588_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2180  ShimEnumerator_get_Entry_m18589_gshared (ShimEnumerator_t3444 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18589(__this, method) (( DictionaryEntry_t2180  (*) (ShimEnumerator_t3444 *, const MethodInfo*))ShimEnumerator_get_Entry_m18589_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18590_gshared (ShimEnumerator_t3444 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18590(__this, method) (( Object_t * (*) (ShimEnumerator_t3444 *, const MethodInfo*))ShimEnumerator_get_Key_m18590_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18591_gshared (ShimEnumerator_t3444 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18591(__this, method) (( Object_t * (*) (ShimEnumerator_t3444 *, const MethodInfo*))ShimEnumerator_get_Value_m18591_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18592_gshared (ShimEnumerator_t3444 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18592(__this, method) (( Object_t * (*) (ShimEnumerator_t3444 *, const MethodInfo*))ShimEnumerator_get_Current_m18592_gshared)(__this, method)
