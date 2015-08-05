#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t5365;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2804;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21054_gshared (ShimEnumerator_t5365 * __this, Dictionary_2_t2804 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21054(__this, ___host, method) (( void (*) (ShimEnumerator_t5365 *, Dictionary_2_t2804 *, const MethodInfo*))ShimEnumerator__ctor_m21054_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21055_gshared (ShimEnumerator_t5365 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21055(__this, method) (( bool (*) (ShimEnumerator_t5365 *, const MethodInfo*))ShimEnumerator_MoveNext_m21055_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2089  ShimEnumerator_get_Entry_m21056_gshared (ShimEnumerator_t5365 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21056(__this, method) (( DictionaryEntry_t2089  (*) (ShimEnumerator_t5365 *, const MethodInfo*))ShimEnumerator_get_Entry_m21056_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21057_gshared (ShimEnumerator_t5365 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21057(__this, method) (( Object_t * (*) (ShimEnumerator_t5365 *, const MethodInfo*))ShimEnumerator_get_Key_m21057_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21058_gshared (ShimEnumerator_t5365 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21058(__this, method) (( Object_t * (*) (ShimEnumerator_t5365 *, const MethodInfo*))ShimEnumerator_get_Value_m21058_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21059_gshared (ShimEnumerator_t5365 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21059(__this, method) (( Object_t * (*) (ShimEnumerator_t5365 *, const MethodInfo*))ShimEnumerator_get_Current_m21059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21060_gshared (ShimEnumerator_t5365 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21060(__this, method) (( void (*) (ShimEnumerator_t5365 *, const MethodInfo*))ShimEnumerator_Reset_m21060_gshared)(__this, method)
