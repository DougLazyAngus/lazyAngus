#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.UInt64>
struct Func_2_t6659;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m39587_gshared (Func_2_t6659 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m39587(__this, ___object, ___method, method) (( void (*) (Func_2_t6659 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39587_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.UInt64>::Invoke(T)
extern "C" uint64_t Func_2_Invoke_m39588_gshared (Func_2_t6659 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m39588(__this, ___arg1, method) (( uint64_t (*) (Func_2_t6659 *, double, const MethodInfo*))Func_2_Invoke_m39588_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m39589_gshared (Func_2_t6659 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m39589(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6659 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39589_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Func_2_EndInvoke_m39590_gshared (Func_2_t6659 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m39590(__this, ___result, method) (( uint64_t (*) (Func_2_t6659 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39590_gshared)(__this, ___result, method)
