#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5465;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1504;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m22123_gshared (ShimEnumerator_t5465 * __this, Dictionary_2_t1504 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m22123(__this, ___host, method) (( void (*) (ShimEnumerator_t5465 *, Dictionary_2_t1504 *, const MethodInfo*))ShimEnumerator__ctor_m22123_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m22124_gshared (ShimEnumerator_t5465 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m22124(__this, method) (( bool (*) (ShimEnumerator_t5465 *, const MethodInfo*))ShimEnumerator_MoveNext_m22124_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m22125_gshared (ShimEnumerator_t5465 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m22125(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t5465 *, const MethodInfo*))ShimEnumerator_get_Entry_m22125_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m22126_gshared (ShimEnumerator_t5465 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m22126(__this, method) (( Object_t * (*) (ShimEnumerator_t5465 *, const MethodInfo*))ShimEnumerator_get_Key_m22126_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m22127_gshared (ShimEnumerator_t5465 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m22127(__this, method) (( Object_t * (*) (ShimEnumerator_t5465 *, const MethodInfo*))ShimEnumerator_get_Value_m22127_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m22128_gshared (ShimEnumerator_t5465 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m22128(__this, method) (( Object_t * (*) (ShimEnumerator_t5465 *, const MethodInfo*))ShimEnumerator_get_Current_m22128_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m22129_gshared (ShimEnumerator_t5465 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m22129(__this, method) (( void (*) (ShimEnumerator_t5465 *, const MethodInfo*))ShimEnumerator_Reset_m22129_gshared)(__this, method)
