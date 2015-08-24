#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t8495;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8484;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61774_gshared (ShimEnumerator_t8495 * __this, Dictionary_2_t8484 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61774(__this, ___host, method) (( void (*) (ShimEnumerator_t8495 *, Dictionary_2_t8484 *, const MethodInfo*))ShimEnumerator__ctor_m61774_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61775_gshared (ShimEnumerator_t8495 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61775(__this, method) (( bool (*) (ShimEnumerator_t8495 *, const MethodInfo*))ShimEnumerator_MoveNext_m61775_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m61776_gshared (ShimEnumerator_t8495 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61776(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t8495 *, const MethodInfo*))ShimEnumerator_get_Entry_m61776_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61777_gshared (ShimEnumerator_t8495 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61777(__this, method) (( Object_t * (*) (ShimEnumerator_t8495 *, const MethodInfo*))ShimEnumerator_get_Key_m61777_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61778_gshared (ShimEnumerator_t8495 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61778(__this, method) (( Object_t * (*) (ShimEnumerator_t8495 *, const MethodInfo*))ShimEnumerator_get_Value_m61778_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61779_gshared (ShimEnumerator_t8495 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61779(__this, method) (( Object_t * (*) (ShimEnumerator_t8495 *, const MethodInfo*))ShimEnumerator_get_Current_m61779_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m61780_gshared (ShimEnumerator_t8495 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61780(__this, method) (( void (*) (ShimEnumerator_t8495 *, const MethodInfo*))ShimEnumerator_Reset_m61780_gshared)(__this, method)
