﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t4129;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_63MethodDeclarations.h"
#define Transform_1__ctor_m28841(__this, ___object, ___method, method) (( void (*) (Transform_1_t4129 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m28816_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m28842(__this, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Transform_1_t4129 *, String_t*, bool, const MethodInfo*))Transform_1_Invoke_m28817_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m28843(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4129 *, String_t*, bool, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m28818_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m28844(__this, ___result, method) (( DictionaryEntry_t2181  (*) (Transform_1_t4129 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m28819_gshared)(__this, ___result, method)
