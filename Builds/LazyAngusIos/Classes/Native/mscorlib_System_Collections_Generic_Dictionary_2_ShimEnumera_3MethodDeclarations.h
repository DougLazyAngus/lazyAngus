#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6774;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6765;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38101_gshared (ShimEnumerator_t6774 * __this, Dictionary_2_t6765 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m38101(__this, ___host, method) (( void (*) (ShimEnumerator_t6774 *, Dictionary_2_t6765 *, const MethodInfo*))ShimEnumerator__ctor_m38101_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38102_gshared (ShimEnumerator_t6774 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m38102(__this, method) (( bool (*) (ShimEnumerator_t6774 *, const MethodInfo*))ShimEnumerator_MoveNext_m38102_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m38103_gshared (ShimEnumerator_t6774 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m38103(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t6774 *, const MethodInfo*))ShimEnumerator_get_Entry_m38103_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38104_gshared (ShimEnumerator_t6774 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m38104(__this, method) (( Object_t * (*) (ShimEnumerator_t6774 *, const MethodInfo*))ShimEnumerator_get_Key_m38104_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38105_gshared (ShimEnumerator_t6774 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m38105(__this, method) (( Object_t * (*) (ShimEnumerator_t6774 *, const MethodInfo*))ShimEnumerator_get_Value_m38105_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m38106_gshared (ShimEnumerator_t6774 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m38106(__this, method) (( Object_t * (*) (ShimEnumerator_t6774 *, const MethodInfo*))ShimEnumerator_get_Current_m38106_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m38107_gshared (ShimEnumerator_t6774 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m38107(__this, method) (( void (*) (ShimEnumerator_t6774 *, const MethodInfo*))ShimEnumerator_Reset_m38107_gshared)(__this, method)
