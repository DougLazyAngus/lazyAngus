#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t3304;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3292;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16892_gshared (ShimEnumerator_t3304 * __this, Dictionary_2_t3292 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16892(__this, ___host, method) (( void (*) (ShimEnumerator_t3304 *, Dictionary_2_t3292 *, const MethodInfo*))ShimEnumerator__ctor_m16892_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16893_gshared (ShimEnumerator_t3304 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16893(__this, method) (( bool (*) (ShimEnumerator_t3304 *, const MethodInfo*))ShimEnumerator_MoveNext_m16893_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1663  ShimEnumerator_get_Entry_m16894_gshared (ShimEnumerator_t3304 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16894(__this, method) (( DictionaryEntry_t1663  (*) (ShimEnumerator_t3304 *, const MethodInfo*))ShimEnumerator_get_Entry_m16894_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16895_gshared (ShimEnumerator_t3304 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16895(__this, method) (( Object_t * (*) (ShimEnumerator_t3304 *, const MethodInfo*))ShimEnumerator_get_Key_m16895_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16896_gshared (ShimEnumerator_t3304 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16896(__this, method) (( Object_t * (*) (ShimEnumerator_t3304 *, const MethodInfo*))ShimEnumerator_get_Value_m16896_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16897_gshared (ShimEnumerator_t3304 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16897(__this, method) (( Object_t * (*) (ShimEnumerator_t3304 *, const MethodInfo*))ShimEnumerator_get_Current_m16897_gshared)(__this, method)
