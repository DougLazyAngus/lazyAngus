#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5402;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1436;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21716_gshared (ShimEnumerator_t5402 * __this, Dictionary_2_t1436 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21716(__this, ___host, method) (( void (*) (ShimEnumerator_t5402 *, Dictionary_2_t1436 *, const MethodInfo*))ShimEnumerator__ctor_m21716_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21717_gshared (ShimEnumerator_t5402 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21717(__this, method) (( bool (*) (ShimEnumerator_t5402 *, const MethodInfo*))ShimEnumerator_MoveNext_m21717_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m21718_gshared (ShimEnumerator_t5402 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21718(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t5402 *, const MethodInfo*))ShimEnumerator_get_Entry_m21718_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21719_gshared (ShimEnumerator_t5402 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21719(__this, method) (( Object_t * (*) (ShimEnumerator_t5402 *, const MethodInfo*))ShimEnumerator_get_Key_m21719_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21720_gshared (ShimEnumerator_t5402 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21720(__this, method) (( Object_t * (*) (ShimEnumerator_t5402 *, const MethodInfo*))ShimEnumerator_get_Value_m21720_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21721_gshared (ShimEnumerator_t5402 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21721(__this, method) (( Object_t * (*) (ShimEnumerator_t5402 *, const MethodInfo*))ShimEnumerator_get_Current_m21721_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21722_gshared (ShimEnumerator_t5402 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21722(__this, method) (( void (*) (ShimEnumerator_t5402 *, const MethodInfo*))ShimEnumerator_Reset_m21722_gshared)(__this, method)
