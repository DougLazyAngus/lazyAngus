#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t6096;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6085;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m28301_gshared (ShimEnumerator_t6096 * __this, Dictionary_2_t6085 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m28301(__this, ___host, method) (( void (*) (ShimEnumerator_t6096 *, Dictionary_2_t6085 *, const MethodInfo*))ShimEnumerator__ctor_m28301_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m28302_gshared (ShimEnumerator_t6096 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m28302(__this, method) (( bool (*) (ShimEnumerator_t6096 *, const MethodInfo*))ShimEnumerator_MoveNext_m28302_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m28303_gshared (ShimEnumerator_t6096 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m28303(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t6096 *, const MethodInfo*))ShimEnumerator_get_Entry_m28303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m28304_gshared (ShimEnumerator_t6096 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m28304(__this, method) (( Object_t * (*) (ShimEnumerator_t6096 *, const MethodInfo*))ShimEnumerator_get_Key_m28304_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m28305_gshared (ShimEnumerator_t6096 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m28305(__this, method) (( Object_t * (*) (ShimEnumerator_t6096 *, const MethodInfo*))ShimEnumerator_get_Value_m28305_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m28306_gshared (ShimEnumerator_t6096 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m28306(__this, method) (( Object_t * (*) (ShimEnumerator_t6096 *, const MethodInfo*))ShimEnumerator_get_Current_m28306_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m28307_gshared (ShimEnumerator_t6096 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m28307(__this, method) (( void (*) (ShimEnumerator_t6096 *, const MethodInfo*))ShimEnumerator_Reset_m28307_gshared)(__this, method)
