#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Object>
struct Func_1_t1421;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m30568_gshared (Func_1_t1421 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m30568(__this, ___object, ___method, method) (( void (*) (Func_1_t1421 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m30568_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Object>::Invoke()
extern "C" Object_t * Func_1_Invoke_m30570_gshared (Func_1_t1421 * __this, const MethodInfo* method);
#define Func_1_Invoke_m30570(__this, method) (( Object_t * (*) (Func_1_t1421 *, const MethodInfo*))Func_1_Invoke_m30570_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m30572_gshared (Func_1_t1421 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m30572(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1421 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m30572_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_1_EndInvoke_m30574_gshared (Func_1_t1421 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m30574(__this, ___result, method) (( Object_t * (*) (Func_1_t1421 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m30574_gshared)(__this, ___result, method)
