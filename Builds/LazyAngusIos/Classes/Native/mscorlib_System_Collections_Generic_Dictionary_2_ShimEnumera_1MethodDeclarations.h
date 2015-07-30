#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5494;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5483;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23662_gshared (ShimEnumerator_t5494 * __this, Dictionary_2_t5483 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23662(__this, ___host, method) (( void (*) (ShimEnumerator_t5494 *, Dictionary_2_t5483 *, const MethodInfo*))ShimEnumerator__ctor_m23662_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23663_gshared (ShimEnumerator_t5494 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23663(__this, method) (( bool (*) (ShimEnumerator_t5494 *, const MethodInfo*))ShimEnumerator_MoveNext_m23663_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m23664_gshared (ShimEnumerator_t5494 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23664(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t5494 *, const MethodInfo*))ShimEnumerator_get_Entry_m23664_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23665_gshared (ShimEnumerator_t5494 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23665(__this, method) (( Object_t * (*) (ShimEnumerator_t5494 *, const MethodInfo*))ShimEnumerator_get_Key_m23665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23666_gshared (ShimEnumerator_t5494 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23666(__this, method) (( Object_t * (*) (ShimEnumerator_t5494 *, const MethodInfo*))ShimEnumerator_get_Value_m23666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23667_gshared (ShimEnumerator_t5494 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23667(__this, method) (( Object_t * (*) (ShimEnumerator_t5494 *, const MethodInfo*))ShimEnumerator_get_Current_m23667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m23668_gshared (ShimEnumerator_t5494 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23668(__this, method) (( void (*) (ShimEnumerator_t5494 *, const MethodInfo*))ShimEnumerator_Reset_m23668_gshared)(__this, method)
