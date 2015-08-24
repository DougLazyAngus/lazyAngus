#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t7076;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7067;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44833_gshared (ShimEnumerator_t7076 * __this, Dictionary_2_t7067 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44833(__this, ___host, method) (( void (*) (ShimEnumerator_t7076 *, Dictionary_2_t7067 *, const MethodInfo*))ShimEnumerator__ctor_m44833_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44834_gshared (ShimEnumerator_t7076 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44834(__this, method) (( bool (*) (ShimEnumerator_t7076 *, const MethodInfo*))ShimEnumerator_MoveNext_m44834_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m44835_gshared (ShimEnumerator_t7076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44835(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t7076 *, const MethodInfo*))ShimEnumerator_get_Entry_m44835_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44836_gshared (ShimEnumerator_t7076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44836(__this, method) (( Object_t * (*) (ShimEnumerator_t7076 *, const MethodInfo*))ShimEnumerator_get_Key_m44836_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44837_gshared (ShimEnumerator_t7076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44837(__this, method) (( Object_t * (*) (ShimEnumerator_t7076 *, const MethodInfo*))ShimEnumerator_get_Value_m44837_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44838_gshared (ShimEnumerator_t7076 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44838(__this, method) (( Object_t * (*) (ShimEnumerator_t7076 *, const MethodInfo*))ShimEnumerator_get_Current_m44838_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m44839_gshared (ShimEnumerator_t7076 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44839(__this, method) (( void (*) (ShimEnumerator_t7076 *, const MethodInfo*))ShimEnumerator_Reset_m44839_gshared)(__this, method)
