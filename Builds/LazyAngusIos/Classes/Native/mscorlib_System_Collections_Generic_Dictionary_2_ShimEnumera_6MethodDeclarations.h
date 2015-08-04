#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7017;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7008;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44299_gshared (ShimEnumerator_t7017 * __this, Dictionary_2_t7008 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44299(__this, ___host, method) (( void (*) (ShimEnumerator_t7017 *, Dictionary_2_t7008 *, const MethodInfo*))ShimEnumerator__ctor_m44299_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44300_gshared (ShimEnumerator_t7017 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44300(__this, method) (( bool (*) (ShimEnumerator_t7017 *, const MethodInfo*))ShimEnumerator_MoveNext_m44300_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2088  ShimEnumerator_get_Entry_m44301_gshared (ShimEnumerator_t7017 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44301(__this, method) (( DictionaryEntry_t2088  (*) (ShimEnumerator_t7017 *, const MethodInfo*))ShimEnumerator_get_Entry_m44301_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44302_gshared (ShimEnumerator_t7017 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44302(__this, method) (( Object_t * (*) (ShimEnumerator_t7017 *, const MethodInfo*))ShimEnumerator_get_Key_m44302_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44303_gshared (ShimEnumerator_t7017 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44303(__this, method) (( Object_t * (*) (ShimEnumerator_t7017 *, const MethodInfo*))ShimEnumerator_get_Value_m44303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44304_gshared (ShimEnumerator_t7017 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44304(__this, method) (( Object_t * (*) (ShimEnumerator_t7017 *, const MethodInfo*))ShimEnumerator_get_Current_m44304_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m44305_gshared (ShimEnumerator_t7017 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44305(__this, method) (( void (*) (ShimEnumerator_t7017 *, const MethodInfo*))ShimEnumerator_Reset_m44305_gshared)(__this, method)
