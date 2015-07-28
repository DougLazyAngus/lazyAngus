#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t8406;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8395;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m60906_gshared (ShimEnumerator_t8406 * __this, Dictionary_2_t8395 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m60906(__this, ___host, method) (( void (*) (ShimEnumerator_t8406 *, Dictionary_2_t8395 *, const MethodInfo*))ShimEnumerator__ctor_m60906_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m60907_gshared (ShimEnumerator_t8406 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m60907(__this, method) (( bool (*) (ShimEnumerator_t8406 *, const MethodInfo*))ShimEnumerator_MoveNext_m60907_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2079  ShimEnumerator_get_Entry_m60908_gshared (ShimEnumerator_t8406 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m60908(__this, method) (( DictionaryEntry_t2079  (*) (ShimEnumerator_t8406 *, const MethodInfo*))ShimEnumerator_get_Entry_m60908_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m60909_gshared (ShimEnumerator_t8406 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m60909(__this, method) (( Object_t * (*) (ShimEnumerator_t8406 *, const MethodInfo*))ShimEnumerator_get_Key_m60909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m60910_gshared (ShimEnumerator_t8406 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m60910(__this, method) (( Object_t * (*) (ShimEnumerator_t8406 *, const MethodInfo*))ShimEnumerator_get_Value_m60910_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m60911_gshared (ShimEnumerator_t8406 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m60911(__this, method) (( Object_t * (*) (ShimEnumerator_t8406 *, const MethodInfo*))ShimEnumerator_get_Current_m60911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m60912_gshared (ShimEnumerator_t8406 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m60912(__this, method) (( void (*) (ShimEnumerator_t8406 *, const MethodInfo*))ShimEnumerator_Reset_m60912_gshared)(__this, method)
