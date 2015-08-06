#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5496;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5485;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23678_gshared (ShimEnumerator_t5496 * __this, Dictionary_2_t5485 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23678(__this, ___host, method) (( void (*) (ShimEnumerator_t5496 *, Dictionary_2_t5485 *, const MethodInfo*))ShimEnumerator__ctor_m23678_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23679_gshared (ShimEnumerator_t5496 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23679(__this, method) (( bool (*) (ShimEnumerator_t5496 *, const MethodInfo*))ShimEnumerator_MoveNext_m23679_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m23680_gshared (ShimEnumerator_t5496 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23680(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t5496 *, const MethodInfo*))ShimEnumerator_get_Entry_m23680_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23681_gshared (ShimEnumerator_t5496 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23681(__this, method) (( Object_t * (*) (ShimEnumerator_t5496 *, const MethodInfo*))ShimEnumerator_get_Key_m23681_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23682_gshared (ShimEnumerator_t5496 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23682(__this, method) (( Object_t * (*) (ShimEnumerator_t5496 *, const MethodInfo*))ShimEnumerator_get_Value_m23682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23683_gshared (ShimEnumerator_t5496 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23683(__this, method) (( Object_t * (*) (ShimEnumerator_t5496 *, const MethodInfo*))ShimEnumerator_get_Current_m23683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m23684_gshared (ShimEnumerator_t5496 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23684(__this, method) (( void (*) (ShimEnumerator_t5496 *, const MethodInfo*))ShimEnumerator_Reset_m23684_gshared)(__this, method)
