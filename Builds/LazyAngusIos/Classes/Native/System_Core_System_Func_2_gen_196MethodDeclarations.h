#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.UInt32>
struct Func_2_t7221;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m43892_gshared (Func_2_t7221 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m43892(__this, ___object, ___method, method) (( void (*) (Func_2_t7221 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m43892_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.UInt32>::Invoke(T)
extern "C" uint32_t Func_2_Invoke_m43893_gshared (Func_2_t7221 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m43893(__this, ___arg1, method) (( uint32_t (*) (Func_2_t7221 *, double, const MethodInfo*))Func_2_Invoke_m43893_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m43894_gshared (Func_2_t7221 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m43894(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7221 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m43894_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C" uint32_t Func_2_EndInvoke_m43895_gshared (Func_2_t7221 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m43895(__this, ___result, method) (( uint32_t (*) (Func_2_t7221 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m43895_gshared)(__this, ___result, method)
