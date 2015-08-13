#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5542;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5531;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23936_gshared (ShimEnumerator_t5542 * __this, Dictionary_2_t5531 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23936(__this, ___host, method) (( void (*) (ShimEnumerator_t5542 *, Dictionary_2_t5531 *, const MethodInfo*))ShimEnumerator__ctor_m23936_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23937_gshared (ShimEnumerator_t5542 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23937(__this, method) (( bool (*) (ShimEnumerator_t5542 *, const MethodInfo*))ShimEnumerator_MoveNext_m23937_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m23938_gshared (ShimEnumerator_t5542 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23938(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t5542 *, const MethodInfo*))ShimEnumerator_get_Entry_m23938_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23939_gshared (ShimEnumerator_t5542 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23939(__this, method) (( Object_t * (*) (ShimEnumerator_t5542 *, const MethodInfo*))ShimEnumerator_get_Key_m23939_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23940_gshared (ShimEnumerator_t5542 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23940(__this, method) (( Object_t * (*) (ShimEnumerator_t5542 *, const MethodInfo*))ShimEnumerator_get_Value_m23940_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23941_gshared (ShimEnumerator_t5542 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23941(__this, method) (( Object_t * (*) (ShimEnumerator_t5542 *, const MethodInfo*))ShimEnumerator_get_Current_m23941_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m23942_gshared (ShimEnumerator_t5542 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23942(__this, method) (( void (*) (ShimEnumerator_t5542 *, const MethodInfo*))ShimEnumerator_Reset_m23942_gshared)(__this, method)
