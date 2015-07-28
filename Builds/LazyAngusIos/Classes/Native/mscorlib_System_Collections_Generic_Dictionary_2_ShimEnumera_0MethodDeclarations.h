#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5393;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1428;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21653_gshared (ShimEnumerator_t5393 * __this, Dictionary_2_t1428 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21653(__this, ___host, method) (( void (*) (ShimEnumerator_t5393 *, Dictionary_2_t1428 *, const MethodInfo*))ShimEnumerator__ctor_m21653_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21654_gshared (ShimEnumerator_t5393 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21654(__this, method) (( bool (*) (ShimEnumerator_t5393 *, const MethodInfo*))ShimEnumerator_MoveNext_m21654_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2080  ShimEnumerator_get_Entry_m21655_gshared (ShimEnumerator_t5393 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21655(__this, method) (( DictionaryEntry_t2080  (*) (ShimEnumerator_t5393 *, const MethodInfo*))ShimEnumerator_get_Entry_m21655_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21656_gshared (ShimEnumerator_t5393 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21656(__this, method) (( Object_t * (*) (ShimEnumerator_t5393 *, const MethodInfo*))ShimEnumerator_get_Key_m21656_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21657_gshared (ShimEnumerator_t5393 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21657(__this, method) (( Object_t * (*) (ShimEnumerator_t5393 *, const MethodInfo*))ShimEnumerator_get_Value_m21657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21658_gshared (ShimEnumerator_t5393 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21658(__this, method) (( Object_t * (*) (ShimEnumerator_t5393 *, const MethodInfo*))ShimEnumerator_get_Current_m21658_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21659_gshared (ShimEnumerator_t5393 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21659(__this, method) (( void (*) (ShimEnumerator_t5393 *, const MethodInfo*))ShimEnumerator_Reset_m21659_gshared)(__this, method)
