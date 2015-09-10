#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t7653;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7644;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m49499_gshared (ShimEnumerator_t7653 * __this, Dictionary_2_t7644 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m49499(__this, ___host, method) (( void (*) (ShimEnumerator_t7653 *, Dictionary_2_t7644 *, const MethodInfo*))ShimEnumerator__ctor_m49499_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m49500_gshared (ShimEnumerator_t7653 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m49500(__this, method) (( bool (*) (ShimEnumerator_t7653 *, const MethodInfo*))ShimEnumerator_MoveNext_m49500_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t2167  ShimEnumerator_get_Entry_m49501_gshared (ShimEnumerator_t7653 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m49501(__this, method) (( DictionaryEntry_t2167  (*) (ShimEnumerator_t7653 *, const MethodInfo*))ShimEnumerator_get_Entry_m49501_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m49502_gshared (ShimEnumerator_t7653 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m49502(__this, method) (( Object_t * (*) (ShimEnumerator_t7653 *, const MethodInfo*))ShimEnumerator_get_Key_m49502_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m49503_gshared (ShimEnumerator_t7653 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m49503(__this, method) (( Object_t * (*) (ShimEnumerator_t7653 *, const MethodInfo*))ShimEnumerator_get_Value_m49503_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m49504_gshared (ShimEnumerator_t7653 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m49504(__this, method) (( Object_t * (*) (ShimEnumerator_t7653 *, const MethodInfo*))ShimEnumerator_get_Current_m49504_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m49505_gshared (ShimEnumerator_t7653 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m49505(__this, method) (( void (*) (ShimEnumerator_t7653 *, const MethodInfo*))ShimEnumerator_Reset_m49505_gshared)(__this, method)
