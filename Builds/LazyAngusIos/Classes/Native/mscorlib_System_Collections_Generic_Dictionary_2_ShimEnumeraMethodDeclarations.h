#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t3403;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3391;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17793_gshared (ShimEnumerator_t3403 * __this, Dictionary_2_t3391 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17793(__this, ___host, method) (( void (*) (ShimEnumerator_t3403 *, Dictionary_2_t3391 *, const MethodInfo*))ShimEnumerator__ctor_m17793_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17794_gshared (ShimEnumerator_t3403 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17794(__this, method) (( bool (*) (ShimEnumerator_t3403 *, const MethodInfo*))ShimEnumerator_MoveNext_m17794_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2179  ShimEnumerator_get_Entry_m17795_gshared (ShimEnumerator_t3403 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17795(__this, method) (( DictionaryEntry_t2179  (*) (ShimEnumerator_t3403 *, const MethodInfo*))ShimEnumerator_get_Entry_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17796_gshared (ShimEnumerator_t3403 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17796(__this, method) (( Object_t * (*) (ShimEnumerator_t3403 *, const MethodInfo*))ShimEnumerator_get_Key_m17796_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17797_gshared (ShimEnumerator_t3403 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17797(__this, method) (( Object_t * (*) (ShimEnumerator_t3403 *, const MethodInfo*))ShimEnumerator_get_Value_m17797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17798_gshared (ShimEnumerator_t3403 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17798(__this, method) (( Object_t * (*) (ShimEnumerator_t3403 *, const MethodInfo*))ShimEnumerator_get_Current_m17798_gshared)(__this, method)
