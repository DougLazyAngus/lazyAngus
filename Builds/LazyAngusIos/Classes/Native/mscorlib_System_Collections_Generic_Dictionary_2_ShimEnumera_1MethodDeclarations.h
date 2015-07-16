#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3449;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3438;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18786_gshared (ShimEnumerator_t3449 * __this, Dictionary_2_t3438 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18786(__this, ___host, method) (( void (*) (ShimEnumerator_t3449 *, Dictionary_2_t3438 *, const MethodInfo*))ShimEnumerator__ctor_m18786_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18787_gshared (ShimEnumerator_t3449 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18787(__this, method) (( bool (*) (ShimEnumerator_t3449 *, const MethodInfo*))ShimEnumerator_MoveNext_m18787_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1718  ShimEnumerator_get_Entry_m18788_gshared (ShimEnumerator_t3449 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18788(__this, method) (( DictionaryEntry_t1718  (*) (ShimEnumerator_t3449 *, const MethodInfo*))ShimEnumerator_get_Entry_m18788_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18789_gshared (ShimEnumerator_t3449 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18789(__this, method) (( Object_t * (*) (ShimEnumerator_t3449 *, const MethodInfo*))ShimEnumerator_get_Key_m18789_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18790_gshared (ShimEnumerator_t3449 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18790(__this, method) (( Object_t * (*) (ShimEnumerator_t3449 *, const MethodInfo*))ShimEnumerator_get_Value_m18790_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18791_gshared (ShimEnumerator_t3449 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18791(__this, method) (( Object_t * (*) (ShimEnumerator_t3449 *, const MethodInfo*))ShimEnumerator_get_Current_m18791_gshared)(__this, method)
