#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.Object>
struct Func_2_t6940;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40315_gshared (Func_2_t6940 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40315(__this, ___object, ___method, method) (( void (*) (Func_2_t6940 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40315_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m40316_gshared (Func_2_t6940 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40316(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6940 *, double, const MethodInfo*))Func_2_Invoke_m40316_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40317_gshared (Func_2_t6940 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40317(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6940 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40317_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m40318_gshared (Func_2_t6940 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40318(__this, ___result, method) (( Object_t * (*) (Func_2_t6940 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40318_gshared)(__this, ___result, method)
