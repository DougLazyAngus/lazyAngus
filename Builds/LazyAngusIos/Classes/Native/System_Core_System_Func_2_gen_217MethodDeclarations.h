#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.UInt64>
struct Func_2_t6717;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40104_gshared (Func_2_t6717 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40104(__this, ___object, ___method, method) (( void (*) (Func_2_t6717 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40104_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.UInt64>::Invoke(T)
extern "C" uint64_t Func_2_Invoke_m40105_gshared (Func_2_t6717 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40105(__this, ___arg1, method) (( uint64_t (*) (Func_2_t6717 *, int32_t, const MethodInfo*))Func_2_Invoke_m40105_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40106_gshared (Func_2_t6717 * __this, int32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40106(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6717 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40106_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Func_2_EndInvoke_m40107_gshared (Func_2_t6717 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40107(__this, ___result, method) (( uint64_t (*) (Func_2_t6717 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40107_gshared)(__this, ___result, method)
