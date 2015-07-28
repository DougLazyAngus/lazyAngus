#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseGeoPoint,System.Object>
struct Func_2_t6771;
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

// System.Void System.Func`2<Parse.ParseGeoPoint,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m41151_gshared (Func_2_t6771 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m41151(__this, ___object, ___method, method) (( void (*) (Func_2_t6771 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m41151_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseGeoPoint,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m41152_gshared (Func_2_t6771 * __this, ParseGeoPoint_t1186  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m41152(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6771 *, ParseGeoPoint_t1186 , const MethodInfo*))Func_2_Invoke_m41152_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseGeoPoint,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m41153_gshared (Func_2_t6771 * __this, ParseGeoPoint_t1186  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m41153(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6771 *, ParseGeoPoint_t1186 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m41153_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseGeoPoint,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m41154_gshared (Func_2_t6771 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m41154(__this, ___result, method) (( Object_t * (*) (Func_2_t6771 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m41154_gshared)(__this, ___result, method)
