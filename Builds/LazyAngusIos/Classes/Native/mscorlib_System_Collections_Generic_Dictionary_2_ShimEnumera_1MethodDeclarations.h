#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5540;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5529;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23924_gshared (ShimEnumerator_t5540 * __this, Dictionary_2_t5529 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23924(__this, ___host, method) (( void (*) (ShimEnumerator_t5540 *, Dictionary_2_t5529 *, const MethodInfo*))ShimEnumerator__ctor_m23924_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23925_gshared (ShimEnumerator_t5540 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23925(__this, method) (( bool (*) (ShimEnumerator_t5540 *, const MethodInfo*))ShimEnumerator_MoveNext_m23925_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m23926_gshared (ShimEnumerator_t5540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23926(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t5540 *, const MethodInfo*))ShimEnumerator_get_Entry_m23926_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23927_gshared (ShimEnumerator_t5540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23927(__this, method) (( Object_t * (*) (ShimEnumerator_t5540 *, const MethodInfo*))ShimEnumerator_get_Key_m23927_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23928_gshared (ShimEnumerator_t5540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23928(__this, method) (( Object_t * (*) (ShimEnumerator_t5540 *, const MethodInfo*))ShimEnumerator_get_Value_m23928_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23929_gshared (ShimEnumerator_t5540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23929(__this, method) (( Object_t * (*) (ShimEnumerator_t5540 *, const MethodInfo*))ShimEnumerator_get_Current_m23929_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m23930_gshared (ShimEnumerator_t5540 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23930(__this, method) (( void (*) (ShimEnumerator_t5540 *, const MethodInfo*))ShimEnumerator_Reset_m23930_gshared)(__this, method)
