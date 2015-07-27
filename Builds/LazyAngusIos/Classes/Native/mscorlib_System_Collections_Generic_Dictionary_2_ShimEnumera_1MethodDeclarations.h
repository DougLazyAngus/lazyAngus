#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3517;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3506;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19826_gshared (ShimEnumerator_t3517 * __this, Dictionary_2_t3506 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19826(__this, ___host, method) (( void (*) (ShimEnumerator_t3517 *, Dictionary_2_t3506 *, const MethodInfo*))ShimEnumerator__ctor_m19826_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19827_gshared (ShimEnumerator_t3517 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19827(__this, method) (( bool (*) (ShimEnumerator_t3517 *, const MethodInfo*))ShimEnumerator_MoveNext_m19827_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2181  ShimEnumerator_get_Entry_m19828_gshared (ShimEnumerator_t3517 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19828(__this, method) (( DictionaryEntry_t2181  (*) (ShimEnumerator_t3517 *, const MethodInfo*))ShimEnumerator_get_Entry_m19828_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19829_gshared (ShimEnumerator_t3517 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19829(__this, method) (( Object_t * (*) (ShimEnumerator_t3517 *, const MethodInfo*))ShimEnumerator_get_Key_m19829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19830_gshared (ShimEnumerator_t3517 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19830(__this, method) (( Object_t * (*) (ShimEnumerator_t3517 *, const MethodInfo*))ShimEnumerator_get_Value_m19830_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19831_gshared (ShimEnumerator_t3517 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19831(__this, method) (( Object_t * (*) (ShimEnumerator_t3517 *, const MethodInfo*))ShimEnumerator_get_Current_m19831_gshared)(__this, method)
