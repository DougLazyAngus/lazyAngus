#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t6995;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6986;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44012_gshared (ShimEnumerator_t6995 * __this, Dictionary_2_t6986 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44012(__this, ___host, method) (( void (*) (ShimEnumerator_t6995 *, Dictionary_2_t6986 *, const MethodInfo*))ShimEnumerator__ctor_m44012_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44013_gshared (ShimEnumerator_t6995 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44013(__this, method) (( bool (*) (ShimEnumerator_t6995 *, const MethodInfo*))ShimEnumerator_MoveNext_m44013_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m44014_gshared (ShimEnumerator_t6995 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44014(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t6995 *, const MethodInfo*))ShimEnumerator_get_Entry_m44014_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44015_gshared (ShimEnumerator_t6995 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44015(__this, method) (( Object_t * (*) (ShimEnumerator_t6995 *, const MethodInfo*))ShimEnumerator_get_Key_m44015_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44016_gshared (ShimEnumerator_t6995 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44016(__this, method) (( Object_t * (*) (ShimEnumerator_t6995 *, const MethodInfo*))ShimEnumerator_get_Value_m44016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44017_gshared (ShimEnumerator_t6995 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44017(__this, method) (( Object_t * (*) (ShimEnumerator_t6995 *, const MethodInfo*))ShimEnumerator_get_Current_m44017_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m44018_gshared (ShimEnumerator_t6995 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44018(__this, method) (( void (*) (ShimEnumerator_t6995 *, const MethodInfo*))ShimEnumerator_Reset_m44018_gshared)(__this, method)
