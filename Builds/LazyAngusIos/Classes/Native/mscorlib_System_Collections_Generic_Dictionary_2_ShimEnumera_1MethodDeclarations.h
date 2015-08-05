#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5497;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5486;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23685_gshared (ShimEnumerator_t5497 * __this, Dictionary_2_t5486 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23685(__this, ___host, method) (( void (*) (ShimEnumerator_t5497 *, Dictionary_2_t5486 *, const MethodInfo*))ShimEnumerator__ctor_m23685_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23686_gshared (ShimEnumerator_t5497 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23686(__this, method) (( bool (*) (ShimEnumerator_t5497 *, const MethodInfo*))ShimEnumerator_MoveNext_m23686_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2089  ShimEnumerator_get_Entry_m23687_gshared (ShimEnumerator_t5497 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23687(__this, method) (( DictionaryEntry_t2089  (*) (ShimEnumerator_t5497 *, const MethodInfo*))ShimEnumerator_get_Entry_m23687_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23688_gshared (ShimEnumerator_t5497 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23688(__this, method) (( Object_t * (*) (ShimEnumerator_t5497 *, const MethodInfo*))ShimEnumerator_get_Key_m23688_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23689_gshared (ShimEnumerator_t5497 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23689(__this, method) (( Object_t * (*) (ShimEnumerator_t5497 *, const MethodInfo*))ShimEnumerator_get_Value_m23689_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23690_gshared (ShimEnumerator_t5497 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23690(__this, method) (( Object_t * (*) (ShimEnumerator_t5497 *, const MethodInfo*))ShimEnumerator_get_Current_m23690_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m23691_gshared (ShimEnumerator_t5497 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23691(__this, method) (( void (*) (ShimEnumerator_t5497 *, const MethodInfo*))ShimEnumerator_Reset_m23691_gshared)(__this, method)
