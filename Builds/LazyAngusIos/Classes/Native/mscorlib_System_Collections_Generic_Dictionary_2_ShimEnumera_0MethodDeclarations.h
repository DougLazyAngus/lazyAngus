#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3390;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1173;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17981_gshared (ShimEnumerator_t3390 * __this, Dictionary_2_t1173 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17981(__this, ___host, method) (( void (*) (ShimEnumerator_t3390 *, Dictionary_2_t1173 *, const MethodInfo*))ShimEnumerator__ctor_m17981_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17982_gshared (ShimEnumerator_t3390 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17982(__this, method) (( bool (*) (ShimEnumerator_t3390 *, const MethodInfo*))ShimEnumerator_MoveNext_m17982_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1708  ShimEnumerator_get_Entry_m17983_gshared (ShimEnumerator_t3390 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17983(__this, method) (( DictionaryEntry_t1708  (*) (ShimEnumerator_t3390 *, const MethodInfo*))ShimEnumerator_get_Entry_m17983_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17984_gshared (ShimEnumerator_t3390 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17984(__this, method) (( Object_t * (*) (ShimEnumerator_t3390 *, const MethodInfo*))ShimEnumerator_get_Key_m17984_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17985_gshared (ShimEnumerator_t3390 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17985(__this, method) (( Object_t * (*) (ShimEnumerator_t3390 *, const MethodInfo*))ShimEnumerator_get_Value_m17985_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17986_gshared (ShimEnumerator_t3390 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17986(__this, method) (( Object_t * (*) (ShimEnumerator_t3390 *, const MethodInfo*))ShimEnumerator_get_Current_m17986_gshared)(__this, method)
