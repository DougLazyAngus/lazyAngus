﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>
struct Transform_1_t3496;
// System.Object
struct Object_t;
// WP8ADBanner
struct WP8ADBanner_t113;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
#define Transform_1__ctor_m19518(__this, ___object, ___method, method) (( void (*) (Transform_1_t3496 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18579_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19519(__this, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Transform_1_t3496 *, int32_t, WP8ADBanner_t113 *, const MethodInfo*))Transform_1_Invoke_m18580_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19520(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3496 *, int32_t, WP8ADBanner_t113 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18581_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,WP8ADBanner,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19521(__this, ___result, method) (( DictionaryEntry_t2180  (*) (Transform_1_t3496 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18582_gshared)(__this, ___result, method)
