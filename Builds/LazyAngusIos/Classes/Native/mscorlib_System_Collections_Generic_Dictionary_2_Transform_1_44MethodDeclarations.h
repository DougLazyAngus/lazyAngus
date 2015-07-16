﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3914;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26014_gshared (Transform_1_t3914 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m26014(__this, ___object, ___method, method) (( void (*) (Transform_1_t3914 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m26014_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1718  Transform_1_Invoke_m26015_gshared (Transform_1_t3914 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m26015(__this, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Transform_1_t3914 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m26015_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m26016_gshared (Transform_1_t3914 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m26016(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3914 *, uint64_t, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m26016_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1718  Transform_1_EndInvoke_m26017_gshared (Transform_1_t3914 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m26017(__this, ___result, method) (( DictionaryEntry_t1718  (*) (Transform_1_t3914 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m26017_gshared)(__this, ___result, method)
