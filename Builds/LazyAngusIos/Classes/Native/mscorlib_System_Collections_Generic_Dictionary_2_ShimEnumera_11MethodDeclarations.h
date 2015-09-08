#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t9060;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9049;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m66388_gshared (ShimEnumerator_t9060 * __this, Dictionary_2_t9049 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m66388(__this, ___host, method) (( void (*) (ShimEnumerator_t9060 *, Dictionary_2_t9049 *, const MethodInfo*))ShimEnumerator__ctor_m66388_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m66389_gshared (ShimEnumerator_t9060 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m66389(__this, method) (( bool (*) (ShimEnumerator_t9060 *, const MethodInfo*))ShimEnumerator_MoveNext_m66389_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m66390_gshared (ShimEnumerator_t9060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m66390(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t9060 *, const MethodInfo*))ShimEnumerator_get_Entry_m66390_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m66391_gshared (ShimEnumerator_t9060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m66391(__this, method) (( Object_t * (*) (ShimEnumerator_t9060 *, const MethodInfo*))ShimEnumerator_get_Key_m66391_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m66392_gshared (ShimEnumerator_t9060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m66392(__this, method) (( Object_t * (*) (ShimEnumerator_t9060 *, const MethodInfo*))ShimEnumerator_get_Value_m66392_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m66393_gshared (ShimEnumerator_t9060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m66393(__this, method) (( Object_t * (*) (ShimEnumerator_t9060 *, const MethodInfo*))ShimEnumerator_get_Current_m66393_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m66394_gshared (ShimEnumerator_t9060 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m66394(__this, method) (( void (*) (ShimEnumerator_t9060 *, const MethodInfo*))ShimEnumerator_Reset_m66394_gshared)(__this, method)
