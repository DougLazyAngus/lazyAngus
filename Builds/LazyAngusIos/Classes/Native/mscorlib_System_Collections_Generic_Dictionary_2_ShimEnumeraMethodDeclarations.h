﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t5411;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2854;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21325_gshared (ShimEnumerator_t5411 * __this, Dictionary_2_t2854 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21325(__this, ___host, method) (( void (*) (ShimEnumerator_t5411 *, Dictionary_2_t2854 *, const MethodInfo*))ShimEnumerator__ctor_m21325_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21326_gshared (ShimEnumerator_t5411 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21326(__this, method) (( bool (*) (ShimEnumerator_t5411 *, const MethodInfo*))ShimEnumerator_MoveNext_m21326_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t2140  ShimEnumerator_get_Entry_m21327_gshared (ShimEnumerator_t5411 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21327(__this, method) (( DictionaryEntry_t2140  (*) (ShimEnumerator_t5411 *, const MethodInfo*))ShimEnumerator_get_Entry_m21327_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21328_gshared (ShimEnumerator_t5411 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21328(__this, method) (( Object_t * (*) (ShimEnumerator_t5411 *, const MethodInfo*))ShimEnumerator_get_Key_m21328_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21329_gshared (ShimEnumerator_t5411 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21329(__this, method) (( Object_t * (*) (ShimEnumerator_t5411 *, const MethodInfo*))ShimEnumerator_get_Value_m21329_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21330_gshared (ShimEnumerator_t5411 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21330(__this, method) (( Object_t * (*) (ShimEnumerator_t5411 *, const MethodInfo*))ShimEnumerator_get_Current_m21330_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m21331_gshared (ShimEnumerator_t5411 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21331(__this, method) (( void (*) (ShimEnumerator_t5411 *, const MethodInfo*))ShimEnumerator_Reset_m21331_gshared)(__this, method)
