#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5448;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1487;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21975_gshared (ShimEnumerator_t5448 * __this, Dictionary_2_t1487 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21975(__this, ___host, method) (( void (*) (ShimEnumerator_t5448 *, Dictionary_2_t1487 *, const MethodInfo*))ShimEnumerator__ctor_m21975_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21976_gshared (ShimEnumerator_t5448 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21976(__this, method) (( bool (*) (ShimEnumerator_t5448 *, const MethodInfo*))ShimEnumerator_MoveNext_m21976_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m21977_gshared (ShimEnumerator_t5448 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21977(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t5448 *, const MethodInfo*))ShimEnumerator_get_Entry_m21977_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21978_gshared (ShimEnumerator_t5448 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21978(__this, method) (( Object_t * (*) (ShimEnumerator_t5448 *, const MethodInfo*))ShimEnumerator_get_Key_m21978_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21979_gshared (ShimEnumerator_t5448 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21979(__this, method) (( Object_t * (*) (ShimEnumerator_t5448 *, const MethodInfo*))ShimEnumerator_get_Value_m21979_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21980_gshared (ShimEnumerator_t5448 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21980(__this, method) (( Object_t * (*) (ShimEnumerator_t5448 *, const MethodInfo*))ShimEnumerator_get_Current_m21980_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21981_gshared (ShimEnumerator_t5448 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21981(__this, method) (( void (*) (ShimEnumerator_t5448 *, const MethodInfo*))ShimEnumerator_Reset_m21981_gshared)(__this, method)
