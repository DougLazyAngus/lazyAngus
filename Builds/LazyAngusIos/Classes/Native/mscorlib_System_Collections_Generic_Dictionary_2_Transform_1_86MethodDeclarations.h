#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Transform_1_t7141;
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
extern "C" void Transform_1__ctor_m45690_gshared (Transform_1_t7141 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m45690(__this, ___object, ___method, method) (( void (*) (Transform_1_t7141 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m45690_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t7026  Transform_1_Invoke_m45691_gshared (Transform_1_t7141 * __this, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m45691(__this, ___key, ___value, method) (( KeyValuePair_2_t7026  (*) (Transform_1_t7141 *, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Transform_1_Invoke_m45691_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m45692_gshared (Transform_1_t7141 * __this, Object_t * ___key, ParseGeoPoint_t1247  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m45692(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7141 *, Object_t *, ParseGeoPoint_t1247 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m45692_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7026  Transform_1_EndInvoke_m45693_gshared (Transform_1_t7141 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m45693(__this, ___result, method) (( KeyValuePair_2_t7026  (*) (Transform_1_t7141 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m45693_gshared)(__this, ___result, method)
