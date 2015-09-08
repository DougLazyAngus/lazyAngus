#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t9099;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9090;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m67028_gshared (ShimEnumerator_t9099 * __this, Dictionary_2_t9090 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m67028(__this, ___host, method) (( void (*) (ShimEnumerator_t9099 *, Dictionary_2_t9090 *, const MethodInfo*))ShimEnumerator__ctor_m67028_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m67029_gshared (ShimEnumerator_t9099 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m67029(__this, method) (( bool (*) (ShimEnumerator_t9099 *, const MethodInfo*))ShimEnumerator_MoveNext_m67029_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m67030_gshared (ShimEnumerator_t9099 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m67030(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t9099 *, const MethodInfo*))ShimEnumerator_get_Entry_m67030_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m67031_gshared (ShimEnumerator_t9099 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m67031(__this, method) (( Object_t * (*) (ShimEnumerator_t9099 *, const MethodInfo*))ShimEnumerator_get_Key_m67031_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m67032_gshared (ShimEnumerator_t9099 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m67032(__this, method) (( Object_t * (*) (ShimEnumerator_t9099 *, const MethodInfo*))ShimEnumerator_get_Value_m67032_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m67033_gshared (ShimEnumerator_t9099 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m67033(__this, method) (( Object_t * (*) (ShimEnumerator_t9099 *, const MethodInfo*))ShimEnumerator_get_Current_m67033_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m67034_gshared (ShimEnumerator_t9099 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m67034(__this, method) (( void (*) (ShimEnumerator_t9099 *, const MethodInfo*))ShimEnumerator_Reset_m67034_gshared)(__this, method)
