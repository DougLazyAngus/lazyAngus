#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.Double>
struct Func_2_t6705;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40263_gshared (Func_2_t6705 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40263(__this, ___object, ___method, method) (( void (*) (Func_2_t6705 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40263_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.Double>::Invoke(T)
extern "C" double Func_2_Invoke_m40264_gshared (Func_2_t6705 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40264(__this, ___arg1, method) (( double (*) (Func_2_t6705 *, int32_t, const MethodInfo*))Func_2_Invoke_m40264_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40265_gshared (Func_2_t6705 * __this, int32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40265(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6705 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40265_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Func_2_EndInvoke_m40266_gshared (Func_2_t6705 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40266(__this, ___result, method) (( double (*) (Func_2_t6705 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40266_gshared)(__this, ___result, method)
