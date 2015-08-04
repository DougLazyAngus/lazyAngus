#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.UInt32>
struct Func_2_t6567;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m38425_gshared (Func_2_t6567 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m38425(__this, ___object, ___method, method) (( void (*) (Func_2_t6567 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m38425_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.UInt32>::Invoke(T)
extern "C" uint32_t Func_2_Invoke_m38426_gshared (Func_2_t6567 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m38426(__this, ___arg1, method) (( uint32_t (*) (Func_2_t6567 *, double, const MethodInfo*))Func_2_Invoke_m38426_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m38427_gshared (Func_2_t6567 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m38427(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6567 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m38427_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C" uint32_t Func_2_EndInvoke_m38428_gshared (Func_2_t6567 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m38428(__this, ___result, method) (( uint32_t (*) (Func_2_t6567 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m38428_gshared)(__this, ___result, method)
