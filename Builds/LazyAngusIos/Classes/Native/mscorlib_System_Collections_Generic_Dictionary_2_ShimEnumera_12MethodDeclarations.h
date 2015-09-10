#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t9111;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9102;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m67097_gshared (ShimEnumerator_t9111 * __this, Dictionary_2_t9102 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m67097(__this, ___host, method) (( void (*) (ShimEnumerator_t9111 *, Dictionary_2_t9102 *, const MethodInfo*))ShimEnumerator__ctor_m67097_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m67098_gshared (ShimEnumerator_t9111 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m67098(__this, method) (( bool (*) (ShimEnumerator_t9111 *, const MethodInfo*))ShimEnumerator_MoveNext_m67098_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m67099_gshared (ShimEnumerator_t9111 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m67099(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t9111 *, const MethodInfo*))ShimEnumerator_get_Entry_m67099_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m67100_gshared (ShimEnumerator_t9111 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m67100(__this, method) (( Object_t * (*) (ShimEnumerator_t9111 *, const MethodInfo*))ShimEnumerator_get_Key_m67100_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m67101_gshared (ShimEnumerator_t9111 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m67101(__this, method) (( Object_t * (*) (ShimEnumerator_t9111 *, const MethodInfo*))ShimEnumerator_get_Value_m67101_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m67102_gshared (ShimEnumerator_t9111 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m67102(__this, method) (( Object_t * (*) (ShimEnumerator_t9111 *, const MethodInfo*))ShimEnumerator_get_Current_m67102_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m67103_gshared (ShimEnumerator_t9111 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m67103(__this, method) (( void (*) (ShimEnumerator_t9111 *, const MethodInfo*))ShimEnumerator_Reset_m67103_gshared)(__this, method)
