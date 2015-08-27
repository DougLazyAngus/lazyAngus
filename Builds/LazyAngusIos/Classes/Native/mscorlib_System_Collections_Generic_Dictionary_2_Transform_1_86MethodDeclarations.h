﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Transform_1_t7148;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m45814_gshared (Transform_1_t7148 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m45814(__this, ___object, ___method, method) (( void (*) (Transform_1_t7148 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m45814_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t7033  Transform_1_Invoke_m45815_gshared (Transform_1_t7148 * __this, Object_t * ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m45815(__this, ___key, ___value, method) (( KeyValuePair_2_t7033  (*) (Transform_1_t7148 *, Object_t *, ParseGeoPoint_t1248 , const MethodInfo*))Transform_1_Invoke_m45815_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m45816_gshared (Transform_1_t7148 * __this, Object_t * ___key, ParseGeoPoint_t1248  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m45816(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7148 *, Object_t *, ParseGeoPoint_t1248 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m45816_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7033  Transform_1_EndInvoke_m45817_gshared (Transform_1_t7148 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m45817(__this, ___result, method) (( KeyValuePair_2_t7033  (*) (Transform_1_t7148 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m45817_gshared)(__this, ___result, method)
