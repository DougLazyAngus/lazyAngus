#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3345;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1128;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17678_gshared (ShimEnumerator_t3345 * __this, Dictionary_2_t1128 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17678(__this, ___host, method) (( void (*) (ShimEnumerator_t3345 *, Dictionary_2_t1128 *, const MethodInfo*))ShimEnumerator__ctor_m17678_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17679_gshared (ShimEnumerator_t3345 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17679(__this, method) (( bool (*) (ShimEnumerator_t3345 *, const MethodInfo*))ShimEnumerator_MoveNext_m17679_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1663  ShimEnumerator_get_Entry_m17680_gshared (ShimEnumerator_t3345 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17680(__this, method) (( DictionaryEntry_t1663  (*) (ShimEnumerator_t3345 *, const MethodInfo*))ShimEnumerator_get_Entry_m17680_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17681_gshared (ShimEnumerator_t3345 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17681(__this, method) (( Object_t * (*) (ShimEnumerator_t3345 *, const MethodInfo*))ShimEnumerator_get_Key_m17681_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17682_gshared (ShimEnumerator_t3345 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17682(__this, method) (( Object_t * (*) (ShimEnumerator_t3345 *, const MethodInfo*))ShimEnumerator_get_Value_m17682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17683_gshared (ShimEnumerator_t3345 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17683(__this, method) (( Object_t * (*) (ShimEnumerator_t3345 *, const MethodInfo*))ShimEnumerator_get_Current_m17683_gshared)(__this, method)
