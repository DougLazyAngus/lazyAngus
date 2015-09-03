#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t6092;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6081;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m28288_gshared (ShimEnumerator_t6092 * __this, Dictionary_2_t6081 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m28288(__this, ___host, method) (( void (*) (ShimEnumerator_t6092 *, Dictionary_2_t6081 *, const MethodInfo*))ShimEnumerator__ctor_m28288_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m28289_gshared (ShimEnumerator_t6092 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m28289(__this, method) (( bool (*) (ShimEnumerator_t6092 *, const MethodInfo*))ShimEnumerator_MoveNext_m28289_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m28290_gshared (ShimEnumerator_t6092 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m28290(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t6092 *, const MethodInfo*))ShimEnumerator_get_Entry_m28290_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m28291_gshared (ShimEnumerator_t6092 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m28291(__this, method) (( Object_t * (*) (ShimEnumerator_t6092 *, const MethodInfo*))ShimEnumerator_get_Key_m28291_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m28292_gshared (ShimEnumerator_t6092 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m28292(__this, method) (( Object_t * (*) (ShimEnumerator_t6092 *, const MethodInfo*))ShimEnumerator_get_Value_m28292_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m28293_gshared (ShimEnumerator_t6092 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m28293(__this, method) (( Object_t * (*) (ShimEnumerator_t6092 *, const MethodInfo*))ShimEnumerator_get_Current_m28293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m28294_gshared (ShimEnumerator_t6092 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m28294(__this, method) (( void (*) (ShimEnumerator_t6092 *, const MethodInfo*))ShimEnumerator_Reset_m28294_gshared)(__this, method)
