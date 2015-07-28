#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6118;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6109;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32631_gshared (ShimEnumerator_t6118 * __this, Dictionary_2_t6109 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m32631(__this, ___host, method) (( void (*) (ShimEnumerator_t6118 *, Dictionary_2_t6109 *, const MethodInfo*))ShimEnumerator__ctor_m32631_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32632_gshared (ShimEnumerator_t6118 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m32632(__this, method) (( bool (*) (ShimEnumerator_t6118 *, const MethodInfo*))ShimEnumerator_MoveNext_m32632_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2080  ShimEnumerator_get_Entry_m32633_gshared (ShimEnumerator_t6118 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m32633(__this, method) (( DictionaryEntry_t2080  (*) (ShimEnumerator_t6118 *, const MethodInfo*))ShimEnumerator_get_Entry_m32633_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32634_gshared (ShimEnumerator_t6118 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m32634(__this, method) (( Object_t * (*) (ShimEnumerator_t6118 *, const MethodInfo*))ShimEnumerator_get_Key_m32634_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32635_gshared (ShimEnumerator_t6118 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m32635(__this, method) (( Object_t * (*) (ShimEnumerator_t6118 *, const MethodInfo*))ShimEnumerator_get_Value_m32635_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m32636_gshared (ShimEnumerator_t6118 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m32636(__this, method) (( Object_t * (*) (ShimEnumerator_t6118 *, const MethodInfo*))ShimEnumerator_get_Current_m32636_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m32637_gshared (ShimEnumerator_t6118 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m32637(__this, method) (( void (*) (ShimEnumerator_t6118 *, const MethodInfo*))ShimEnumerator_Reset_m32637_gshared)(__this, method)
