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
extern "C" void ShimEnumerator__ctor_m44043_gshared (ShimEnumerator_t6999 * __this, Dictionary_2_t6990 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44043(__this, ___host, method) (( void (*) (ShimEnumerator_t6999 *, Dictionary_2_t6990 *, const MethodInfo*))ShimEnumerator__ctor_m44043_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44044_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44044(__this, method) (( bool (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_MoveNext_m44044_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m44045_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44045(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_get_Entry_m44045_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44046_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44046(__this, method) (( Object_t * (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_get_Key_m44046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44047_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44047(__this, method) (( Object_t * (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_get_Value_m44047_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44048_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44048(__this, method) (( Object_t * (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_get_Current_m44048_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m44049_gshared (ShimEnumerator_t6999 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44049(__this, method) (( void (*) (ShimEnumerator_t6999 *, const MethodInfo*))ShimEnumerator_Reset_m44049_gshared)(__this, method)
