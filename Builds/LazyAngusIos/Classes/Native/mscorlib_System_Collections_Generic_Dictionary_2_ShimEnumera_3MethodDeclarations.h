#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6129;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6120;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32706_gshared (ShimEnumerator_t6129 * __this, Dictionary_2_t6120 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m32706(__this, ___host, method) (( void (*) (ShimEnumerator_t6129 *, Dictionary_2_t6120 *, const MethodInfo*))ShimEnumerator__ctor_m32706_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32707_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m32707(__this, method) (( bool (*) (ShimEnumerator_t6129 *, const MethodInfo*))ShimEnumerator_MoveNext_m32707_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m32708_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m32708(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t6129 *, const MethodInfo*))ShimEnumerator_get_Entry_m32708_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32709_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m32709(__this, method) (( Object_t * (*) (ShimEnumerator_t6129 *, const MethodInfo*))ShimEnumerator_get_Key_m32709_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32710_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m32710(__this, method) (( Object_t * (*) (ShimEnumerator_t6129 *, const MethodInfo*))ShimEnumerator_get_Value_m32710_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m32711_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m32711(__this, method) (( Object_t * (*) (ShimEnumerator_t6129 *, const MethodInfo*))ShimEnumerator_get_Current_m32711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m32712_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m32712(__this, method) (( void (*) (ShimEnumerator_t6129 *, const MethodInfo*))ShimEnumerator_Reset_m32712_gshared)(__this, method)
