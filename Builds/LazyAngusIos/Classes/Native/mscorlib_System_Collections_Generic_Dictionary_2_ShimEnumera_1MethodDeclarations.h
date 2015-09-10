#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t6103;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6092;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m28358_gshared (ShimEnumerator_t6103 * __this, Dictionary_2_t6092 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m28358(__this, ___host, method) (( void (*) (ShimEnumerator_t6103 *, Dictionary_2_t6092 *, const MethodInfo*))ShimEnumerator__ctor_m28358_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m28359_gshared (ShimEnumerator_t6103 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m28359(__this, method) (( bool (*) (ShimEnumerator_t6103 *, const MethodInfo*))ShimEnumerator_MoveNext_m28359_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m28360_gshared (ShimEnumerator_t6103 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m28360(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t6103 *, const MethodInfo*))ShimEnumerator_get_Entry_m28360_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m28361_gshared (ShimEnumerator_t6103 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m28361(__this, method) (( Object_t * (*) (ShimEnumerator_t6103 *, const MethodInfo*))ShimEnumerator_get_Key_m28361_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m28362_gshared (ShimEnumerator_t6103 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m28362(__this, method) (( Object_t * (*) (ShimEnumerator_t6103 *, const MethodInfo*))ShimEnumerator_get_Value_m28362_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m28363_gshared (ShimEnumerator_t6103 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m28363(__this, method) (( Object_t * (*) (ShimEnumerator_t6103 *, const MethodInfo*))ShimEnumerator_get_Current_m28363_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m28364_gshared (ShimEnumerator_t6103 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m28364(__this, method) (( void (*) (ShimEnumerator_t6103 *, const MethodInfo*))ShimEnumerator_Reset_m28364_gshared)(__this, method)
