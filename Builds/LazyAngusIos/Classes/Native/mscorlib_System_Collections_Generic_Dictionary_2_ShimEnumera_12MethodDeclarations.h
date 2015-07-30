#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t8453;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8444;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61587_gshared (ShimEnumerator_t8453 * __this, Dictionary_2_t8444 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61587(__this, ___host, method) (( void (*) (ShimEnumerator_t8453 *, Dictionary_2_t8444 *, const MethodInfo*))ShimEnumerator__ctor_m61587_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61588_gshared (ShimEnumerator_t8453 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61588(__this, method) (( bool (*) (ShimEnumerator_t8453 *, const MethodInfo*))ShimEnumerator_MoveNext_m61588_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m61589_gshared (ShimEnumerator_t8453 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61589(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t8453 *, const MethodInfo*))ShimEnumerator_get_Entry_m61589_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61590_gshared (ShimEnumerator_t8453 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61590(__this, method) (( Object_t * (*) (ShimEnumerator_t8453 *, const MethodInfo*))ShimEnumerator_get_Key_m61590_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61591_gshared (ShimEnumerator_t8453 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61591(__this, method) (( Object_t * (*) (ShimEnumerator_t8453 *, const MethodInfo*))ShimEnumerator_get_Value_m61591_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61592_gshared (ShimEnumerator_t8453 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61592(__this, method) (( Object_t * (*) (ShimEnumerator_t8453 *, const MethodInfo*))ShimEnumerator_get_Current_m61592_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m61593_gshared (ShimEnumerator_t8453 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61593(__this, method) (( void (*) (ShimEnumerator_t8453 *, const MethodInfo*))ShimEnumerator_Reset_m61593_gshared)(__this, method)
