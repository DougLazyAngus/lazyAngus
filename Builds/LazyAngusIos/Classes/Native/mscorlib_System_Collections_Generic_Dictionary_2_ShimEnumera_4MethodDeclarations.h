#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t4037;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t4028;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27682_gshared (ShimEnumerator_t4037 * __this, Dictionary_2_t4028 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27682(__this, ___host, method) (( void (*) (ShimEnumerator_t4037 *, Dictionary_2_t4028 *, const MethodInfo*))ShimEnumerator__ctor_m27682_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27683_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27683(__this, method) (( bool (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_MoveNext_m27683_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2180  ShimEnumerator_get_Entry_m27684_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27684(__this, method) (( DictionaryEntry_t2180  (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_get_Entry_m27684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27685_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27685(__this, method) (( Object_t * (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_get_Key_m27685_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27686_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27686(__this, method) (( Object_t * (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_get_Value_m27686_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27687_gshared (ShimEnumerator_t4037 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27687(__this, method) (( Object_t * (*) (ShimEnumerator_t4037 *, const MethodInfo*))ShimEnumerator_get_Current_m27687_gshared)(__this, method)
