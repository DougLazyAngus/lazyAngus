#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3416;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3405;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18570_gshared (ShimEnumerator_t3416 * __this, Dictionary_2_t3405 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18570(__this, ___host, method) (( void (*) (ShimEnumerator_t3416 *, Dictionary_2_t3405 *, const MethodInfo*))ShimEnumerator__ctor_m18570_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18571_gshared (ShimEnumerator_t3416 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18571(__this, method) (( bool (*) (ShimEnumerator_t3416 *, const MethodInfo*))ShimEnumerator_MoveNext_m18571_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1685  ShimEnumerator_get_Entry_m18572_gshared (ShimEnumerator_t3416 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18572(__this, method) (( DictionaryEntry_t1685  (*) (ShimEnumerator_t3416 *, const MethodInfo*))ShimEnumerator_get_Entry_m18572_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18573_gshared (ShimEnumerator_t3416 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18573(__this, method) (( Object_t * (*) (ShimEnumerator_t3416 *, const MethodInfo*))ShimEnumerator_get_Key_m18573_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18574_gshared (ShimEnumerator_t3416 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18574(__this, method) (( Object_t * (*) (ShimEnumerator_t3416 *, const MethodInfo*))ShimEnumerator_get_Value_m18574_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18575_gshared (ShimEnumerator_t3416 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18575(__this, method) (( Object_t * (*) (ShimEnumerator_t3416 *, const MethodInfo*))ShimEnumerator_get_Current_m18575_gshared)(__this, method)
