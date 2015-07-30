#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t8275;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8266;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m59084_gshared (ShimEnumerator_t8275 * __this, Dictionary_2_t8266 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m59084(__this, ___host, method) (( void (*) (ShimEnumerator_t8275 *, Dictionary_2_t8266 *, const MethodInfo*))ShimEnumerator__ctor_m59084_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m59085_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m59085(__this, method) (( bool (*) (ShimEnumerator_t8275 *, const MethodInfo*))ShimEnumerator_MoveNext_m59085_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m59086_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m59086(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t8275 *, const MethodInfo*))ShimEnumerator_get_Entry_m59086_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m59087_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m59087(__this, method) (( Object_t * (*) (ShimEnumerator_t8275 *, const MethodInfo*))ShimEnumerator_get_Key_m59087_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m59088_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m59088(__this, method) (( Object_t * (*) (ShimEnumerator_t8275 *, const MethodInfo*))ShimEnumerator_get_Value_m59088_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m59089_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m59089(__this, method) (( Object_t * (*) (ShimEnumerator_t8275 *, const MethodInfo*))ShimEnumerator_get_Current_m59089_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m59090_gshared (ShimEnumerator_t8275 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m59090(__this, method) (( void (*) (ShimEnumerator_t8275 *, const MethodInfo*))ShimEnumerator_Reset_m59090_gshared)(__this, method)
