#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3367;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1150;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17826_gshared (ShimEnumerator_t3367 * __this, Dictionary_2_t1150 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17826(__this, ___host, method) (( void (*) (ShimEnumerator_t3367 *, Dictionary_2_t1150 *, const MethodInfo*))ShimEnumerator__ctor_m17826_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17827_gshared (ShimEnumerator_t3367 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17827(__this, method) (( bool (*) (ShimEnumerator_t3367 *, const MethodInfo*))ShimEnumerator_MoveNext_m17827_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1685  ShimEnumerator_get_Entry_m17828_gshared (ShimEnumerator_t3367 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17828(__this, method) (( DictionaryEntry_t1685  (*) (ShimEnumerator_t3367 *, const MethodInfo*))ShimEnumerator_get_Entry_m17828_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17829_gshared (ShimEnumerator_t3367 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17829(__this, method) (( Object_t * (*) (ShimEnumerator_t3367 *, const MethodInfo*))ShimEnumerator_get_Key_m17829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17830_gshared (ShimEnumerator_t3367 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17830(__this, method) (( Object_t * (*) (ShimEnumerator_t3367 *, const MethodInfo*))ShimEnumerator_get_Value_m17830_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17831_gshared (ShimEnumerator_t3367 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17831(__this, method) (( Object_t * (*) (ShimEnumerator_t3367 *, const MethodInfo*))ShimEnumerator_get_Current_m17831_gshared)(__this, method)
