#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3955;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3943;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26612_gshared (ShimEnumerator_t3955 * __this, Dictionary_2_t3943 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26612(__this, ___host, method) (( void (*) (ShimEnumerator_t3955 *, Dictionary_2_t3943 *, const MethodInfo*))ShimEnumerator__ctor_m26612_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26613_gshared (ShimEnumerator_t3955 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26613(__this, method) (( bool (*) (ShimEnumerator_t3955 *, const MethodInfo*))ShimEnumerator_MoveNext_m26613_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2180  ShimEnumerator_get_Entry_m26614_gshared (ShimEnumerator_t3955 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26614(__this, method) (( DictionaryEntry_t2180  (*) (ShimEnumerator_t3955 *, const MethodInfo*))ShimEnumerator_get_Entry_m26614_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26615_gshared (ShimEnumerator_t3955 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26615(__this, method) (( Object_t * (*) (ShimEnumerator_t3955 *, const MethodInfo*))ShimEnumerator_get_Key_m26615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26616_gshared (ShimEnumerator_t3955 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26616(__this, method) (( Object_t * (*) (ShimEnumerator_t3955 *, const MethodInfo*))ShimEnumerator_get_Value_m26616_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26617_gshared (ShimEnumerator_t3955 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26617(__this, method) (( Object_t * (*) (ShimEnumerator_t3955 *, const MethodInfo*))ShimEnumerator_get_Current_m26617_gshared)(__this, method)
