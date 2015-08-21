#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t8459;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8450;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61299_gshared (ShimEnumerator_t8459 * __this, Dictionary_2_t8450 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61299(__this, ___host, method) (( void (*) (ShimEnumerator_t8459 *, Dictionary_2_t8450 *, const MethodInfo*))ShimEnumerator__ctor_m61299_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61300_gshared (ShimEnumerator_t8459 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61300(__this, method) (( bool (*) (ShimEnumerator_t8459 *, const MethodInfo*))ShimEnumerator_MoveNext_m61300_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m61301_gshared (ShimEnumerator_t8459 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61301(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t8459 *, const MethodInfo*))ShimEnumerator_get_Entry_m61301_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61302_gshared (ShimEnumerator_t8459 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61302(__this, method) (( Object_t * (*) (ShimEnumerator_t8459 *, const MethodInfo*))ShimEnumerator_get_Key_m61302_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61303_gshared (ShimEnumerator_t8459 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61303(__this, method) (( Object_t * (*) (ShimEnumerator_t8459 *, const MethodInfo*))ShimEnumerator_get_Value_m61303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61304_gshared (ShimEnumerator_t8459 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61304(__this, method) (( Object_t * (*) (ShimEnumerator_t8459 *, const MethodInfo*))ShimEnumerator_get_Current_m61304_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m61305_gshared (ShimEnumerator_t8459 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61305(__this, method) (( void (*) (ShimEnumerator_t8459 *, const MethodInfo*))ShimEnumerator_Reset_m61305_gshared)(__this, method)
