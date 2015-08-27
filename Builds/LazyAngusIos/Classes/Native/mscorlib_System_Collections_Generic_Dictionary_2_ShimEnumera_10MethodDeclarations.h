#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t8462;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8453;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61332_gshared (ShimEnumerator_t8462 * __this, Dictionary_2_t8453 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61332(__this, ___host, method) (( void (*) (ShimEnumerator_t8462 *, Dictionary_2_t8453 *, const MethodInfo*))ShimEnumerator__ctor_m61332_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61333_gshared (ShimEnumerator_t8462 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61333(__this, method) (( bool (*) (ShimEnumerator_t8462 *, const MethodInfo*))ShimEnumerator_MoveNext_m61333_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m61334_gshared (ShimEnumerator_t8462 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61334(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t8462 *, const MethodInfo*))ShimEnumerator_get_Entry_m61334_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61335_gshared (ShimEnumerator_t8462 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61335(__this, method) (( Object_t * (*) (ShimEnumerator_t8462 *, const MethodInfo*))ShimEnumerator_get_Key_m61335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61336_gshared (ShimEnumerator_t8462 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61336(__this, method) (( Object_t * (*) (ShimEnumerator_t8462 *, const MethodInfo*))ShimEnumerator_get_Value_m61336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61337_gshared (ShimEnumerator_t8462 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61337(__this, method) (( Object_t * (*) (ShimEnumerator_t8462 *, const MethodInfo*))ShimEnumerator_get_Current_m61337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m61338_gshared (ShimEnumerator_t8462 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61338(__this, method) (( void (*) (ShimEnumerator_t8462 *, const MethodInfo*))ShimEnumerator_Reset_m61338_gshared)(__this, method)
