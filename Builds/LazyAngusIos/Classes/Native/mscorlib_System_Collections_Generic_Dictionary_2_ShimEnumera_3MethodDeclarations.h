#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6125;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6116;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32678_gshared (ShimEnumerator_t6125 * __this, Dictionary_2_t6116 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m32678(__this, ___host, method) (( void (*) (ShimEnumerator_t6125 *, Dictionary_2_t6116 *, const MethodInfo*))ShimEnumerator__ctor_m32678_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32679_gshared (ShimEnumerator_t6125 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m32679(__this, method) (( bool (*) (ShimEnumerator_t6125 *, const MethodInfo*))ShimEnumerator_MoveNext_m32679_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m32680_gshared (ShimEnumerator_t6125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m32680(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t6125 *, const MethodInfo*))ShimEnumerator_get_Entry_m32680_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32681_gshared (ShimEnumerator_t6125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m32681(__this, method) (( Object_t * (*) (ShimEnumerator_t6125 *, const MethodInfo*))ShimEnumerator_get_Key_m32681_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32682_gshared (ShimEnumerator_t6125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m32682(__this, method) (( Object_t * (*) (ShimEnumerator_t6125 *, const MethodInfo*))ShimEnumerator_get_Value_m32682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m32683_gshared (ShimEnumerator_t6125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m32683(__this, method) (( Object_t * (*) (ShimEnumerator_t6125 *, const MethodInfo*))ShimEnumerator_get_Current_m32683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m32684_gshared (ShimEnumerator_t6125 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m32684(__this, method) (( void (*) (ShimEnumerator_t6125 *, const MethodInfo*))ShimEnumerator_Reset_m32684_gshared)(__this, method)
