#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t6021;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6012;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m31299_gshared (ShimEnumerator_t6021 * __this, Dictionary_2_t6012 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m31299(__this, ___host, method) (( void (*) (ShimEnumerator_t6021 *, Dictionary_2_t6012 *, const MethodInfo*))ShimEnumerator__ctor_m31299_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m31300_gshared (ShimEnumerator_t6021 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m31300(__this, method) (( bool (*) (ShimEnumerator_t6021 *, const MethodInfo*))ShimEnumerator_MoveNext_m31300_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m31301_gshared (ShimEnumerator_t6021 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m31301(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t6021 *, const MethodInfo*))ShimEnumerator_get_Entry_m31301_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m31302_gshared (ShimEnumerator_t6021 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m31302(__this, method) (( Object_t * (*) (ShimEnumerator_t6021 *, const MethodInfo*))ShimEnumerator_get_Key_m31302_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m31303_gshared (ShimEnumerator_t6021 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m31303(__this, method) (( Object_t * (*) (ShimEnumerator_t6021 *, const MethodInfo*))ShimEnumerator_get_Value_m31303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m31304_gshared (ShimEnumerator_t6021 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m31304(__this, method) (( Object_t * (*) (ShimEnumerator_t6021 *, const MethodInfo*))ShimEnumerator_get_Current_m31304_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m31305_gshared (ShimEnumerator_t6021 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m31305(__this, method) (( void (*) (ShimEnumerator_t6021 *, const MethodInfo*))ShimEnumerator_Reset_m31305_gshared)(__this, method)
