#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t8374;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8365;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m60464_gshared (ShimEnumerator_t8374 * __this, Dictionary_2_t8365 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m60464(__this, ___host, method) (( void (*) (ShimEnumerator_t8374 *, Dictionary_2_t8365 *, const MethodInfo*))ShimEnumerator__ctor_m60464_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m60465_gshared (ShimEnumerator_t8374 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m60465(__this, method) (( bool (*) (ShimEnumerator_t8374 *, const MethodInfo*))ShimEnumerator_MoveNext_m60465_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2080  ShimEnumerator_get_Entry_m60466_gshared (ShimEnumerator_t8374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m60466(__this, method) (( DictionaryEntry_t2080  (*) (ShimEnumerator_t8374 *, const MethodInfo*))ShimEnumerator_get_Entry_m60466_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m60467_gshared (ShimEnumerator_t8374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m60467(__this, method) (( Object_t * (*) (ShimEnumerator_t8374 *, const MethodInfo*))ShimEnumerator_get_Key_m60467_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m60468_gshared (ShimEnumerator_t8374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m60468(__this, method) (( Object_t * (*) (ShimEnumerator_t8374 *, const MethodInfo*))ShimEnumerator_get_Value_m60468_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m60469_gshared (ShimEnumerator_t8374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m60469(__this, method) (( Object_t * (*) (ShimEnumerator_t8374 *, const MethodInfo*))ShimEnumerator_get_Current_m60469_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m60470_gshared (ShimEnumerator_t8374 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m60470(__this, method) (( void (*) (ShimEnumerator_t8374 *, const MethodInfo*))ShimEnumerator_Reset_m60470_gshared)(__this, method)
