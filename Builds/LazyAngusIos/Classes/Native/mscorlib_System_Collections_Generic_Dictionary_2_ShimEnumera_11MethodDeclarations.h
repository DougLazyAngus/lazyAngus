#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t8417;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8406;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m60976_gshared (ShimEnumerator_t8417 * __this, Dictionary_2_t8406 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m60976(__this, ___host, method) (( void (*) (ShimEnumerator_t8417 *, Dictionary_2_t8406 *, const MethodInfo*))ShimEnumerator__ctor_m60976_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m60977_gshared (ShimEnumerator_t8417 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m60977(__this, method) (( bool (*) (ShimEnumerator_t8417 *, const MethodInfo*))ShimEnumerator_MoveNext_m60977_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2089  ShimEnumerator_get_Entry_m60978_gshared (ShimEnumerator_t8417 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m60978(__this, method) (( DictionaryEntry_t2089  (*) (ShimEnumerator_t8417 *, const MethodInfo*))ShimEnumerator_get_Entry_m60978_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m60979_gshared (ShimEnumerator_t8417 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m60979(__this, method) (( Object_t * (*) (ShimEnumerator_t8417 *, const MethodInfo*))ShimEnumerator_get_Key_m60979_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m60980_gshared (ShimEnumerator_t8417 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m60980(__this, method) (( Object_t * (*) (ShimEnumerator_t8417 *, const MethodInfo*))ShimEnumerator_get_Value_m60980_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m60981_gshared (ShimEnumerator_t8417 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m60981(__this, method) (( Object_t * (*) (ShimEnumerator_t8417 *, const MethodInfo*))ShimEnumerator_get_Current_m60981_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m60982_gshared (ShimEnumerator_t8417 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m60982(__this, method) (( void (*) (ShimEnumerator_t8417 *, const MethodInfo*))ShimEnumerator_Reset_m60982_gshared)(__this, method)
