#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t3960;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3951;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26586_gshared (ShimEnumerator_t3960 * __this, Dictionary_2_t3951 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26586(__this, ___host, method) (( void (*) (ShimEnumerator_t3960 *, Dictionary_2_t3951 *, const MethodInfo*))ShimEnumerator__ctor_m26586_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26587_gshared (ShimEnumerator_t3960 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26587(__this, method) (( bool (*) (ShimEnumerator_t3960 *, const MethodInfo*))ShimEnumerator_MoveNext_m26587_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1708  ShimEnumerator_get_Entry_m26588_gshared (ShimEnumerator_t3960 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26588(__this, method) (( DictionaryEntry_t1708  (*) (ShimEnumerator_t3960 *, const MethodInfo*))ShimEnumerator_get_Entry_m26588_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26589_gshared (ShimEnumerator_t3960 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26589(__this, method) (( Object_t * (*) (ShimEnumerator_t3960 *, const MethodInfo*))ShimEnumerator_get_Key_m26589_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26590_gshared (ShimEnumerator_t3960 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26590(__this, method) (( Object_t * (*) (ShimEnumerator_t3960 *, const MethodInfo*))ShimEnumerator_get_Value_m26590_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26591_gshared (ShimEnumerator_t3960 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26591(__this, method) (( Object_t * (*) (ShimEnumerator_t3960 *, const MethodInfo*))ShimEnumerator_get_Current_m26591_gshared)(__this, method)
