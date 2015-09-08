#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7687;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7678;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m50056_gshared (ShimEnumerator_t7687 * __this, Dictionary_2_t7678 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m50056(__this, ___host, method) (( void (*) (ShimEnumerator_t7687 *, Dictionary_2_t7678 *, const MethodInfo*))ShimEnumerator__ctor_m50056_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m50057_gshared (ShimEnumerator_t7687 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m50057(__this, method) (( bool (*) (ShimEnumerator_t7687 *, const MethodInfo*))ShimEnumerator_MoveNext_m50057_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m50058_gshared (ShimEnumerator_t7687 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m50058(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t7687 *, const MethodInfo*))ShimEnumerator_get_Entry_m50058_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m50059_gshared (ShimEnumerator_t7687 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m50059(__this, method) (( Object_t * (*) (ShimEnumerator_t7687 *, const MethodInfo*))ShimEnumerator_get_Key_m50059_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m50060_gshared (ShimEnumerator_t7687 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m50060(__this, method) (( Object_t * (*) (ShimEnumerator_t7687 *, const MethodInfo*))ShimEnumerator_get_Value_m50060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m50061_gshared (ShimEnumerator_t7687 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m50061(__this, method) (( Object_t * (*) (ShimEnumerator_t7687 *, const MethodInfo*))ShimEnumerator_get_Current_m50061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m50062_gshared (ShimEnumerator_t7687 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m50062(__this, method) (( void (*) (ShimEnumerator_t7687 *, const MethodInfo*))ShimEnumerator_Reset_m50062_gshared)(__this, method)
