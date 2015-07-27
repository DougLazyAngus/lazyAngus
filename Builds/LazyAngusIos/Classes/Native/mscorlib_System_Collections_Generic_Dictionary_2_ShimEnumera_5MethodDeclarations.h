#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4141;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4130;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m28821_gshared (ShimEnumerator_t4141 * __this, Dictionary_2_t4130 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m28821(__this, ___host, method) (( void (*) (ShimEnumerator_t4141 *, Dictionary_2_t4130 *, const MethodInfo*))ShimEnumerator__ctor_m28821_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m28822_gshared (ShimEnumerator_t4141 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m28822(__this, method) (( bool (*) (ShimEnumerator_t4141 *, const MethodInfo*))ShimEnumerator_MoveNext_m28822_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2180  ShimEnumerator_get_Entry_m28823_gshared (ShimEnumerator_t4141 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m28823(__this, method) (( DictionaryEntry_t2180  (*) (ShimEnumerator_t4141 *, const MethodInfo*))ShimEnumerator_get_Entry_m28823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m28824_gshared (ShimEnumerator_t4141 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m28824(__this, method) (( Object_t * (*) (ShimEnumerator_t4141 *, const MethodInfo*))ShimEnumerator_get_Key_m28824_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m28825_gshared (ShimEnumerator_t4141 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m28825(__this, method) (( Object_t * (*) (ShimEnumerator_t4141 *, const MethodInfo*))ShimEnumerator_get_Value_m28825_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m28826_gshared (ShimEnumerator_t4141 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m28826(__this, method) (( Object_t * (*) (ShimEnumerator_t4141 *, const MethodInfo*))ShimEnumerator_get_Current_m28826_gshared)(__this, method)
