#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t8418;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8407;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m60984_gshared (ShimEnumerator_t8418 * __this, Dictionary_2_t8407 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m60984(__this, ___host, method) (( void (*) (ShimEnumerator_t8418 *, Dictionary_2_t8407 *, const MethodInfo*))ShimEnumerator__ctor_m60984_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m60985_gshared (ShimEnumerator_t8418 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m60985(__this, method) (( bool (*) (ShimEnumerator_t8418 *, const MethodInfo*))ShimEnumerator_MoveNext_m60985_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m60986_gshared (ShimEnumerator_t8418 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m60986(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t8418 *, const MethodInfo*))ShimEnumerator_get_Entry_m60986_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m60987_gshared (ShimEnumerator_t8418 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m60987(__this, method) (( Object_t * (*) (ShimEnumerator_t8418 *, const MethodInfo*))ShimEnumerator_get_Key_m60987_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m60988_gshared (ShimEnumerator_t8418 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m60988(__this, method) (( Object_t * (*) (ShimEnumerator_t8418 *, const MethodInfo*))ShimEnumerator_get_Value_m60988_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m60989_gshared (ShimEnumerator_t8418 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m60989(__this, method) (( Object_t * (*) (ShimEnumerator_t8418 *, const MethodInfo*))ShimEnumerator_get_Current_m60989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m60990_gshared (ShimEnumerator_t8418 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m60990(__this, method) (( void (*) (ShimEnumerator_t8418 *, const MethodInfo*))ShimEnumerator_Reset_m60990_gshared)(__this, method)
