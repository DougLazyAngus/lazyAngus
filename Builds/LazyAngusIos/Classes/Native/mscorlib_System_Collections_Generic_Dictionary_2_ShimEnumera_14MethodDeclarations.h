#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t8582;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4079;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m63244_gshared (ShimEnumerator_t8582 * __this, Dictionary_2_t4079 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m63244(__this, ___host, method) (( void (*) (ShimEnumerator_t8582 *, Dictionary_2_t4079 *, const MethodInfo*))ShimEnumerator__ctor_m63244_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m63245_gshared (ShimEnumerator_t8582 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m63245(__this, method) (( bool (*) (ShimEnumerator_t8582 *, const MethodInfo*))ShimEnumerator_MoveNext_m63245_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2089  ShimEnumerator_get_Entry_m63246_gshared (ShimEnumerator_t8582 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m63246(__this, method) (( DictionaryEntry_t2089  (*) (ShimEnumerator_t8582 *, const MethodInfo*))ShimEnumerator_get_Entry_m63246_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m63247_gshared (ShimEnumerator_t8582 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m63247(__this, method) (( Object_t * (*) (ShimEnumerator_t8582 *, const MethodInfo*))ShimEnumerator_get_Key_m63247_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m63248_gshared (ShimEnumerator_t8582 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m63248(__this, method) (( Object_t * (*) (ShimEnumerator_t8582 *, const MethodInfo*))ShimEnumerator_get_Value_m63248_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m63249_gshared (ShimEnumerator_t8582 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m63249(__this, method) (( Object_t * (*) (ShimEnumerator_t8582 *, const MethodInfo*))ShimEnumerator_get_Current_m63249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m63250_gshared (ShimEnumerator_t8582 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m63250(__this, method) (( void (*) (ShimEnumerator_t8582 *, const MethodInfo*))ShimEnumerator_Reset_m63250_gshared)(__this, method)
