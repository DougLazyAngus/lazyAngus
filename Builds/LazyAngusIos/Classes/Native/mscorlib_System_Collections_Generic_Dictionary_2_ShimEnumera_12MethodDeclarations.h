#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t8455;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8446;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61603_gshared (ShimEnumerator_t8455 * __this, Dictionary_2_t8446 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61603(__this, ___host, method) (( void (*) (ShimEnumerator_t8455 *, Dictionary_2_t8446 *, const MethodInfo*))ShimEnumerator__ctor_m61603_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61604_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61604(__this, method) (( bool (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_MoveNext_m61604_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m61605_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61605(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_get_Entry_m61605_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61606_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61606(__this, method) (( Object_t * (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_get_Key_m61606_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61607_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61607(__this, method) (( Object_t * (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_get_Value_m61607_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61608_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61608(__this, method) (( Object_t * (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_get_Current_m61608_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m61609_gshared (ShimEnumerator_t8455 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61609(__this, method) (( void (*) (ShimEnumerator_t8455 *, const MethodInfo*))ShimEnumerator_Reset_m61609_gshared)(__this, method)
