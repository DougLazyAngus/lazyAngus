#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t9270;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4487;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m69160_gshared (ShimEnumerator_t9270 * __this, Dictionary_2_t4487 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m69160(__this, ___host, method) (( void (*) (ShimEnumerator_t9270 *, Dictionary_2_t4487 *, const MethodInfo*))ShimEnumerator__ctor_m69160_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m69161_gshared (ShimEnumerator_t9270 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m69161(__this, method) (( bool (*) (ShimEnumerator_t9270 *, const MethodInfo*))ShimEnumerator_MoveNext_m69161_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m69162_gshared (ShimEnumerator_t9270 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m69162(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t9270 *, const MethodInfo*))ShimEnumerator_get_Entry_m69162_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m69163_gshared (ShimEnumerator_t9270 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m69163(__this, method) (( Object_t * (*) (ShimEnumerator_t9270 *, const MethodInfo*))ShimEnumerator_get_Key_m69163_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m69164_gshared (ShimEnumerator_t9270 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m69164(__this, method) (( Object_t * (*) (ShimEnumerator_t9270 *, const MethodInfo*))ShimEnumerator_get_Value_m69164_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m69165_gshared (ShimEnumerator_t9270 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m69165(__this, method) (( Object_t * (*) (ShimEnumerator_t9270 *, const MethodInfo*))ShimEnumerator_get_Current_m69165_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m69166_gshared (ShimEnumerator_t9270 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m69166(__this, method) (( void (*) (ShimEnumerator_t9270 *, const MethodInfo*))ShimEnumerator_Reset_m69166_gshared)(__this, method)
