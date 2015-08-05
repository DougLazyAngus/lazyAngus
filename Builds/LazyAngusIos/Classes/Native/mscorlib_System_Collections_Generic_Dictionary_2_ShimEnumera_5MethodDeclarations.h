#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t6999;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6990;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44040_gshared (ShimEnumerator_t6999 * __this, Dictionary_2_t6990 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44040(__this, ___host, method) (( void (*) (ShimEnumerator_t6999 *, Dictionary_2_t6990 *, const MethodInfo*))ShimEnumerator__ctor_m44040_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44041_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44041(__this, method) (( bool (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_MoveNext_m44041_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m44042_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44042(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_get_Entry_m44042_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44043_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44043(__this, method) (( Object_t * (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_get_Key_m44043_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44044_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44044(__this, method) (( Object_t * (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_get_Value_m44044_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44045_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44045(__this, method) (( Object_t * (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_get_Current_m44045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m44046_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44046(__this, method) (( void (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_Reset_m44046_gshared)(__this, method)
