#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t8531;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8522;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m62376_gshared (ShimEnumerator_t8531 * __this, Dictionary_2_t8522 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m62376(__this, ___host, method) (( void (*) (ShimEnumerator_t8531 *, Dictionary_2_t8522 *, const MethodInfo*))ShimEnumerator__ctor_m62376_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m62377_gshared (ShimEnumerator_t8531 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m62377(__this, method) (( bool (*) (ShimEnumerator_t8531 *, const MethodInfo*))ShimEnumerator_MoveNext_m62377_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m62378_gshared (ShimEnumerator_t8531 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m62378(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t8531 *, const MethodInfo*))ShimEnumerator_get_Entry_m62378_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m62379_gshared (ShimEnumerator_t8531 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m62379(__this, method) (( Object_t * (*) (ShimEnumerator_t8531 *, const MethodInfo*))ShimEnumerator_get_Key_m62379_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m62380_gshared (ShimEnumerator_t8531 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m62380(__this, method) (( Object_t * (*) (ShimEnumerator_t8531 *, const MethodInfo*))ShimEnumerator_get_Value_m62380_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m62381_gshared (ShimEnumerator_t8531 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m62381(__this, method) (( Object_t * (*) (ShimEnumerator_t8531 *, const MethodInfo*))ShimEnumerator_get_Current_m62381_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m62382_gshared (ShimEnumerator_t8531 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m62382(__this, method) (( void (*) (ShimEnumerator_t8531 *, const MethodInfo*))ShimEnumerator_Reset_m62382_gshared)(__this, method)
