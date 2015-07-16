#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3918;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3906;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25981_gshared (ShimEnumerator_t3918 * __this, Dictionary_2_t3906 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25981(__this, ___host, method) (( void (*) (ShimEnumerator_t3918 *, Dictionary_2_t3906 *, const MethodInfo*))ShimEnumerator__ctor_m25981_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25982_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25982(__this, method) (( bool (*) (ShimEnumerator_t3918 *, const MethodInfo*))ShimEnumerator_MoveNext_m25982_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m25983_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25983(__this, method) (( DictionaryEntry_t1710  (*) (ShimEnumerator_t3918 *, const MethodInfo*))ShimEnumerator_get_Entry_m25983_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25984_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25984(__this, method) (( Object_t * (*) (ShimEnumerator_t3918 *, const MethodInfo*))ShimEnumerator_get_Key_m25984_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25985_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25985(__this, method) (( Object_t * (*) (ShimEnumerator_t3918 *, const MethodInfo*))ShimEnumerator_get_Value_m25985_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25986_gshared (ShimEnumerator_t3918 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25986(__this, method) (( Object_t * (*) (ShimEnumerator_t3918 *, const MethodInfo*))ShimEnumerator_get_Current_m25986_gshared)(__this, method)
