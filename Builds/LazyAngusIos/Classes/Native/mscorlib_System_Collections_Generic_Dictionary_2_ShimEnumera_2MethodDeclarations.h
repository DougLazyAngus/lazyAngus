#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t6586;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6577;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m35894_gshared (ShimEnumerator_t6586 * __this, Dictionary_2_t6577 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m35894(__this, ___host, method) (( void (*) (ShimEnumerator_t6586 *, Dictionary_2_t6577 *, const MethodInfo*))ShimEnumerator__ctor_m35894_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m35895_gshared (ShimEnumerator_t6586 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m35895(__this, method) (( bool (*) (ShimEnumerator_t6586 *, const MethodInfo*))ShimEnumerator_MoveNext_m35895_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m35896_gshared (ShimEnumerator_t6586 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m35896(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t6586 *, const MethodInfo*))ShimEnumerator_get_Entry_m35896_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m35897_gshared (ShimEnumerator_t6586 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m35897(__this, method) (( Object_t * (*) (ShimEnumerator_t6586 *, const MethodInfo*))ShimEnumerator_get_Key_m35897_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m35898_gshared (ShimEnumerator_t6586 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m35898(__this, method) (( Object_t * (*) (ShimEnumerator_t6586 *, const MethodInfo*))ShimEnumerator_get_Value_m35898_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m35899_gshared (ShimEnumerator_t6586 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m35899(__this, method) (( Object_t * (*) (ShimEnumerator_t6586 *, const MethodInfo*))ShimEnumerator_get_Current_m35899_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m35900_gshared (ShimEnumerator_t6586 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m35900(__this, method) (( void (*) (ShimEnumerator_t6586 *, const MethodInfo*))ShimEnumerator_Reset_m35900_gshared)(__this, method)
