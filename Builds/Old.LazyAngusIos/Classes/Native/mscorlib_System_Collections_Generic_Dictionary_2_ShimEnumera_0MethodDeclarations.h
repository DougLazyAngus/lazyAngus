﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3392;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1175;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18006_gshared (ShimEnumerator_t3392 * __this, Dictionary_2_t1175 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18006(__this, ___host, method) (( void (*) (ShimEnumerator_t3392 *, Dictionary_2_t1175 *, const MethodInfo*))ShimEnumerator__ctor_m18006_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18007_gshared (ShimEnumerator_t3392 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18007(__this, method) (( bool (*) (ShimEnumerator_t3392 *, const MethodInfo*))ShimEnumerator_MoveNext_m18007_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1710  ShimEnumerator_get_Entry_m18008_gshared (ShimEnumerator_t3392 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18008(__this, method) (( DictionaryEntry_t1710  (*) (ShimEnumerator_t3392 *, const MethodInfo*))ShimEnumerator_get_Entry_m18008_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18009_gshared (ShimEnumerator_t3392 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18009(__this, method) (( Object_t * (*) (ShimEnumerator_t3392 *, const MethodInfo*))ShimEnumerator_get_Key_m18009_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18010_gshared (ShimEnumerator_t3392 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18010(__this, method) (( Object_t * (*) (ShimEnumerator_t3392 *, const MethodInfo*))ShimEnumerator_get_Value_m18010_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18011_gshared (ShimEnumerator_t3392 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18011(__this, method) (( Object_t * (*) (ShimEnumerator_t3392 *, const MethodInfo*))ShimEnumerator_get_Current_m18011_gshared)(__this, method)