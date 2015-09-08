#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t8921;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8912;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m64513_gshared (ShimEnumerator_t8921 * __this, Dictionary_2_t8912 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m64513(__this, ___host, method) (( void (*) (ShimEnumerator_t8921 *, Dictionary_2_t8912 *, const MethodInfo*))ShimEnumerator__ctor_m64513_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m64514_gshared (ShimEnumerator_t8921 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m64514(__this, method) (( bool (*) (ShimEnumerator_t8921 *, const MethodInfo*))ShimEnumerator_MoveNext_m64514_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m64515_gshared (ShimEnumerator_t8921 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m64515(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t8921 *, const MethodInfo*))ShimEnumerator_get_Entry_m64515_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m64516_gshared (ShimEnumerator_t8921 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m64516(__this, method) (( Object_t * (*) (ShimEnumerator_t8921 *, const MethodInfo*))ShimEnumerator_get_Key_m64516_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m64517_gshared (ShimEnumerator_t8921 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m64517(__this, method) (( Object_t * (*) (ShimEnumerator_t8921 *, const MethodInfo*))ShimEnumerator_get_Value_m64517_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m64518_gshared (ShimEnumerator_t8921 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m64518(__this, method) (( Object_t * (*) (ShimEnumerator_t8921 *, const MethodInfo*))ShimEnumerator_get_Current_m64518_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m64519_gshared (ShimEnumerator_t8921 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m64519(__this, method) (( void (*) (ShimEnumerator_t8921 *, const MethodInfo*))ShimEnumerator_Reset_m64519_gshared)(__this, method)
