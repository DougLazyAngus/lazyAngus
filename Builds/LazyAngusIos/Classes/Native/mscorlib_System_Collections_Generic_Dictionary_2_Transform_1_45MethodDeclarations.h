﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
struct Transform_1_t3942;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_43MethodDeclarations.h"
#define Transform_1__ctor_m26632(__this, ___object, ___method, method) (( void (*) (Transform_1_t3942 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m26607_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m26633(__this, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3942 *, String_t*, int64_t, const MethodInfo*))Transform_1_Invoke_m26608_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m26634(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3942 *, String_t*, int64_t, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m26609_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m26635(__this, ___result, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3942 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m26610_gshared)(__this, ___result, method)
