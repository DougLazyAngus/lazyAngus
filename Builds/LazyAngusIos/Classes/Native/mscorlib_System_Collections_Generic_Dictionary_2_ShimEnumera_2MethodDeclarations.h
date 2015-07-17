#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3954;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3942;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26604_gshared (ShimEnumerator_t3954 * __this, Dictionary_2_t3942 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26604(__this, ___host, method) (( void (*) (ShimEnumerator_t3954 *, Dictionary_2_t3942 *, const MethodInfo*))ShimEnumerator__ctor_m26604_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26605_gshared (ShimEnumerator_t3954 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26605(__this, method) (( bool (*) (ShimEnumerator_t3954 *, const MethodInfo*))ShimEnumerator_MoveNext_m26605_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2179  ShimEnumerator_get_Entry_m26606_gshared (ShimEnumerator_t3954 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26606(__this, method) (( DictionaryEntry_t2179  (*) (ShimEnumerator_t3954 *, const MethodInfo*))ShimEnumerator_get_Entry_m26606_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26607_gshared (ShimEnumerator_t3954 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26607(__this, method) (( Object_t * (*) (ShimEnumerator_t3954 *, const MethodInfo*))ShimEnumerator_get_Key_m26607_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26608_gshared (ShimEnumerator_t3954 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26608(__this, method) (( Object_t * (*) (ShimEnumerator_t3954 *, const MethodInfo*))ShimEnumerator_get_Value_m26608_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26609_gshared (ShimEnumerator_t3954 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26609(__this, method) (( Object_t * (*) (ShimEnumerator_t3954 *, const MethodInfo*))ShimEnumerator_get_Current_m26609_gshared)(__this, method)
