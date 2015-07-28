﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>
struct Transform_1_t7050;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m44723_gshared (Transform_1_t7050 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m44723(__this, ___object, ___method, method) (( void (*) (Transform_1_t7050 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m44723_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2079  Transform_1_Invoke_m44725_gshared (Transform_1_t7050 * __this, Object_t * ___key, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m44725(__this, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Transform_1_t7050 *, Object_t *, ParseGeoPoint_t1185 , const MethodInfo*))Transform_1_Invoke_m44725_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m44727_gshared (Transform_1_t7050 * __this, Object_t * ___key, ParseGeoPoint_t1185  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m44727(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7050 *, Object_t *, ParseGeoPoint_t1185 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m44727_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2079  Transform_1_EndInvoke_m44729_gshared (Transform_1_t7050 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m44729(__this, ___result, method) (( DictionaryEntry_t2079  (*) (Transform_1_t7050 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m44729_gshared)(__this, ___result, method)