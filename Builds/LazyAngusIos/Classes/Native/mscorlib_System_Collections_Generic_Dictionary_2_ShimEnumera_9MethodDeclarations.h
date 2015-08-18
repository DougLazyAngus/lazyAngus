#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t8349;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8340;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m59781_gshared (ShimEnumerator_t8349 * __this, Dictionary_2_t8340 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m59781(__this, ___host, method) (( void (*) (ShimEnumerator_t8349 *, Dictionary_2_t8340 *, const MethodInfo*))ShimEnumerator__ctor_m59781_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m59782_gshared (ShimEnumerator_t8349 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m59782(__this, method) (( bool (*) (ShimEnumerator_t8349 *, const MethodInfo*))ShimEnumerator_MoveNext_m59782_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m59783_gshared (ShimEnumerator_t8349 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m59783(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t8349 *, const MethodInfo*))ShimEnumerator_get_Entry_m59783_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m59784_gshared (ShimEnumerator_t8349 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m59784(__this, method) (( Object_t * (*) (ShimEnumerator_t8349 *, const MethodInfo*))ShimEnumerator_get_Key_m59784_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m59785_gshared (ShimEnumerator_t8349 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m59785(__this, method) (( Object_t * (*) (ShimEnumerator_t8349 *, const MethodInfo*))ShimEnumerator_get_Value_m59785_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m59786_gshared (ShimEnumerator_t8349 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m59786(__this, method) (( Object_t * (*) (ShimEnumerator_t8349 *, const MethodInfo*))ShimEnumerator_get_Current_m59786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m59787_gshared (ShimEnumerator_t8349 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m59787(__this, method) (( void (*) (ShimEnumerator_t8349 *, const MethodInfo*))ShimEnumerator_Reset_m59787_gshared)(__this, method)
