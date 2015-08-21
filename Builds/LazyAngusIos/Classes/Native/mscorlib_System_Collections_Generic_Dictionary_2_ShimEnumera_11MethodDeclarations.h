#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t8492;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8481;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61742_gshared (ShimEnumerator_t8492 * __this, Dictionary_2_t8481 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61742(__this, ___host, method) (( void (*) (ShimEnumerator_t8492 *, Dictionary_2_t8481 *, const MethodInfo*))ShimEnumerator__ctor_m61742_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61743_gshared (ShimEnumerator_t8492 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61743(__this, method) (( bool (*) (ShimEnumerator_t8492 *, const MethodInfo*))ShimEnumerator_MoveNext_m61743_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m61744_gshared (ShimEnumerator_t8492 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61744(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t8492 *, const MethodInfo*))ShimEnumerator_get_Entry_m61744_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61745_gshared (ShimEnumerator_t8492 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61745(__this, method) (( Object_t * (*) (ShimEnumerator_t8492 *, const MethodInfo*))ShimEnumerator_get_Key_m61745_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61746_gshared (ShimEnumerator_t8492 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61746(__this, method) (( Object_t * (*) (ShimEnumerator_t8492 *, const MethodInfo*))ShimEnumerator_get_Value_m61746_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61747_gshared (ShimEnumerator_t8492 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61747(__this, method) (( Object_t * (*) (ShimEnumerator_t8492 *, const MethodInfo*))ShimEnumerator_get_Current_m61747_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m61748_gshared (ShimEnumerator_t8492 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61748(__this, method) (( void (*) (ShimEnumerator_t8492 *, const MethodInfo*))ShimEnumerator_Reset_m61748_gshared)(__this, method)
