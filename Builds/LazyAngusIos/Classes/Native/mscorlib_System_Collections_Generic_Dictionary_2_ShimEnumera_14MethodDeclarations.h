#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t9258;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4477;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m69091_gshared (ShimEnumerator_t9258 * __this, Dictionary_2_t4477 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m69091(__this, ___host, method) (( void (*) (ShimEnumerator_t9258 *, Dictionary_2_t4477 *, const MethodInfo*))ShimEnumerator__ctor_m69091_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m69092_gshared (ShimEnumerator_t9258 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m69092(__this, method) (( bool (*) (ShimEnumerator_t9258 *, const MethodInfo*))ShimEnumerator_MoveNext_m69092_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m69093_gshared (ShimEnumerator_t9258 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m69093(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t9258 *, const MethodInfo*))ShimEnumerator_get_Entry_m69093_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m69094_gshared (ShimEnumerator_t9258 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m69094(__this, method) (( Object_t * (*) (ShimEnumerator_t9258 *, const MethodInfo*))ShimEnumerator_get_Key_m69094_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m69095_gshared (ShimEnumerator_t9258 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m69095(__this, method) (( Object_t * (*) (ShimEnumerator_t9258 *, const MethodInfo*))ShimEnumerator_get_Value_m69095_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m69096_gshared (ShimEnumerator_t9258 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m69096(__this, method) (( Object_t * (*) (ShimEnumerator_t9258 *, const MethodInfo*))ShimEnumerator_get_Current_m69096_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m69097_gshared (ShimEnumerator_t9258 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m69097(__this, method) (( void (*) (ShimEnumerator_t9258 *, const MethodInfo*))ShimEnumerator_Reset_m69097_gshared)(__this, method)
