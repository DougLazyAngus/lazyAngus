#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int64,System.Double>
struct Func_2_t7365;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int64,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m45800_gshared (Func_2_t7365 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m45800(__this, ___object, ___method, method) (( void (*) (Func_2_t7365 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m45800_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.Double>::Invoke(T)
extern "C" double Func_2_Invoke_m45801_gshared (Func_2_t7365 * __this, int64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m45801(__this, ___arg1, method) (( double (*) (Func_2_t7365 *, int64_t, const MethodInfo*))Func_2_Invoke_m45801_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m45802_gshared (Func_2_t7365 * __this, int64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m45802(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7365 *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m45802_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Func_2_EndInvoke_m45803_gshared (Func_2_t7365 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m45803(__this, ___result, method) (( double (*) (Func_2_t7365 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m45803_gshared)(__this, ___result, method)
