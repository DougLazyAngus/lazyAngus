#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t6784;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6775;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38298_gshared (ShimEnumerator_t6784 * __this, Dictionary_2_t6775 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m38298(__this, ___host, method) (( void (*) (ShimEnumerator_t6784 *, Dictionary_2_t6775 *, const MethodInfo*))ShimEnumerator__ctor_m38298_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38299_gshared (ShimEnumerator_t6784 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m38299(__this, method) (( bool (*) (ShimEnumerator_t6784 *, const MethodInfo*))ShimEnumerator_MoveNext_m38299_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2157  ShimEnumerator_get_Entry_m38300_gshared (ShimEnumerator_t6784 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m38300(__this, method) (( DictionaryEntry_t2157  (*) (ShimEnumerator_t6784 *, const MethodInfo*))ShimEnumerator_get_Entry_m38300_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38301_gshared (ShimEnumerator_t6784 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m38301(__this, method) (( Object_t * (*) (ShimEnumerator_t6784 *, const MethodInfo*))ShimEnumerator_get_Key_m38301_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38302_gshared (ShimEnumerator_t6784 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m38302(__this, method) (( Object_t * (*) (ShimEnumerator_t6784 *, const MethodInfo*))ShimEnumerator_get_Value_m38302_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m38303_gshared (ShimEnumerator_t6784 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m38303(__this, method) (( Object_t * (*) (ShimEnumerator_t6784 *, const MethodInfo*))ShimEnumerator_get_Current_m38303_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m38304_gshared (ShimEnumerator_t6784 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m38304(__this, method) (( void (*) (ShimEnumerator_t6784 *, const MethodInfo*))ShimEnumerator_Reset_m38304_gshared)(__this, method)
