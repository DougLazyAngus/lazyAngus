#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6769;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6760;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38089_gshared (ShimEnumerator_t6769 * __this, Dictionary_2_t6760 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m38089(__this, ___host, method) (( void (*) (ShimEnumerator_t6769 *, Dictionary_2_t6760 *, const MethodInfo*))ShimEnumerator__ctor_m38089_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38090_gshared (ShimEnumerator_t6769 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m38090(__this, method) (( bool (*) (ShimEnumerator_t6769 *, const MethodInfo*))ShimEnumerator_MoveNext_m38090_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m38091_gshared (ShimEnumerator_t6769 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m38091(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t6769 *, const MethodInfo*))ShimEnumerator_get_Entry_m38091_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38092_gshared (ShimEnumerator_t6769 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m38092(__this, method) (( Object_t * (*) (ShimEnumerator_t6769 *, const MethodInfo*))ShimEnumerator_get_Key_m38092_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38093_gshared (ShimEnumerator_t6769 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m38093(__this, method) (( Object_t * (*) (ShimEnumerator_t6769 *, const MethodInfo*))ShimEnumerator_get_Value_m38093_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m38094_gshared (ShimEnumerator_t6769 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m38094(__this, method) (( Object_t * (*) (ShimEnumerator_t6769 *, const MethodInfo*))ShimEnumerator_get_Current_m38094_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m38095_gshared (ShimEnumerator_t6769 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m38095(__this, method) (( void (*) (ShimEnumerator_t6769 *, const MethodInfo*))ShimEnumerator_Reset_m38095_gshared)(__this, method)
