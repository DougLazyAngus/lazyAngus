#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.UInt64>
struct Func_2_t7312;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m45047_gshared (Func_2_t7312 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m45047(__this, ___object, ___method, method) (( void (*) (Func_2_t7312 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m45047_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.UInt64>::Invoke(T)
extern "C" uint64_t Func_2_Invoke_m45048_gshared (Func_2_t7312 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m45048(__this, ___arg1, method) (( uint64_t (*) (Func_2_t7312 *, double, const MethodInfo*))Func_2_Invoke_m45048_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m45049_gshared (Func_2_t7312 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m45049(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7312 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m45049_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Func_2_EndInvoke_m45050_gshared (Func_2_t7312 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m45050(__this, ___result, method) (( uint64_t (*) (Func_2_t7312 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m45050_gshared)(__this, ___result, method)
