#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t8385;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8376;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m60237_gshared (ShimEnumerator_t8385 * __this, Dictionary_2_t8376 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m60237(__this, ___host, method) (( void (*) (ShimEnumerator_t8385 *, Dictionary_2_t8376 *, const MethodInfo*))ShimEnumerator__ctor_m60237_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m60238_gshared (ShimEnumerator_t8385 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m60238(__this, method) (( bool (*) (ShimEnumerator_t8385 *, const MethodInfo*))ShimEnumerator_MoveNext_m60238_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m60239_gshared (ShimEnumerator_t8385 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m60239(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t8385 *, const MethodInfo*))ShimEnumerator_get_Entry_m60239_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m60240_gshared (ShimEnumerator_t8385 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m60240(__this, method) (( Object_t * (*) (ShimEnumerator_t8385 *, const MethodInfo*))ShimEnumerator_get_Key_m60240_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m60241_gshared (ShimEnumerator_t8385 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m60241(__this, method) (( Object_t * (*) (ShimEnumerator_t8385 *, const MethodInfo*))ShimEnumerator_get_Value_m60241_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m60242_gshared (ShimEnumerator_t8385 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m60242(__this, method) (( Object_t * (*) (ShimEnumerator_t8385 *, const MethodInfo*))ShimEnumerator_get_Current_m60242_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m60243_gshared (ShimEnumerator_t8385 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m60243(__this, method) (( void (*) (ShimEnumerator_t8385 *, const MethodInfo*))ShimEnumerator_Reset_m60243_gshared)(__this, method)
