﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>
struct Transform_1_t3543;
// System.Object
struct Object_t;
// System.String
struct String_t;
// FacebookUserInfo
struct FacebookUserInfo_t231;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m20322(__this, ___object, ___method, method) (( void (*) (Transform_1_t3543 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17795_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20323(__this, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3543 *, String_t*, FacebookUserInfo_t231 *, const MethodInfo*))Transform_1_Invoke_m17796_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20324(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3543 *, String_t*, FacebookUserInfo_t231 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17797_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,FacebookUserInfo,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20325(__this, ___result, method) (( DictionaryEntry_t2181  (*) (Transform_1_t3543 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17798_gshared)(__this, ___result, method)
