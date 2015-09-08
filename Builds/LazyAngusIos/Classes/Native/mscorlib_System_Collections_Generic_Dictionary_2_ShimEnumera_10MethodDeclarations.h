#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t9032;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t9023;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m65956_gshared (ShimEnumerator_t9032 * __this, Dictionary_2_t9023 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m65956(__this, ___host, method) (( void (*) (ShimEnumerator_t9032 *, Dictionary_2_t9023 *, const MethodInfo*))ShimEnumerator__ctor_m65956_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m65957_gshared (ShimEnumerator_t9032 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m65957(__this, method) (( bool (*) (ShimEnumerator_t9032 *, const MethodInfo*))ShimEnumerator_MoveNext_m65957_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m65958_gshared (ShimEnumerator_t9032 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m65958(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t9032 *, const MethodInfo*))ShimEnumerator_get_Entry_m65958_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m65959_gshared (ShimEnumerator_t9032 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m65959(__this, method) (( Object_t * (*) (ShimEnumerator_t9032 *, const MethodInfo*))ShimEnumerator_get_Key_m65959_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m65960_gshared (ShimEnumerator_t9032 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m65960(__this, method) (( Object_t * (*) (ShimEnumerator_t9032 *, const MethodInfo*))ShimEnumerator_get_Value_m65960_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m65961_gshared (ShimEnumerator_t9032 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m65961(__this, method) (( Object_t * (*) (ShimEnumerator_t9032 *, const MethodInfo*))ShimEnumerator_get_Current_m65961_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m65962_gshared (ShimEnumerator_t9032 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m65962(__this, method) (( void (*) (ShimEnumerator_t9032 *, const MethodInfo*))ShimEnumerator_Reset_m65962_gshared)(__this, method)
