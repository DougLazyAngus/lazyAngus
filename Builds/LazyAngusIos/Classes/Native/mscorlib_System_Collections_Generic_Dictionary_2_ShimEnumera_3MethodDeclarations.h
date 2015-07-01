#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3875;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3863;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25767_gshared (ShimEnumerator_t3875 * __this, Dictionary_2_t3863 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25767(__this, ___host, method) (( void (*) (ShimEnumerator_t3875 *, Dictionary_2_t3863 *, const MethodInfo*))ShimEnumerator__ctor_m25767_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25768_gshared (ShimEnumerator_t3875 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25768(__this, method) (( bool (*) (ShimEnumerator_t3875 *, const MethodInfo*))ShimEnumerator_MoveNext_m25768_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1663  ShimEnumerator_get_Entry_m25769_gshared (ShimEnumerator_t3875 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25769(__this, method) (( DictionaryEntry_t1663  (*) (ShimEnumerator_t3875 *, const MethodInfo*))ShimEnumerator_get_Entry_m25769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25770_gshared (ShimEnumerator_t3875 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25770(__this, method) (( Object_t * (*) (ShimEnumerator_t3875 *, const MethodInfo*))ShimEnumerator_get_Key_m25770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25771_gshared (ShimEnumerator_t3875 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25771(__this, method) (( Object_t * (*) (ShimEnumerator_t3875 *, const MethodInfo*))ShimEnumerator_get_Value_m25771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25772_gshared (ShimEnumerator_t3875 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25772(__this, method) (( Object_t * (*) (ShimEnumerator_t3875 *, const MethodInfo*))ShimEnumerator_get_Current_m25772_gshared)(__this, method)
