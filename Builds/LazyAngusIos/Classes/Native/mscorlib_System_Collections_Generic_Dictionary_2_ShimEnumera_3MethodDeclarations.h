#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6759;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38076_gshared (ShimEnumerator_t6768 * __this, Dictionary_2_t6759 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m38076(__this, ___host, method) (( void (*) (ShimEnumerator_t6768 *, Dictionary_2_t6759 *, const MethodInfo*))ShimEnumerator__ctor_m38076_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38077_gshared (ShimEnumerator_t6768 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m38077(__this, method) (( bool (*) (ShimEnumerator_t6768 *, const MethodInfo*))ShimEnumerator_MoveNext_m38077_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m38078_gshared (ShimEnumerator_t6768 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m38078(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t6768 *, const MethodInfo*))ShimEnumerator_get_Entry_m38078_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38079_gshared (ShimEnumerator_t6768 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m38079(__this, method) (( Object_t * (*) (ShimEnumerator_t6768 *, const MethodInfo*))ShimEnumerator_get_Key_m38079_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38080_gshared (ShimEnumerator_t6768 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m38080(__this, method) (( Object_t * (*) (ShimEnumerator_t6768 *, const MethodInfo*))ShimEnumerator_get_Value_m38080_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m38081_gshared (ShimEnumerator_t6768 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m38081(__this, method) (( Object_t * (*) (ShimEnumerator_t6768 *, const MethodInfo*))ShimEnumerator_get_Current_m38081_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m38082_gshared (ShimEnumerator_t6768 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m38082(__this, method) (( void (*) (ShimEnumerator_t6768 *, const MethodInfo*))ShimEnumerator_Reset_m38082_gshared)(__this, method)
