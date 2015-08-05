#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Object>
struct Transform_1_t7066;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m45002_gshared (Transform_1_t7066 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m45002(__this, ___object, ___method, method) (( void (*) (Transform_1_t7066 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m45002_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m45003_gshared (Transform_1_t7066 * __this, Object_t * ___key, ParseGeoPoint_t1195  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m45003(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t7066 *, Object_t *, ParseGeoPoint_t1195 , const MethodInfo*))Transform_1_Invoke_m45003_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m45004_gshared (Transform_1_t7066 * __this, Object_t * ___key, ParseGeoPoint_t1195  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m45004(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7066 *, Object_t *, ParseGeoPoint_t1195 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m45004_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m45005_gshared (Transform_1_t7066 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m45005(__this, ___result, method) (( Object_t * (*) (Transform_1_t7066 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m45005_gshared)(__this, ___result, method)
