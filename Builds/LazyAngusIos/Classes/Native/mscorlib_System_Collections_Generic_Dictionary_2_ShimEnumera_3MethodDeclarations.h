#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6199;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6190;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m33382_gshared (ShimEnumerator_t6199 * __this, Dictionary_2_t6190 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m33382(__this, ___host, method) (( void (*) (ShimEnumerator_t6199 *, Dictionary_2_t6190 *, const MethodInfo*))ShimEnumerator__ctor_m33382_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m33383_gshared (ShimEnumerator_t6199 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m33383(__this, method) (( bool (*) (ShimEnumerator_t6199 *, const MethodInfo*))ShimEnumerator_MoveNext_m33383_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m33384_gshared (ShimEnumerator_t6199 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m33384(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t6199 *, const MethodInfo*))ShimEnumerator_get_Entry_m33384_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m33385_gshared (ShimEnumerator_t6199 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m33385(__this, method) (( Object_t * (*) (ShimEnumerator_t6199 *, const MethodInfo*))ShimEnumerator_get_Key_m33385_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m33386_gshared (ShimEnumerator_t6199 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m33386(__this, method) (( Object_t * (*) (ShimEnumerator_t6199 *, const MethodInfo*))ShimEnumerator_get_Value_m33386_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m33387_gshared (ShimEnumerator_t6199 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m33387(__this, method) (( Object_t * (*) (ShimEnumerator_t6199 *, const MethodInfo*))ShimEnumerator_get_Current_m33387_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m33388_gshared (ShimEnumerator_t6199 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m33388(__this, method) (( void (*) (ShimEnumerator_t6199 *, const MethodInfo*))ShimEnumerator_Reset_m33388_gshared)(__this, method)
