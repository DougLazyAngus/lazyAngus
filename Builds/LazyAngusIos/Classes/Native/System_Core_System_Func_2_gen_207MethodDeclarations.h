#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt64,System.Int64>
struct Func_2_t7254;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt64,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m44352_gshared (Func_2_t7254 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m44352(__this, ___object, ___method, method) (( void (*) (Func_2_t7254 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m44352_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt64,System.Int64>::Invoke(T)
extern "C" int64_t Func_2_Invoke_m44353_gshared (Func_2_t7254 * __this, uint64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m44353(__this, ___arg1, method) (( int64_t (*) (Func_2_t7254 *, uint64_t, const MethodInfo*))Func_2_Invoke_m44353_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt64,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m44354_gshared (Func_2_t7254 * __this, uint64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m44354(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7254 *, uint64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m44354_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt64,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Func_2_EndInvoke_m44355_gshared (Func_2_t7254 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m44355(__this, ___result, method) (( int64_t (*) (Func_2_t7254 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m44355_gshared)(__this, ___result, method)
