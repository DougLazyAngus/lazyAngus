#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t5934;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5925;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m30457_gshared (ShimEnumerator_t5934 * __this, Dictionary_2_t5925 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m30457(__this, ___host, method) (( void (*) (ShimEnumerator_t5934 *, Dictionary_2_t5925 *, const MethodInfo*))ShimEnumerator__ctor_m30457_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m30458_gshared (ShimEnumerator_t5934 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m30458(__this, method) (( bool (*) (ShimEnumerator_t5934 *, const MethodInfo*))ShimEnumerator_MoveNext_m30458_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2079  ShimEnumerator_get_Entry_m30459_gshared (ShimEnumerator_t5934 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m30459(__this, method) (( DictionaryEntry_t2079  (*) (ShimEnumerator_t5934 *, const MethodInfo*))ShimEnumerator_get_Entry_m30459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m30460_gshared (ShimEnumerator_t5934 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m30460(__this, method) (( Object_t * (*) (ShimEnumerator_t5934 *, const MethodInfo*))ShimEnumerator_get_Key_m30460_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m30461_gshared (ShimEnumerator_t5934 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m30461(__this, method) (( Object_t * (*) (ShimEnumerator_t5934 *, const MethodInfo*))ShimEnumerator_get_Value_m30461_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m30462_gshared (ShimEnumerator_t5934 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m30462(__this, method) (( Object_t * (*) (ShimEnumerator_t5934 *, const MethodInfo*))ShimEnumerator_get_Current_m30462_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m30463_gshared (ShimEnumerator_t5934 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m30463(__this, method) (( void (*) (ShimEnumerator_t5934 *, const MethodInfo*))ShimEnumerator_Reset_m30463_gshared)(__this, method)
