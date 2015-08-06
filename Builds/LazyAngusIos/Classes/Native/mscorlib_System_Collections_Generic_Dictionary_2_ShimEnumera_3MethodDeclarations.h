#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t6127;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6118;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32694_gshared (ShimEnumerator_t6127 * __this, Dictionary_2_t6118 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m32694(__this, ___host, method) (( void (*) (ShimEnumerator_t6127 *, Dictionary_2_t6118 *, const MethodInfo*))ShimEnumerator__ctor_m32694_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32695_gshared (ShimEnumerator_t6127 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m32695(__this, method) (( bool (*) (ShimEnumerator_t6127 *, const MethodInfo*))ShimEnumerator_MoveNext_m32695_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m32696_gshared (ShimEnumerator_t6127 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m32696(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t6127 *, const MethodInfo*))ShimEnumerator_get_Entry_m32696_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32697_gshared (ShimEnumerator_t6127 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m32697(__this, method) (( Object_t * (*) (ShimEnumerator_t6127 *, const MethodInfo*))ShimEnumerator_get_Key_m32697_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32698_gshared (ShimEnumerator_t6127 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m32698(__this, method) (( Object_t * (*) (ShimEnumerator_t6127 *, const MethodInfo*))ShimEnumerator_get_Value_m32698_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m32699_gshared (ShimEnumerator_t6127 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m32699(__this, method) (( Object_t * (*) (ShimEnumerator_t6127 *, const MethodInfo*))ShimEnumerator_get_Current_m32699_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m32700_gshared (ShimEnumerator_t6127 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m32700(__this, method) (( void (*) (ShimEnumerator_t6127 *, const MethodInfo*))ShimEnumerator_Reset_m32700_gshared)(__this, method)
