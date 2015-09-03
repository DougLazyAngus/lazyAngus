#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5998;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1504;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26314_gshared (ShimEnumerator_t5998 * __this, Dictionary_2_t1504 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26314(__this, ___host, method) (( void (*) (ShimEnumerator_t5998 *, Dictionary_2_t1504 *, const MethodInfo*))ShimEnumerator__ctor_m26314_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26315_gshared (ShimEnumerator_t5998 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26315(__this, method) (( bool (*) (ShimEnumerator_t5998 *, const MethodInfo*))ShimEnumerator_MoveNext_m26315_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m26316_gshared (ShimEnumerator_t5998 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26316(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t5998 *, const MethodInfo*))ShimEnumerator_get_Entry_m26316_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26317_gshared (ShimEnumerator_t5998 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26317(__this, method) (( Object_t * (*) (ShimEnumerator_t5998 *, const MethodInfo*))ShimEnumerator_get_Key_m26317_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26318_gshared (ShimEnumerator_t5998 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26318(__this, method) (( Object_t * (*) (ShimEnumerator_t5998 *, const MethodInfo*))ShimEnumerator_get_Value_m26318_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26319_gshared (ShimEnumerator_t5998 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26319(__this, method) (( Object_t * (*) (ShimEnumerator_t5998 *, const MethodInfo*))ShimEnumerator_get_Current_m26319_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m26320_gshared (ShimEnumerator_t5998 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m26320(__this, method) (( void (*) (ShimEnumerator_t5998 *, const MethodInfo*))ShimEnumerator_Reset_m26320_gshared)(__this, method)
