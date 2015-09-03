#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t9059;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9048;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m66375_gshared (ShimEnumerator_t9059 * __this, Dictionary_2_t9048 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m66375(__this, ___host, method) (( void (*) (ShimEnumerator_t9059 *, Dictionary_2_t9048 *, const MethodInfo*))ShimEnumerator__ctor_m66375_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m66376_gshared (ShimEnumerator_t9059 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m66376(__this, method) (( bool (*) (ShimEnumerator_t9059 *, const MethodInfo*))ShimEnumerator_MoveNext_m66376_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m66377_gshared (ShimEnumerator_t9059 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m66377(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t9059 *, const MethodInfo*))ShimEnumerator_get_Entry_m66377_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m66378_gshared (ShimEnumerator_t9059 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m66378(__this, method) (( Object_t * (*) (ShimEnumerator_t9059 *, const MethodInfo*))ShimEnumerator_get_Key_m66378_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m66379_gshared (ShimEnumerator_t9059 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m66379(__this, method) (( Object_t * (*) (ShimEnumerator_t9059 *, const MethodInfo*))ShimEnumerator_get_Value_m66379_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m66380_gshared (ShimEnumerator_t9059 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m66380(__this, method) (( Object_t * (*) (ShimEnumerator_t9059 *, const MethodInfo*))ShimEnumerator_get_Current_m66380_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m66381_gshared (ShimEnumerator_t9059 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m66381(__this, method) (( void (*) (ShimEnumerator_t9059 *, const MethodInfo*))ShimEnumerator_Reset_m66381_gshared)(__this, method)
