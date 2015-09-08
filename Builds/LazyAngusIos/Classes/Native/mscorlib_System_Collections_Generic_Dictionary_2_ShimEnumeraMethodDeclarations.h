#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t5964;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2874;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25656_gshared (ShimEnumerator_t5964 * __this, Dictionary_2_t2874 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25656(__this, ___host, method) (( void (*) (ShimEnumerator_t5964 *, Dictionary_2_t2874 *, const MethodInfo*))ShimEnumerator__ctor_m25656_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25657_gshared (ShimEnumerator_t5964 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25657(__this, method) (( bool (*) (ShimEnumerator_t5964 *, const MethodInfo*))ShimEnumerator_MoveNext_m25657_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m25658_gshared (ShimEnumerator_t5964 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25658(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t5964 *, const MethodInfo*))ShimEnumerator_get_Entry_m25658_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25659_gshared (ShimEnumerator_t5964 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25659(__this, method) (( Object_t * (*) (ShimEnumerator_t5964 *, const MethodInfo*))ShimEnumerator_get_Key_m25659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25660_gshared (ShimEnumerator_t5964 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25660(__this, method) (( Object_t * (*) (ShimEnumerator_t5964 *, const MethodInfo*))ShimEnumerator_get_Value_m25660_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25661_gshared (ShimEnumerator_t5964 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25661(__this, method) (( Object_t * (*) (ShimEnumerator_t5964 *, const MethodInfo*))ShimEnumerator_get_Current_m25661_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m25662_gshared (ShimEnumerator_t5964 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m25662(__this, method) (( void (*) (ShimEnumerator_t5964 *, const MethodInfo*))ShimEnumerator_Reset_m25662_gshared)(__this, method)
