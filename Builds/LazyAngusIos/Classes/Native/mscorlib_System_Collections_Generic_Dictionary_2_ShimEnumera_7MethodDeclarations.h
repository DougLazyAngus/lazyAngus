#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7686;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7677;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m50043_gshared (ShimEnumerator_t7686 * __this, Dictionary_2_t7677 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m50043(__this, ___host, method) (( void (*) (ShimEnumerator_t7686 *, Dictionary_2_t7677 *, const MethodInfo*))ShimEnumerator__ctor_m50043_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m50044_gshared (ShimEnumerator_t7686 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m50044(__this, method) (( bool (*) (ShimEnumerator_t7686 *, const MethodInfo*))ShimEnumerator_MoveNext_m50044_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m50045_gshared (ShimEnumerator_t7686 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m50045(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t7686 *, const MethodInfo*))ShimEnumerator_get_Entry_m50045_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m50046_gshared (ShimEnumerator_t7686 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m50046(__this, method) (( Object_t * (*) (ShimEnumerator_t7686 *, const MethodInfo*))ShimEnumerator_get_Key_m50046_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m50047_gshared (ShimEnumerator_t7686 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m50047(__this, method) (( Object_t * (*) (ShimEnumerator_t7686 *, const MethodInfo*))ShimEnumerator_get_Value_m50047_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m50048_gshared (ShimEnumerator_t7686 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m50048(__this, method) (( Object_t * (*) (ShimEnumerator_t7686 *, const MethodInfo*))ShimEnumerator_get_Current_m50048_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m50049_gshared (ShimEnumerator_t7686 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m50049(__this, method) (( void (*) (ShimEnumerator_t7686 *, const MethodInfo*))ShimEnumerator_Reset_m50049_gshared)(__this, method)
