#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7151;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7142;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45787_gshared (ShimEnumerator_t7151 * __this, Dictionary_2_t7142 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45787(__this, ___host, method) (( void (*) (ShimEnumerator_t7151 *, Dictionary_2_t7142 *, const MethodInfo*))ShimEnumerator__ctor_m45787_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45788_gshared (ShimEnumerator_t7151 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45788(__this, method) (( bool (*) (ShimEnumerator_t7151 *, const MethodInfo*))ShimEnumerator_MoveNext_m45788_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m45789_gshared (ShimEnumerator_t7151 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45789(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t7151 *, const MethodInfo*))ShimEnumerator_get_Entry_m45789_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45790_gshared (ShimEnumerator_t7151 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45790(__this, method) (( Object_t * (*) (ShimEnumerator_t7151 *, const MethodInfo*))ShimEnumerator_get_Key_m45790_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45791_gshared (ShimEnumerator_t7151 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45791(__this, method) (( Object_t * (*) (ShimEnumerator_t7151 *, const MethodInfo*))ShimEnumerator_get_Value_m45791_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45792_gshared (ShimEnumerator_t7151 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45792(__this, method) (( Object_t * (*) (ShimEnumerator_t7151 *, const MethodInfo*))ShimEnumerator_get_Current_m45792_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m45793_gshared (ShimEnumerator_t7151 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45793(__this, method) (( void (*) (ShimEnumerator_t7151 *, const MethodInfo*))ShimEnumerator_Reset_m45793_gshared)(__this, method)
