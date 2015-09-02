#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t6053;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6044;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m31664_gshared (ShimEnumerator_t6053 * __this, Dictionary_2_t6044 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m31664(__this, ___host, method) (( void (*) (ShimEnumerator_t6053 *, Dictionary_2_t6044 *, const MethodInfo*))ShimEnumerator__ctor_m31664_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m31665_gshared (ShimEnumerator_t6053 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m31665(__this, method) (( bool (*) (ShimEnumerator_t6053 *, const MethodInfo*))ShimEnumerator_MoveNext_m31665_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m31666_gshared (ShimEnumerator_t6053 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m31666(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t6053 *, const MethodInfo*))ShimEnumerator_get_Entry_m31666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m31667_gshared (ShimEnumerator_t6053 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m31667(__this, method) (( Object_t * (*) (ShimEnumerator_t6053 *, const MethodInfo*))ShimEnumerator_get_Key_m31667_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m31668_gshared (ShimEnumerator_t6053 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m31668(__this, method) (( Object_t * (*) (ShimEnumerator_t6053 *, const MethodInfo*))ShimEnumerator_get_Value_m31668_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m31669_gshared (ShimEnumerator_t6053 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m31669(__this, method) (( Object_t * (*) (ShimEnumerator_t6053 *, const MethodInfo*))ShimEnumerator_get_Current_m31669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m31670_gshared (ShimEnumerator_t6053 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m31670(__this, method) (( void (*) (ShimEnumerator_t6053 *, const MethodInfo*))ShimEnumerator_Reset_m31670_gshared)(__this, method)
