#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>
struct ShimEnumerator_t9277;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4481;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m69249_gshared (ShimEnumerator_t9277 * __this, Dictionary_2_t4481 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m69249(__this, ___host, method) (( void (*) (ShimEnumerator_t9277 *, Dictionary_2_t4481 *, const MethodInfo*))ShimEnumerator__ctor_m69249_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m69250_gshared (ShimEnumerator_t9277 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m69250(__this, method) (( bool (*) (ShimEnumerator_t9277 *, const MethodInfo*))ShimEnumerator_MoveNext_m69250_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m69251_gshared (ShimEnumerator_t9277 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m69251(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t9277 *, const MethodInfo*))ShimEnumerator_get_Entry_m69251_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m69252_gshared (ShimEnumerator_t9277 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m69252(__this, method) (( Object_t * (*) (ShimEnumerator_t9277 *, const MethodInfo*))ShimEnumerator_get_Key_m69252_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m69253_gshared (ShimEnumerator_t9277 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m69253(__this, method) (( Object_t * (*) (ShimEnumerator_t9277 *, const MethodInfo*))ShimEnumerator_get_Value_m69253_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m69254_gshared (ShimEnumerator_t9277 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m69254(__this, method) (( Object_t * (*) (ShimEnumerator_t9277 *, const MethodInfo*))ShimEnumerator_get_Current_m69254_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::Reset()
extern "C" void ShimEnumerator_Reset_m69255_gshared (ShimEnumerator_t9277 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m69255(__this, method) (( void (*) (ShimEnumerator_t9277 *, const MethodInfo*))ShimEnumerator_Reset_m69255_gshared)(__this, method)
