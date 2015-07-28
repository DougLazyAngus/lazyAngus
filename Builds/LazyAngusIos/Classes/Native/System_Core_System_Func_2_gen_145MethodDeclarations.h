#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.SByte>
struct Func_2_t6382;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m36192_gshared (Func_2_t6382 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m36192(__this, ___object, ___method, method) (( void (*) (Func_2_t6382 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36192_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.SByte>::Invoke(T)
extern "C" int8_t Func_2_Invoke_m36193_gshared (Func_2_t6382 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m36193(__this, ___arg1, method) (( int8_t (*) (Func_2_t6382 *, double, const MethodInfo*))Func_2_Invoke_m36193_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m36194_gshared (Func_2_t6382 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m36194(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6382 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36194_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.SByte>::EndInvoke(System.IAsyncResult)
extern "C" int8_t Func_2_EndInvoke_m36195_gshared (Func_2_t6382 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m36195(__this, ___result, method) (( int8_t (*) (Func_2_t6382 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36195_gshared)(__this, ___result, method)
