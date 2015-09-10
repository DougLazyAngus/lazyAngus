#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6781;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6772;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38158_gshared (ShimEnumerator_t6781 * __this, Dictionary_2_t6772 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m38158(__this, ___host, method) (( void (*) (ShimEnumerator_t6781 *, Dictionary_2_t6772 *, const MethodInfo*))ShimEnumerator__ctor_m38158_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38159_gshared (ShimEnumerator_t6781 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m38159(__this, method) (( bool (*) (ShimEnumerator_t6781 *, const MethodInfo*))ShimEnumerator_MoveNext_m38159_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m38160_gshared (ShimEnumerator_t6781 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m38160(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t6781 *, const MethodInfo*))ShimEnumerator_get_Entry_m38160_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38161_gshared (ShimEnumerator_t6781 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m38161(__this, method) (( Object_t * (*) (ShimEnumerator_t6781 *, const MethodInfo*))ShimEnumerator_get_Key_m38161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38162_gshared (ShimEnumerator_t6781 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m38162(__this, method) (( Object_t * (*) (ShimEnumerator_t6781 *, const MethodInfo*))ShimEnumerator_get_Value_m38162_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m38163_gshared (ShimEnumerator_t6781 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m38163(__this, method) (( Object_t * (*) (ShimEnumerator_t6781 *, const MethodInfo*))ShimEnumerator_get_Current_m38163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m38164_gshared (ShimEnumerator_t6781 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m38164(__this, method) (( void (*) (ShimEnumerator_t6781 *, const MethodInfo*))ShimEnumerator_Reset_m38164_gshared)(__this, method)
