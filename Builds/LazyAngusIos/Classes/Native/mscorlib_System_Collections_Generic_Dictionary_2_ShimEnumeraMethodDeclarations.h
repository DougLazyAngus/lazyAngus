#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t5364;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2803;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21047_gshared (ShimEnumerator_t5364 * __this, Dictionary_2_t2803 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21047(__this, ___host, method) (( void (*) (ShimEnumerator_t5364 *, Dictionary_2_t2803 *, const MethodInfo*))ShimEnumerator__ctor_m21047_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21048_gshared (ShimEnumerator_t5364 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21048(__this, method) (( bool (*) (ShimEnumerator_t5364 *, const MethodInfo*))ShimEnumerator_MoveNext_m21048_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m21049_gshared (ShimEnumerator_t5364 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21049(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t5364 *, const MethodInfo*))ShimEnumerator_get_Entry_m21049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21050_gshared (ShimEnumerator_t5364 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21050(__this, method) (( Object_t * (*) (ShimEnumerator_t5364 *, const MethodInfo*))ShimEnumerator_get_Key_m21050_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21051_gshared (ShimEnumerator_t5364 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21051(__this, method) (( Object_t * (*) (ShimEnumerator_t5364 *, const MethodInfo*))ShimEnumerator_get_Value_m21051_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21052_gshared (ShimEnumerator_t5364 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21052(__this, method) (( Object_t * (*) (ShimEnumerator_t5364 *, const MethodInfo*))ShimEnumerator_get_Current_m21052_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21053_gshared (ShimEnumerator_t5364 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21053(__this, method) (( void (*) (ShimEnumerator_t5364 *, const MethodInfo*))ShimEnumerator_Reset_m21053_gshared)(__this, method)
