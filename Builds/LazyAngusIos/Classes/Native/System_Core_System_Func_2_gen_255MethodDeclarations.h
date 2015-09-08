#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.Single>
struct Func_2_t7381;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m46082_gshared (Func_2_t7381 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m46082(__this, ___object, ___method, method) (( void (*) (Func_2_t7381 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m46082_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m46083_gshared (Func_2_t7381 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m46083(__this, ___arg1, method) (( float (*) (Func_2_t7381 *, int32_t, const MethodInfo*))Func_2_Invoke_m46083_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m46084_gshared (Func_2_t7381 * __this, int32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m46084(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7381 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m46084_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m46085_gshared (Func_2_t7381 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m46085(__this, ___result, method) (( float (*) (Func_2_t7381 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m46085_gshared)(__this, ___result, method)
