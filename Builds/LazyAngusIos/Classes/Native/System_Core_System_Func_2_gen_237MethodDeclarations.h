#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Double>
struct Func_2_t7331;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m45377_gshared (Func_2_t7331 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m45377(__this, ___object, ___method, method) (( void (*) (Func_2_t7331 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m45377_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Double>::Invoke(T)
extern "C" double Func_2_Invoke_m45378_gshared (Func_2_t7331 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m45378(__this, ___arg1, method) (( double (*) (Func_2_t7331 *, Object_t *, const MethodInfo*))Func_2_Invoke_m45378_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m45379_gshared (Func_2_t7331 * __this, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m45379(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7331 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m45379_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Func_2_EndInvoke_m45380_gshared (Func_2_t7331 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m45380(__this, ___result, method) (( double (*) (Func_2_t7331 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m45380_gshared)(__this, ___result, method)
