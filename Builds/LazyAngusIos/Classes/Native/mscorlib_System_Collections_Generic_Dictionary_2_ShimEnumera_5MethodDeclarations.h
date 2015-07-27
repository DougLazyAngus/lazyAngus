#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4142;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4131;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m28824_gshared (ShimEnumerator_t4142 * __this, Dictionary_2_t4131 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m28824(__this, ___host, method) (( void (*) (ShimEnumerator_t4142 *, Dictionary_2_t4131 *, const MethodInfo*))ShimEnumerator__ctor_m28824_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m28825_gshared (ShimEnumerator_t4142 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m28825(__this, method) (( bool (*) (ShimEnumerator_t4142 *, const MethodInfo*))ShimEnumerator_MoveNext_m28825_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2181  ShimEnumerator_get_Entry_m28826_gshared (ShimEnumerator_t4142 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m28826(__this, method) (( DictionaryEntry_t2181  (*) (ShimEnumerator_t4142 *, const MethodInfo*))ShimEnumerator_get_Entry_m28826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m28827_gshared (ShimEnumerator_t4142 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m28827(__this, method) (( Object_t * (*) (ShimEnumerator_t4142 *, const MethodInfo*))ShimEnumerator_get_Key_m28827_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m28828_gshared (ShimEnumerator_t4142 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m28828(__this, method) (( Object_t * (*) (ShimEnumerator_t4142 *, const MethodInfo*))ShimEnumerator_get_Value_m28828_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m28829_gshared (ShimEnumerator_t4142 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m28829(__this, method) (( Object_t * (*) (ShimEnumerator_t4142 *, const MethodInfo*))ShimEnumerator_get_Current_m28829_gshared)(__this, method)
