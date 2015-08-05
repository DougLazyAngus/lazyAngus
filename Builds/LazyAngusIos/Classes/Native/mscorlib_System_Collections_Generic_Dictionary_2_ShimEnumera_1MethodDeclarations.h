#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5498;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5487;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23690_gshared (ShimEnumerator_t5498 * __this, Dictionary_2_t5487 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23690(__this, ___host, method) (( void (*) (ShimEnumerator_t5498 *, Dictionary_2_t5487 *, const MethodInfo*))ShimEnumerator__ctor_m23690_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23691_gshared (ShimEnumerator_t5498 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23691(__this, method) (( bool (*) (ShimEnumerator_t5498 *, const MethodInfo*))ShimEnumerator_MoveNext_m23691_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m23692_gshared (ShimEnumerator_t5498 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23692(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t5498 *, const MethodInfo*))ShimEnumerator_get_Entry_m23692_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23693_gshared (ShimEnumerator_t5498 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23693(__this, method) (( Object_t * (*) (ShimEnumerator_t5498 *, const MethodInfo*))ShimEnumerator_get_Key_m23693_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23694_gshared (ShimEnumerator_t5498 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23694(__this, method) (( Object_t * (*) (ShimEnumerator_t5498 *, const MethodInfo*))ShimEnumerator_get_Value_m23694_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23695_gshared (ShimEnumerator_t5498 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23695(__this, method) (( Object_t * (*) (ShimEnumerator_t5498 *, const MethodInfo*))ShimEnumerator_get_Current_m23695_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m23696_gshared (ShimEnumerator_t5498 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23696(__this, method) (( void (*) (ShimEnumerator_t5498 *, const MethodInfo*))ShimEnumerator_Reset_m23696_gshared)(__this, method)
