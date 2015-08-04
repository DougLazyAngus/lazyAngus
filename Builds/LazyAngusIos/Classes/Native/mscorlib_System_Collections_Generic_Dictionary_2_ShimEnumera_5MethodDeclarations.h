#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t6997;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6988;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44028_gshared (ShimEnumerator_t6997 * __this, Dictionary_2_t6988 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44028(__this, ___host, method) (( void (*) (ShimEnumerator_t6997 *, Dictionary_2_t6988 *, const MethodInfo*))ShimEnumerator__ctor_m44028_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44029_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44029(__this, method) (( bool (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_MoveNext_m44029_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m44030_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44030(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_get_Entry_m44030_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44031_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44031(__this, method) (( Object_t * (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_get_Key_m44031_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44032_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44032(__this, method) (( Object_t * (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_get_Value_m44032_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44033_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44033(__this, method) (( Object_t * (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_get_Current_m44033_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m44034_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44034(__this, method) (( void (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_Reset_m44034_gshared)(__this, method)
