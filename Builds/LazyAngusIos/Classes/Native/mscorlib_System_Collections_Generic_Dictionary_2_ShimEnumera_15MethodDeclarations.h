#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>
struct ShimEnumerator_t9272;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4478;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m69237_gshared (ShimEnumerator_t9272 * __this, Dictionary_2_t4478 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m69237(__this, ___host, method) (( void (*) (ShimEnumerator_t9272 *, Dictionary_2_t4478 *, const MethodInfo*))ShimEnumerator__ctor_m69237_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m69238_gshared (ShimEnumerator_t9272 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m69238(__this, method) (( bool (*) (ShimEnumerator_t9272 *, const MethodInfo*))ShimEnumerator_MoveNext_m69238_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m69239_gshared (ShimEnumerator_t9272 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m69239(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t9272 *, const MethodInfo*))ShimEnumerator_get_Entry_m69239_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m69240_gshared (ShimEnumerator_t9272 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m69240(__this, method) (( Object_t * (*) (ShimEnumerator_t9272 *, const MethodInfo*))ShimEnumerator_get_Key_m69240_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m69241_gshared (ShimEnumerator_t9272 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m69241(__this, method) (( Object_t * (*) (ShimEnumerator_t9272 *, const MethodInfo*))ShimEnumerator_get_Value_m69241_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m69242_gshared (ShimEnumerator_t9272 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m69242(__this, method) (( Object_t * (*) (ShimEnumerator_t9272 *, const MethodInfo*))ShimEnumerator_get_Current_m69242_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::Reset()
extern "C" void ShimEnumerator_Reset_m69243_gshared (ShimEnumerator_t9272 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m69243(__this, method) (( void (*) (ShimEnumerator_t9272 *, const MethodInfo*))ShimEnumerator_Reset_m69243_gshared)(__this, method)
