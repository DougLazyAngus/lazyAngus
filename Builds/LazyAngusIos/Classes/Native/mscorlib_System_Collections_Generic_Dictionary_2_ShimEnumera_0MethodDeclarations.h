#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5400;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1434;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21700_gshared (ShimEnumerator_t5400 * __this, Dictionary_2_t1434 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21700(__this, ___host, method) (( void (*) (ShimEnumerator_t5400 *, Dictionary_2_t1434 *, const MethodInfo*))ShimEnumerator__ctor_m21700_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21701_gshared (ShimEnumerator_t5400 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21701(__this, method) (( bool (*) (ShimEnumerator_t5400 *, const MethodInfo*))ShimEnumerator_MoveNext_m21701_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m21702_gshared (ShimEnumerator_t5400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21702(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t5400 *, const MethodInfo*))ShimEnumerator_get_Entry_m21702_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21703_gshared (ShimEnumerator_t5400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21703(__this, method) (( Object_t * (*) (ShimEnumerator_t5400 *, const MethodInfo*))ShimEnumerator_get_Key_m21703_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21704_gshared (ShimEnumerator_t5400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21704(__this, method) (( Object_t * (*) (ShimEnumerator_t5400 *, const MethodInfo*))ShimEnumerator_get_Value_m21704_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21705_gshared (ShimEnumerator_t5400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21705(__this, method) (( Object_t * (*) (ShimEnumerator_t5400 *, const MethodInfo*))ShimEnumerator_get_Current_m21705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21706_gshared (ShimEnumerator_t5400 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21706(__this, method) (( void (*) (ShimEnumerator_t5400 *, const MethodInfo*))ShimEnumerator_Reset_m21706_gshared)(__this, method)
