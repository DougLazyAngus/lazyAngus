#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t7069;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7060;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44709_gshared (ShimEnumerator_t7069 * __this, Dictionary_2_t7060 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44709(__this, ___host, method) (( void (*) (ShimEnumerator_t7069 *, Dictionary_2_t7060 *, const MethodInfo*))ShimEnumerator__ctor_m44709_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44710_gshared (ShimEnumerator_t7069 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44710(__this, method) (( bool (*) (ShimEnumerator_t7069 *, const MethodInfo*))ShimEnumerator_MoveNext_m44710_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m44711_gshared (ShimEnumerator_t7069 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44711(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t7069 *, const MethodInfo*))ShimEnumerator_get_Entry_m44711_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44712_gshared (ShimEnumerator_t7069 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44712(__this, method) (( Object_t * (*) (ShimEnumerator_t7069 *, const MethodInfo*))ShimEnumerator_get_Key_m44712_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44713_gshared (ShimEnumerator_t7069 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44713(__this, method) (( Object_t * (*) (ShimEnumerator_t7069 *, const MethodInfo*))ShimEnumerator_get_Value_m44713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44714_gshared (ShimEnumerator_t7069 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44714(__this, method) (( Object_t * (*) (ShimEnumerator_t7069 *, const MethodInfo*))ShimEnumerator_get_Current_m44714_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m44715_gshared (ShimEnumerator_t7069 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44715(__this, method) (( void (*) (ShimEnumerator_t7069 *, const MethodInfo*))ShimEnumerator_Reset_m44715_gshared)(__this, method)
