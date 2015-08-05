#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t8456;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8447;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61610_gshared (ShimEnumerator_t8456 * __this, Dictionary_2_t8447 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61610(__this, ___host, method) (( void (*) (ShimEnumerator_t8456 *, Dictionary_2_t8447 *, const MethodInfo*))ShimEnumerator__ctor_m61610_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61611_gshared (ShimEnumerator_t8456 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61611(__this, method) (( bool (*) (ShimEnumerator_t8456 *, const MethodInfo*))ShimEnumerator_MoveNext_m61611_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2089  ShimEnumerator_get_Entry_m61612_gshared (ShimEnumerator_t8456 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61612(__this, method) (( DictionaryEntry_t2089  (*) (ShimEnumerator_t8456 *, const MethodInfo*))ShimEnumerator_get_Entry_m61612_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61613_gshared (ShimEnumerator_t8456 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61613(__this, method) (( Object_t * (*) (ShimEnumerator_t8456 *, const MethodInfo*))ShimEnumerator_get_Key_m61613_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61614_gshared (ShimEnumerator_t8456 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61614(__this, method) (( Object_t * (*) (ShimEnumerator_t8456 *, const MethodInfo*))ShimEnumerator_get_Value_m61614_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61615_gshared (ShimEnumerator_t8456 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61615(__this, method) (( Object_t * (*) (ShimEnumerator_t8456 *, const MethodInfo*))ShimEnumerator_get_Current_m61615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m61616_gshared (ShimEnumerator_t8456 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61616(__this, method) (( void (*) (ShimEnumerator_t8456 *, const MethodInfo*))ShimEnumerator_Reset_m61616_gshared)(__this, method)
