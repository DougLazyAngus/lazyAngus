#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>
struct ShimEnumerator_t9284;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4488;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m69306_gshared (ShimEnumerator_t9284 * __this, Dictionary_2_t4488 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m69306(__this, ___host, method) (( void (*) (ShimEnumerator_t9284 *, Dictionary_2_t4488 *, const MethodInfo*))ShimEnumerator__ctor_m69306_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m69307_gshared (ShimEnumerator_t9284 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m69307(__this, method) (( bool (*) (ShimEnumerator_t9284 *, const MethodInfo*))ShimEnumerator_MoveNext_m69307_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m69308_gshared (ShimEnumerator_t9284 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m69308(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t9284 *, const MethodInfo*))ShimEnumerator_get_Entry_m69308_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m69309_gshared (ShimEnumerator_t9284 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m69309(__this, method) (( Object_t * (*) (ShimEnumerator_t9284 *, const MethodInfo*))ShimEnumerator_get_Key_m69309_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m69310_gshared (ShimEnumerator_t9284 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m69310(__this, method) (( Object_t * (*) (ShimEnumerator_t9284 *, const MethodInfo*))ShimEnumerator_get_Value_m69310_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m69311_gshared (ShimEnumerator_t9284 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m69311(__this, method) (( Object_t * (*) (ShimEnumerator_t9284 *, const MethodInfo*))ShimEnumerator_get_Current_m69311_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::Reset()
extern "C" void ShimEnumerator_Reset_m69312_gshared (ShimEnumerator_t9284 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m69312(__this, method) (( void (*) (ShimEnumerator_t9284 *, const MethodInfo*))ShimEnumerator_Reset_m69312_gshared)(__this, method)
