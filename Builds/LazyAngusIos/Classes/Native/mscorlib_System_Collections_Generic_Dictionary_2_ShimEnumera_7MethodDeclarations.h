#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7033;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7024;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44587_gshared (ShimEnumerator_t7033 * __this, Dictionary_2_t7024 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44587(__this, ___host, method) (( void (*) (ShimEnumerator_t7033 *, Dictionary_2_t7024 *, const MethodInfo*))ShimEnumerator__ctor_m44587_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44588_gshared (ShimEnumerator_t7033 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44588(__this, method) (( bool (*) (ShimEnumerator_t7033 *, const MethodInfo*))ShimEnumerator_MoveNext_m44588_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t2079  ShimEnumerator_get_Entry_m44589_gshared (ShimEnumerator_t7033 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44589(__this, method) (( DictionaryEntry_t2079  (*) (ShimEnumerator_t7033 *, const MethodInfo*))ShimEnumerator_get_Entry_m44589_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44590_gshared (ShimEnumerator_t7033 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44590(__this, method) (( Object_t * (*) (ShimEnumerator_t7033 *, const MethodInfo*))ShimEnumerator_get_Key_m44590_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44591_gshared (ShimEnumerator_t7033 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44591(__this, method) (( Object_t * (*) (ShimEnumerator_t7033 *, const MethodInfo*))ShimEnumerator_get_Value_m44591_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44592_gshared (ShimEnumerator_t7033 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44592(__this, method) (( Object_t * (*) (ShimEnumerator_t7033 *, const MethodInfo*))ShimEnumerator_get_Current_m44592_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m44593_gshared (ShimEnumerator_t7033 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44593(__this, method) (( void (*) (ShimEnumerator_t7033 *, const MethodInfo*))ShimEnumerator_Reset_m44593_gshared)(__this, method)
