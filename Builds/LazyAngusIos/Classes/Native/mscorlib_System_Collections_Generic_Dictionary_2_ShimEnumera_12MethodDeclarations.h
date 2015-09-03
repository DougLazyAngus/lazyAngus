#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t9098;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9089;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m67015_gshared (ShimEnumerator_t9098 * __this, Dictionary_2_t9089 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m67015(__this, ___host, method) (( void (*) (ShimEnumerator_t9098 *, Dictionary_2_t9089 *, const MethodInfo*))ShimEnumerator__ctor_m67015_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m67016_gshared (ShimEnumerator_t9098 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m67016(__this, method) (( bool (*) (ShimEnumerator_t9098 *, const MethodInfo*))ShimEnumerator_MoveNext_m67016_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m67017_gshared (ShimEnumerator_t9098 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m67017(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t9098 *, const MethodInfo*))ShimEnumerator_get_Entry_m67017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m67018_gshared (ShimEnumerator_t9098 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m67018(__this, method) (( Object_t * (*) (ShimEnumerator_t9098 *, const MethodInfo*))ShimEnumerator_get_Key_m67018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m67019_gshared (ShimEnumerator_t9098 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m67019(__this, method) (( Object_t * (*) (ShimEnumerator_t9098 *, const MethodInfo*))ShimEnumerator_get_Value_m67019_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m67020_gshared (ShimEnumerator_t9098 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m67020(__this, method) (( Object_t * (*) (ShimEnumerator_t9098 *, const MethodInfo*))ShimEnumerator_get_Current_m67020_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m67021_gshared (ShimEnumerator_t9098 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m67021(__this, method) (( void (*) (ShimEnumerator_t9098 *, const MethodInfo*))ShimEnumerator_Reset_m67021_gshared)(__this, method)
