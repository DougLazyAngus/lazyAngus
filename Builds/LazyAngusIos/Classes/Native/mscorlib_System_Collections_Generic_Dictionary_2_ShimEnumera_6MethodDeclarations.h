#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7125;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7116;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45436_gshared (ShimEnumerator_t7125 * __this, Dictionary_2_t7116 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45436(__this, ___host, method) (( void (*) (ShimEnumerator_t7125 *, Dictionary_2_t7116 *, const MethodInfo*))ShimEnumerator__ctor_m45436_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45437_gshared (ShimEnumerator_t7125 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45437(__this, method) (( bool (*) (ShimEnumerator_t7125 *, const MethodInfo*))ShimEnumerator_MoveNext_m45437_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m45438_gshared (ShimEnumerator_t7125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45438(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t7125 *, const MethodInfo*))ShimEnumerator_get_Entry_m45438_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45439_gshared (ShimEnumerator_t7125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45439(__this, method) (( Object_t * (*) (ShimEnumerator_t7125 *, const MethodInfo*))ShimEnumerator_get_Key_m45439_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45440_gshared (ShimEnumerator_t7125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45440(__this, method) (( Object_t * (*) (ShimEnumerator_t7125 *, const MethodInfo*))ShimEnumerator_get_Value_m45440_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45441_gshared (ShimEnumerator_t7125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45441(__this, method) (( Object_t * (*) (ShimEnumerator_t7125 *, const MethodInfo*))ShimEnumerator_get_Current_m45441_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m45442_gshared (ShimEnumerator_t7125 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45442(__this, method) (( void (*) (ShimEnumerator_t7125 *, const MethodInfo*))ShimEnumerator_Reset_m45442_gshared)(__this, method)
