#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t6587;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6578;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m35907_gshared (ShimEnumerator_t6587 * __this, Dictionary_2_t6578 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m35907(__this, ___host, method) (( void (*) (ShimEnumerator_t6587 *, Dictionary_2_t6578 *, const MethodInfo*))ShimEnumerator__ctor_m35907_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m35908_gshared (ShimEnumerator_t6587 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m35908(__this, method) (( bool (*) (ShimEnumerator_t6587 *, const MethodInfo*))ShimEnumerator_MoveNext_m35908_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m35909_gshared (ShimEnumerator_t6587 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m35909(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t6587 *, const MethodInfo*))ShimEnumerator_get_Entry_m35909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m35910_gshared (ShimEnumerator_t6587 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m35910(__this, method) (( Object_t * (*) (ShimEnumerator_t6587 *, const MethodInfo*))ShimEnumerator_get_Key_m35910_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m35911_gshared (ShimEnumerator_t6587 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m35911(__this, method) (( Object_t * (*) (ShimEnumerator_t6587 *, const MethodInfo*))ShimEnumerator_get_Value_m35911_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m35912_gshared (ShimEnumerator_t6587 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m35912(__this, method) (( Object_t * (*) (ShimEnumerator_t6587 *, const MethodInfo*))ShimEnumerator_get_Current_m35912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m35913_gshared (ShimEnumerator_t6587 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m35913(__this, method) (( void (*) (ShimEnumerator_t6587 *, const MethodInfo*))ShimEnumerator_Reset_m35913_gshared)(__this, method)
