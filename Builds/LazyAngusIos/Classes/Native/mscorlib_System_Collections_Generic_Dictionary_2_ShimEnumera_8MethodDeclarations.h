﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7060;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7051;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44950_gshared (ShimEnumerator_t7060 * __this, Dictionary_2_t7051 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44950(__this, ___host, method) (( void (*) (ShimEnumerator_t7060 *, Dictionary_2_t7051 *, const MethodInfo*))ShimEnumerator__ctor_m44950_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44951_gshared (ShimEnumerator_t7060 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44951(__this, method) (( bool (*) (ShimEnumerator_t7060 *, const MethodInfo*))ShimEnumerator_MoveNext_m44951_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t2079  ShimEnumerator_get_Entry_m44952_gshared (ShimEnumerator_t7060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44952(__this, method) (( DictionaryEntry_t2079  (*) (ShimEnumerator_t7060 *, const MethodInfo*))ShimEnumerator_get_Entry_m44952_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44953_gshared (ShimEnumerator_t7060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44953(__this, method) (( Object_t * (*) (ShimEnumerator_t7060 *, const MethodInfo*))ShimEnumerator_get_Key_m44953_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44954_gshared (ShimEnumerator_t7060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44954(__this, method) (( Object_t * (*) (ShimEnumerator_t7060 *, const MethodInfo*))ShimEnumerator_get_Value_m44954_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44955_gshared (ShimEnumerator_t7060 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44955(__this, method) (( Object_t * (*) (ShimEnumerator_t7060 *, const MethodInfo*))ShimEnumerator_get_Current_m44955_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m44956_gshared (ShimEnumerator_t7060 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m44956(__this, method) (( void (*) (ShimEnumerator_t7060 *, const MethodInfo*))ShimEnumerator_Reset_m44956_gshared)(__this, method)