#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t3962;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3953;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26611_gshared (ShimEnumerator_t3962 * __this, Dictionary_2_t3953 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26611(__this, ___host, method) (( void (*) (ShimEnumerator_t3962 *, Dictionary_2_t3953 *, const MethodInfo*))ShimEnumerator__ctor_m26611_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26612_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26612(__this, method) (( bool (*) (ShimEnumerator_t3962 *, const MethodInfo*))ShimEnumerator_MoveNext_m26612_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m26613_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26613(__this, method) (( DictionaryEntry_t1710  (*) (ShimEnumerator_t3962 *, const MethodInfo*))ShimEnumerator_get_Entry_m26613_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26614_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26614(__this, method) (( Object_t * (*) (ShimEnumerator_t3962 *, const MethodInfo*))ShimEnumerator_get_Key_m26614_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26615_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26615(__this, method) (( Object_t * (*) (ShimEnumerator_t3962 *, const MethodInfo*))ShimEnumerator_get_Value_m26615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26616_gshared (ShimEnumerator_t3962 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26616(__this, method) (( Object_t * (*) (ShimEnumerator_t3962 *, const MethodInfo*))ShimEnumerator_get_Current_m26616_gshared)(__this, method)
