#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t8414;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8403;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m60953_gshared (ShimEnumerator_t8414 * __this, Dictionary_2_t8403 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m60953(__this, ___host, method) (( void (*) (ShimEnumerator_t8414 *, Dictionary_2_t8403 *, const MethodInfo*))ShimEnumerator__ctor_m60953_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m60954_gshared (ShimEnumerator_t8414 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m60954(__this, method) (( bool (*) (ShimEnumerator_t8414 *, const MethodInfo*))ShimEnumerator_MoveNext_m60954_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2086  ShimEnumerator_get_Entry_m60955_gshared (ShimEnumerator_t8414 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m60955(__this, method) (( DictionaryEntry_t2086  (*) (ShimEnumerator_t8414 *, const MethodInfo*))ShimEnumerator_get_Entry_m60955_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m60956_gshared (ShimEnumerator_t8414 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m60956(__this, method) (( Object_t * (*) (ShimEnumerator_t8414 *, const MethodInfo*))ShimEnumerator_get_Key_m60956_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m60957_gshared (ShimEnumerator_t8414 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m60957(__this, method) (( Object_t * (*) (ShimEnumerator_t8414 *, const MethodInfo*))ShimEnumerator_get_Value_m60957_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m60958_gshared (ShimEnumerator_t8414 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m60958(__this, method) (( Object_t * (*) (ShimEnumerator_t8414 *, const MethodInfo*))ShimEnumerator_get_Current_m60958_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m60959_gshared (ShimEnumerator_t8414 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m60959(__this, method) (( void (*) (ShimEnumerator_t8414 *, const MethodInfo*))ShimEnumerator_Reset_m60959_gshared)(__this, method)
