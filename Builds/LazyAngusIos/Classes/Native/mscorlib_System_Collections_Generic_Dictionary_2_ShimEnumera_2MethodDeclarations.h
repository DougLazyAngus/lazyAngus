#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t6024;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6015;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m31332_gshared (ShimEnumerator_t6024 * __this, Dictionary_2_t6015 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m31332(__this, ___host, method) (( void (*) (ShimEnumerator_t6024 *, Dictionary_2_t6015 *, const MethodInfo*))ShimEnumerator__ctor_m31332_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m31333_gshared (ShimEnumerator_t6024 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m31333(__this, method) (( bool (*) (ShimEnumerator_t6024 *, const MethodInfo*))ShimEnumerator_MoveNext_m31333_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m31334_gshared (ShimEnumerator_t6024 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m31334(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t6024 *, const MethodInfo*))ShimEnumerator_get_Entry_m31334_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m31335_gshared (ShimEnumerator_t6024 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m31335(__this, method) (( Object_t * (*) (ShimEnumerator_t6024 *, const MethodInfo*))ShimEnumerator_get_Key_m31335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m31336_gshared (ShimEnumerator_t6024 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m31336(__this, method) (( Object_t * (*) (ShimEnumerator_t6024 *, const MethodInfo*))ShimEnumerator_get_Value_m31336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m31337_gshared (ShimEnumerator_t6024 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m31337(__this, method) (( Object_t * (*) (ShimEnumerator_t6024 *, const MethodInfo*))ShimEnumerator_get_Current_m31337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m31338_gshared (ShimEnumerator_t6024 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m31338(__this, method) (( void (*) (ShimEnumerator_t6024 *, const MethodInfo*))ShimEnumerator_Reset_m31338_gshared)(__this, method)
