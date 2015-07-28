﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>
struct Transform_1_t5467;
// System.Object
struct Object_t;
// WP8ADBanner
struct WP8ADBanner_t155;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m23303(__this, ___object, ___method, method) (( void (*) (Transform_1_t5467 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20970_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23304(__this, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Transform_1_t5467 *, int32_t, WP8ADBanner_t155 *, const MethodInfo*))Transform_1_Invoke_m20971_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23305(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5467 *, int32_t, WP8ADBanner_t155 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20972_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23306(__this, ___result, method) (( DictionaryEntry_t2080  (*) (Transform_1_t5467 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20973_gshared)(__this, ___result, method)
