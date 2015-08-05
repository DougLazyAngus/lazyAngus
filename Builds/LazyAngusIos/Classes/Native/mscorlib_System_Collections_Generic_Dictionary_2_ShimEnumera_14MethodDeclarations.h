#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t8583;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4080;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m63252_gshared (ShimEnumerator_t8583 * __this, Dictionary_2_t4080 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m63252(__this, ___host, method) (( void (*) (ShimEnumerator_t8583 *, Dictionary_2_t4080 *, const MethodInfo*))ShimEnumerator__ctor_m63252_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m63253_gshared (ShimEnumerator_t8583 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m63253(__this, method) (( bool (*) (ShimEnumerator_t8583 *, const MethodInfo*))ShimEnumerator_MoveNext_m63253_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m63254_gshared (ShimEnumerator_t8583 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m63254(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t8583 *, const MethodInfo*))ShimEnumerator_get_Entry_m63254_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m63255_gshared (ShimEnumerator_t8583 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m63255(__this, method) (( Object_t * (*) (ShimEnumerator_t8583 *, const MethodInfo*))ShimEnumerator_get_Key_m63255_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m63256_gshared (ShimEnumerator_t8583 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m63256(__this, method) (( Object_t * (*) (ShimEnumerator_t8583 *, const MethodInfo*))ShimEnumerator_get_Value_m63256_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m63257_gshared (ShimEnumerator_t8583 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m63257(__this, method) (( Object_t * (*) (ShimEnumerator_t8583 *, const MethodInfo*))ShimEnumerator_get_Current_m63257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m63258_gshared (ShimEnumerator_t8583 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m63258(__this, method) (( void (*) (ShimEnumerator_t8583 *, const MethodInfo*))ShimEnumerator_Reset_m63258_gshared)(__this, method)
