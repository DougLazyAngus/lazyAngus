#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3899;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3887;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25925_gshared (ShimEnumerator_t3899 * __this, Dictionary_2_t3887 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25925(__this, ___host, method) (( void (*) (ShimEnumerator_t3899 *, Dictionary_2_t3887 *, const MethodInfo*))ShimEnumerator__ctor_m25925_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25926_gshared (ShimEnumerator_t3899 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25926(__this, method) (( bool (*) (ShimEnumerator_t3899 *, const MethodInfo*))ShimEnumerator_MoveNext_m25926_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1685  ShimEnumerator_get_Entry_m25927_gshared (ShimEnumerator_t3899 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25927(__this, method) (( DictionaryEntry_t1685  (*) (ShimEnumerator_t3899 *, const MethodInfo*))ShimEnumerator_get_Entry_m25927_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25928_gshared (ShimEnumerator_t3899 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25928(__this, method) (( Object_t * (*) (ShimEnumerator_t3899 *, const MethodInfo*))ShimEnumerator_get_Key_m25928_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25929_gshared (ShimEnumerator_t3899 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25929(__this, method) (( Object_t * (*) (ShimEnumerator_t3899 *, const MethodInfo*))ShimEnumerator_get_Value_m25929_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25930_gshared (ShimEnumerator_t3899 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25930(__this, method) (( Object_t * (*) (ShimEnumerator_t3899 *, const MethodInfo*))ShimEnumerator_get_Current_m25930_gshared)(__this, method)
