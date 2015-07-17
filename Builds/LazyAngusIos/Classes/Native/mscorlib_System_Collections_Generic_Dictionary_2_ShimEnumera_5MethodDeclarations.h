#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4140;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4129;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m28813_gshared (ShimEnumerator_t4140 * __this, Dictionary_2_t4129 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m28813(__this, ___host, method) (( void (*) (ShimEnumerator_t4140 *, Dictionary_2_t4129 *, const MethodInfo*))ShimEnumerator__ctor_m28813_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m28814_gshared (ShimEnumerator_t4140 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m28814(__this, method) (( bool (*) (ShimEnumerator_t4140 *, const MethodInfo*))ShimEnumerator_MoveNext_m28814_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2179  ShimEnumerator_get_Entry_m28815_gshared (ShimEnumerator_t4140 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m28815(__this, method) (( DictionaryEntry_t2179  (*) (ShimEnumerator_t4140 *, const MethodInfo*))ShimEnumerator_get_Entry_m28815_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m28816_gshared (ShimEnumerator_t4140 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m28816(__this, method) (( Object_t * (*) (ShimEnumerator_t4140 *, const MethodInfo*))ShimEnumerator_get_Key_m28816_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m28817_gshared (ShimEnumerator_t4140 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m28817(__this, method) (( Object_t * (*) (ShimEnumerator_t4140 *, const MethodInfo*))ShimEnumerator_get_Value_m28817_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m28818_gshared (ShimEnumerator_t4140 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m28818(__this, method) (( Object_t * (*) (ShimEnumerator_t4140 *, const MethodInfo*))ShimEnumerator_get_Current_m28818_gshared)(__this, method)
