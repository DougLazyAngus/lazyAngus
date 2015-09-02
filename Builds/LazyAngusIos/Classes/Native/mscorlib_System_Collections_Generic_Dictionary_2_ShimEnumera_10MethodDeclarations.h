#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t8491;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8482;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m61664_gshared (ShimEnumerator_t8491 * __this, Dictionary_2_t8482 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m61664(__this, ___host, method) (( void (*) (ShimEnumerator_t8491 *, Dictionary_2_t8482 *, const MethodInfo*))ShimEnumerator__ctor_m61664_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m61665_gshared (ShimEnumerator_t8491 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m61665(__this, method) (( bool (*) (ShimEnumerator_t8491 *, const MethodInfo*))ShimEnumerator_MoveNext_m61665_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m61666_gshared (ShimEnumerator_t8491 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m61666(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t8491 *, const MethodInfo*))ShimEnumerator_get_Entry_m61666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m61667_gshared (ShimEnumerator_t8491 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m61667(__this, method) (( Object_t * (*) (ShimEnumerator_t8491 *, const MethodInfo*))ShimEnumerator_get_Key_m61667_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m61668_gshared (ShimEnumerator_t8491 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m61668(__this, method) (( Object_t * (*) (ShimEnumerator_t8491 *, const MethodInfo*))ShimEnumerator_get_Value_m61668_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m61669_gshared (ShimEnumerator_t8491 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m61669(__this, method) (( Object_t * (*) (ShimEnumerator_t8491 *, const MethodInfo*))ShimEnumerator_get_Current_m61669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::Reset()
extern "C" void ShimEnumerator_Reset_m61670_gshared (ShimEnumerator_t8491 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m61670(__this, method) (( void (*) (ShimEnumerator_t8491 *, const MethodInfo*))ShimEnumerator_Reset_m61670_gshared)(__this, method)
