#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.Double>
struct Func_2_t6720;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40438_gshared (Func_2_t6720 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40438(__this, ___object, ___method, method) (( void (*) (Func_2_t6720 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40438_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Double>::Invoke(T)
extern "C" double Func_2_Invoke_m40439_gshared (Func_2_t6720 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40439(__this, ___arg1, method) (( double (*) (Func_2_t6720 *, double, const MethodInfo*))Func_2_Invoke_m40439_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40440_gshared (Func_2_t6720 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40440(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6720 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40440_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Func_2_EndInvoke_m40441_gshared (Func_2_t6720 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40441(__this, ___result, method) (( double (*) (Func_2_t6720 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40441_gshared)(__this, ___result, method)
