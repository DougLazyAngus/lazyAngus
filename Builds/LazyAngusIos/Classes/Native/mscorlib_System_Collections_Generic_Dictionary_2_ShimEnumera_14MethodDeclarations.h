#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t8689;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4141;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m64374_gshared (ShimEnumerator_t8689 * __this, Dictionary_2_t4141 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m64374(__this, ___host, method) (( void (*) (ShimEnumerator_t8689 *, Dictionary_2_t4141 *, const MethodInfo*))ShimEnumerator__ctor_m64374_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m64375_gshared (ShimEnumerator_t8689 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m64375(__this, method) (( bool (*) (ShimEnumerator_t8689 *, const MethodInfo*))ShimEnumerator_MoveNext_m64375_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m64376_gshared (ShimEnumerator_t8689 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m64376(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t8689 *, const MethodInfo*))ShimEnumerator_get_Entry_m64376_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m64377_gshared (ShimEnumerator_t8689 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m64377(__this, method) (( Object_t * (*) (ShimEnumerator_t8689 *, const MethodInfo*))ShimEnumerator_get_Key_m64377_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m64378_gshared (ShimEnumerator_t8689 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m64378(__this, method) (( Object_t * (*) (ShimEnumerator_t8689 *, const MethodInfo*))ShimEnumerator_get_Value_m64378_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m64379_gshared (ShimEnumerator_t8689 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m64379(__this, method) (( Object_t * (*) (ShimEnumerator_t8689 *, const MethodInfo*))ShimEnumerator_get_Current_m64379_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m64380_gshared (ShimEnumerator_t8689 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m64380(__this, method) (( void (*) (ShimEnumerator_t8689 *, const MethodInfo*))ShimEnumerator_Reset_m64380_gshared)(__this, method)
