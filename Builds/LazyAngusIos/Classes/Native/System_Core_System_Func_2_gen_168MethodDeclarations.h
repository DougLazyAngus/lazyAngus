#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int64,System.UInt16>
struct Func_2_t7120;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int64,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m42716_gshared (Func_2_t7120 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m42716(__this, ___object, ___method, method) (( void (*) (Func_2_t7120 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m42716_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.UInt16>::Invoke(T)
extern "C" uint16_t Func_2_Invoke_m42717_gshared (Func_2_t7120 * __this, int64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m42717(__this, ___arg1, method) (( uint16_t (*) (Func_2_t7120 *, int64_t, const MethodInfo*))Func_2_Invoke_m42717_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m42718_gshared (Func_2_t7120 * __this, int64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m42718(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7120 *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m42718_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" uint16_t Func_2_EndInvoke_m42719_gshared (Func_2_t7120 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m42719(__this, ___result, method) (( uint16_t (*) (Func_2_t7120 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m42719_gshared)(__this, ___result, method)
