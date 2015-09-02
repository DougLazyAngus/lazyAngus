#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5559;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5548;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m24085_gshared (ShimEnumerator_t5559 * __this, Dictionary_2_t5548 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m24085(__this, ___host, method) (( void (*) (ShimEnumerator_t5559 *, Dictionary_2_t5548 *, const MethodInfo*))ShimEnumerator__ctor_m24085_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m24086_gshared (ShimEnumerator_t5559 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m24086(__this, method) (( bool (*) (ShimEnumerator_t5559 *, const MethodInfo*))ShimEnumerator_MoveNext_m24086_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m24087_gshared (ShimEnumerator_t5559 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m24087(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t5559 *, const MethodInfo*))ShimEnumerator_get_Entry_m24087_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m24088_gshared (ShimEnumerator_t5559 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m24088(__this, method) (( Object_t * (*) (ShimEnumerator_t5559 *, const MethodInfo*))ShimEnumerator_get_Key_m24088_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m24089_gshared (ShimEnumerator_t5559 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m24089(__this, method) (( Object_t * (*) (ShimEnumerator_t5559 *, const MethodInfo*))ShimEnumerator_get_Value_m24089_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m24090_gshared (ShimEnumerator_t5559 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m24090(__this, method) (( Object_t * (*) (ShimEnumerator_t5559 *, const MethodInfo*))ShimEnumerator_get_Current_m24090_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m24091_gshared (ShimEnumerator_t5559 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m24091(__this, method) (( void (*) (ShimEnumerator_t5559 *, const MethodInfo*))ShimEnumerator_Reset_m24091_gshared)(__this, method)
