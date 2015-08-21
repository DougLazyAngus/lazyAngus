#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t6873;
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

// System.Void System.Comparison`1<Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m42183_gshared (Comparison_1_t6873 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m42183(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6873 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m42183_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Parse.ParseGeoPoint>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m42184_gshared (Comparison_1_t6873 * __this, ParseGeoPoint_t1245  ___x, ParseGeoPoint_t1245  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m42184(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6873 *, ParseGeoPoint_t1245 , ParseGeoPoint_t1245 , const MethodInfo*))Comparison_1_Invoke_m42184_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Parse.ParseGeoPoint>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m42185_gshared (Comparison_1_t6873 * __this, ParseGeoPoint_t1245  ___x, ParseGeoPoint_t1245  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m42185(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6873 *, ParseGeoPoint_t1245 , ParseGeoPoint_t1245 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m42185_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m42186_gshared (Comparison_1_t6873 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m42186(__this, ___result, method) (( int32_t (*) (Comparison_1_t6873 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m42186_gshared)(__this, ___result, method)
