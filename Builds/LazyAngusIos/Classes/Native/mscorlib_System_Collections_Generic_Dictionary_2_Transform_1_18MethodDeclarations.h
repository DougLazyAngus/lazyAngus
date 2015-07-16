﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3436;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16MethodDeclarations.h"
#define Transform_1__ctor_m18792(__this, ___object, ___method, method) (( void (*) (Transform_1_t3436 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18778_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18793(__this, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Transform_1_t3436 *, String_t*, int32_t, const MethodInfo*))Transform_1_Invoke_m18779_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18794(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3436 *, String_t*, int32_t, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18780_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18795(__this, ___result, method) (( DictionaryEntry_t1718  (*) (Transform_1_t3436 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18781_gshared)(__this, ___result, method)
