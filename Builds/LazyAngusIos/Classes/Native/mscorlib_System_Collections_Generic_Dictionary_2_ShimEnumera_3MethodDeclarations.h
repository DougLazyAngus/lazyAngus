#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6203;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6194;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m33473_gshared (ShimEnumerator_t6203 * __this, Dictionary_2_t6194 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m33473(__this, ___host, method) (( void (*) (ShimEnumerator_t6203 *, Dictionary_2_t6194 *, const MethodInfo*))ShimEnumerator__ctor_m33473_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m33474_gshared (ShimEnumerator_t6203 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m33474(__this, method) (( bool (*) (ShimEnumerator_t6203 *, const MethodInfo*))ShimEnumerator_MoveNext_m33474_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m33475_gshared (ShimEnumerator_t6203 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m33475(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t6203 *, const MethodInfo*))ShimEnumerator_get_Entry_m33475_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m33476_gshared (ShimEnumerator_t6203 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m33476(__this, method) (( Object_t * (*) (ShimEnumerator_t6203 *, const MethodInfo*))ShimEnumerator_get_Key_m33476_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m33477_gshared (ShimEnumerator_t6203 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m33477(__this, method) (( Object_t * (*) (ShimEnumerator_t6203 *, const MethodInfo*))ShimEnumerator_get_Value_m33477_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m33478_gshared (ShimEnumerator_t6203 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m33478(__this, method) (( Object_t * (*) (ShimEnumerator_t6203 *, const MethodInfo*))ShimEnumerator_get_Current_m33478_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m33479_gshared (ShimEnumerator_t6203 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m33479(__this, method) (( void (*) (ShimEnumerator_t6203 *, const MethodInfo*))ShimEnumerator_Reset_m33479_gshared)(__this, method)
