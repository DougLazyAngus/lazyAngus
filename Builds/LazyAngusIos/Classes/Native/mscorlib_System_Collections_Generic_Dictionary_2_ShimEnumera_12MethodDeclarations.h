#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t8527;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8518;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m62287_gshared (ShimEnumerator_t8527 * __this, Dictionary_2_t8518 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m62287(__this, ___host, method) (( void (*) (ShimEnumerator_t8527 *, Dictionary_2_t8518 *, const MethodInfo*))ShimEnumerator__ctor_m62287_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m62288_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m62288(__this, method) (( bool (*) (ShimEnumerator_t8527 *, const MethodInfo*))ShimEnumerator_MoveNext_m62288_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2139  ShimEnumerator_get_Entry_m62289_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m62289(__this, method) (( DictionaryEntry_t2139  (*) (ShimEnumerator_t8527 *, const MethodInfo*))ShimEnumerator_get_Entry_m62289_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m62290_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m62290(__this, method) (( Object_t * (*) (ShimEnumerator_t8527 *, const MethodInfo*))ShimEnumerator_get_Key_m62290_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m62291_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m62291(__this, method) (( Object_t * (*) (ShimEnumerator_t8527 *, const MethodInfo*))ShimEnumerator_get_Value_m62291_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m62292_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m62292(__this, method) (( Object_t * (*) (ShimEnumerator_t8527 *, const MethodInfo*))ShimEnumerator_get_Current_m62292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m62293_gshared (ShimEnumerator_t8527 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m62293(__this, method) (( void (*) (ShimEnumerator_t8527 *, const MethodInfo*))ShimEnumerator_Reset_m62293_gshared)(__this, method)
