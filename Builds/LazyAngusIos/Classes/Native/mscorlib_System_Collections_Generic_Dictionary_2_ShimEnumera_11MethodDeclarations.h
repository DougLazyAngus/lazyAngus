#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t9072;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9061;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m66457_gshared (ShimEnumerator_t9072 * __this, Dictionary_2_t9061 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m66457(__this, ___host, method) (( void (*) (ShimEnumerator_t9072 *, Dictionary_2_t9061 *, const MethodInfo*))ShimEnumerator__ctor_m66457_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m66458_gshared (ShimEnumerator_t9072 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m66458(__this, method) (( bool (*) (ShimEnumerator_t9072 *, const MethodInfo*))ShimEnumerator_MoveNext_m66458_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m66459_gshared (ShimEnumerator_t9072 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m66459(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t9072 *, const MethodInfo*))ShimEnumerator_get_Entry_m66459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m66460_gshared (ShimEnumerator_t9072 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m66460(__this, method) (( Object_t * (*) (ShimEnumerator_t9072 *, const MethodInfo*))ShimEnumerator_get_Key_m66460_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m66461_gshared (ShimEnumerator_t9072 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m66461(__this, method) (( Object_t * (*) (ShimEnumerator_t9072 *, const MethodInfo*))ShimEnumerator_get_Value_m66461_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m66462_gshared (ShimEnumerator_t9072 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m66462(__this, method) (( Object_t * (*) (ShimEnumerator_t9072 *, const MethodInfo*))ShimEnumerator_get_Current_m66462_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m66463_gshared (ShimEnumerator_t9072 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m66463(__this, method) (( void (*) (ShimEnumerator_t9072 *, const MethodInfo*))ShimEnumerator_Reset_m66463_gshared)(__this, method)
