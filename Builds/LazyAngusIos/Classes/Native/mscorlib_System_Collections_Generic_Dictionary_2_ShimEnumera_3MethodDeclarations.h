#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6206;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6197;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m33506_gshared (ShimEnumerator_t6206 * __this, Dictionary_2_t6197 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m33506(__this, ___host, method) (( void (*) (ShimEnumerator_t6206 *, Dictionary_2_t6197 *, const MethodInfo*))ShimEnumerator__ctor_m33506_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m33507_gshared (ShimEnumerator_t6206 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m33507(__this, method) (( bool (*) (ShimEnumerator_t6206 *, const MethodInfo*))ShimEnumerator_MoveNext_m33507_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m33508_gshared (ShimEnumerator_t6206 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m33508(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t6206 *, const MethodInfo*))ShimEnumerator_get_Entry_m33508_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m33509_gshared (ShimEnumerator_t6206 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m33509(__this, method) (( Object_t * (*) (ShimEnumerator_t6206 *, const MethodInfo*))ShimEnumerator_get_Key_m33509_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m33510_gshared (ShimEnumerator_t6206 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m33510(__this, method) (( Object_t * (*) (ShimEnumerator_t6206 *, const MethodInfo*))ShimEnumerator_get_Value_m33510_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m33511_gshared (ShimEnumerator_t6206 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m33511(__this, method) (( Object_t * (*) (ShimEnumerator_t6206 *, const MethodInfo*))ShimEnumerator_get_Current_m33511_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m33512_gshared (ShimEnumerator_t6206 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m33512(__this, method) (( void (*) (ShimEnumerator_t6206 *, const MethodInfo*))ShimEnumerator_Reset_m33512_gshared)(__this, method)
