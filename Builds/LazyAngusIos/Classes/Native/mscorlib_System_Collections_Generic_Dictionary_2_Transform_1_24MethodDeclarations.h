﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>
struct Transform_1_t5497;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m23821(__this, ___object, ___method, method) (( void (*) (Transform_1_t5497 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20970_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23822(__this, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Transform_1_t5497 *, int32_t, GPScore_t343 *, const MethodInfo*))Transform_1_Invoke_m20971_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23823(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5497 *, int32_t, GPScore_t343 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20972_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,GPScore,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23824(__this, ___result, method) (( DictionaryEntry_t2080  (*) (Transform_1_t5497 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20973_gshared)(__this, ___result, method)
