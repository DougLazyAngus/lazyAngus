#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t8524;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8513;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m62106_gshared (ShimEnumerator_t8524 * __this, Dictionary_2_t8513 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m62106(__this, ___host, method) (( void (*) (ShimEnumerator_t8524 *, Dictionary_2_t8513 *, const MethodInfo*))ShimEnumerator__ctor_m62106_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m62107_gshared (ShimEnumerator_t8524 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m62107(__this, method) (( bool (*) (ShimEnumerator_t8524 *, const MethodInfo*))ShimEnumerator_MoveNext_m62107_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m62108_gshared (ShimEnumerator_t8524 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m62108(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t8524 *, const MethodInfo*))ShimEnumerator_get_Entry_m62108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m62109_gshared (ShimEnumerator_t8524 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m62109(__this, method) (( Object_t * (*) (ShimEnumerator_t8524 *, const MethodInfo*))ShimEnumerator_get_Key_m62109_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m62110_gshared (ShimEnumerator_t8524 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m62110(__this, method) (( Object_t * (*) (ShimEnumerator_t8524 *, const MethodInfo*))ShimEnumerator_get_Value_m62110_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m62111_gshared (ShimEnumerator_t8524 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m62111(__this, method) (( Object_t * (*) (ShimEnumerator_t8524 *, const MethodInfo*))ShimEnumerator_get_Current_m62111_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m62112_gshared (ShimEnumerator_t8524 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m62112(__this, method) (( void (*) (ShimEnumerator_t8524 *, const MethodInfo*))ShimEnumerator_Reset_m62112_gshared)(__this, method)
