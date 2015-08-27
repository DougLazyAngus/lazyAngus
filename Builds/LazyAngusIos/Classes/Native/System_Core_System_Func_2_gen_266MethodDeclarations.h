#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,Parse.ParseGeoPoint>
struct Func_2_t6864;
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

// System.Void System.Func`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m42054_gshared (Func_2_t6864 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m42054(__this, ___object, ___method, method) (( void (*) (Func_2_t6864 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m42054_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,Parse.ParseGeoPoint>::Invoke(T)
extern "C" ParseGeoPoint_t1248  Func_2_Invoke_m42055_gshared (Func_2_t6864 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m42055(__this, ___arg1, method) (( ParseGeoPoint_t1248  (*) (Func_2_t6864 *, Object_t *, const MethodInfo*))Func_2_Invoke_m42055_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,Parse.ParseGeoPoint>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m42056_gshared (Func_2_t6864 * __this, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m42056(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6864 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m42056_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C" ParseGeoPoint_t1248  Func_2_EndInvoke_m42057_gshared (Func_2_t6864 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m42057(__this, ___result, method) (( ParseGeoPoint_t1248  (*) (Func_2_t6864 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m42057_gshared)(__this, ___result, method)
