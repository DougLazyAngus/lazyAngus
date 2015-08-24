#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t8356;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8347;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m59905_gshared (ShimEnumerator_t8356 * __this, Dictionary_2_t8347 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m59905(__this, ___host, method) (( void (*) (ShimEnumerator_t8356 *, Dictionary_2_t8347 *, const MethodInfo*))ShimEnumerator__ctor_m59905_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m59906_gshared (ShimEnumerator_t8356 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m59906(__this, method) (( bool (*) (ShimEnumerator_t8356 *, const MethodInfo*))ShimEnumerator_MoveNext_m59906_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m59907_gshared (ShimEnumerator_t8356 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m59907(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t8356 *, const MethodInfo*))ShimEnumerator_get_Entry_m59907_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m59908_gshared (ShimEnumerator_t8356 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m59908(__this, method) (( Object_t * (*) (ShimEnumerator_t8356 *, const MethodInfo*))ShimEnumerator_get_Key_m59908_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m59909_gshared (ShimEnumerator_t8356 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m59909(__this, method) (( Object_t * (*) (ShimEnumerator_t8356 *, const MethodInfo*))ShimEnumerator_get_Value_m59909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m59910_gshared (ShimEnumerator_t8356 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m59910(__this, method) (( Object_t * (*) (ShimEnumerator_t8356 *, const MethodInfo*))ShimEnumerator_get_Current_m59910_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m59911_gshared (ShimEnumerator_t8356 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m59911(__this, method) (( void (*) (ShimEnumerator_t8356 *, const MethodInfo*))ShimEnumerator_Reset_m59911_gshared)(__this, method)
