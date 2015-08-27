﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t8534;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8525;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m62408_gshared (ShimEnumerator_t8534 * __this, Dictionary_2_t8525 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m62408(__this, ___host, method) (( void (*) (ShimEnumerator_t8534 *, Dictionary_2_t8525 *, const MethodInfo*))ShimEnumerator__ctor_m62408_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m62409_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m62409(__this, method) (( bool (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_MoveNext_m62409_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m62410_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m62410(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_get_Entry_m62410_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m62411_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m62411(__this, method) (( Object_t * (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_get_Key_m62411_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m62412_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m62412(__this, method) (( Object_t * (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_get_Value_m62412_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m62413_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m62413(__this, method) (( Object_t * (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_get_Current_m62413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
extern "C" void ShimEnumerator_Reset_m62414_gshared (ShimEnumerator_t8534 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m62414(__this, method) (( void (*) (ShimEnumerator_t8534 *, const MethodInfo*))ShimEnumerator_Reset_m62414_gshared)(__this, method)
