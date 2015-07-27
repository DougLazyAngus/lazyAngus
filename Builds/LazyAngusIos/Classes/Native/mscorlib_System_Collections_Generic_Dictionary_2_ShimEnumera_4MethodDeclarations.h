#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t4038;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t4029;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27685_gshared (ShimEnumerator_t4038 * __this, Dictionary_2_t4029 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27685(__this, ___host, method) (( void (*) (ShimEnumerator_t4038 *, Dictionary_2_t4029 *, const MethodInfo*))ShimEnumerator__ctor_m27685_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27686_gshared (ShimEnumerator_t4038 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27686(__this, method) (( bool (*) (ShimEnumerator_t4038 *, const MethodInfo*))ShimEnumerator_MoveNext_m27686_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2181  ShimEnumerator_get_Entry_m27687_gshared (ShimEnumerator_t4038 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27687(__this, method) (( DictionaryEntry_t2181  (*) (ShimEnumerator_t4038 *, const MethodInfo*))ShimEnumerator_get_Entry_m27687_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27688_gshared (ShimEnumerator_t4038 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27688(__this, method) (( Object_t * (*) (ShimEnumerator_t4038 *, const MethodInfo*))ShimEnumerator_get_Key_m27688_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27689_gshared (ShimEnumerator_t4038 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27689(__this, method) (( Object_t * (*) (ShimEnumerator_t4038 *, const MethodInfo*))ShimEnumerator_get_Value_m27689_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27690_gshared (ShimEnumerator_t4038 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27690(__this, method) (( Object_t * (*) (ShimEnumerator_t4038 *, const MethodInfo*))ShimEnumerator_get_Current_m27690_gshared)(__this, method)
