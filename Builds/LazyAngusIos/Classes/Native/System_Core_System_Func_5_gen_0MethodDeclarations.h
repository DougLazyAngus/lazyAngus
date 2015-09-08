#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Func_5_t8944;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_5__ctor_m64685_gshared (Func_5_t8944 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_5__ctor_m64685(__this, ___object, ___method, method) (( void (*) (Func_5_t8944 *, Object_t *, IntPtr_t, const MethodInfo*))Func_5__ctor_m64685_gshared)(__this, ___object, ___method, method)
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C" Object_t * Func_5_Invoke_m64687_gshared (Func_5_t8944 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, const MethodInfo* method);
#define Func_5_Invoke_m64687(__this, ___arg1, ___arg2, ___arg3, ___arg4, method) (( Object_t * (*) (Func_5_t8944 *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))Func_5_Invoke_m64687_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, method)
// System.IAsyncResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_5_BeginInvoke_m64689_gshared (Func_5_t8944 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_5_BeginInvoke_m64689(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method) (( Object_t * (*) (Func_5_t8944 *, Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_5_BeginInvoke_m64689_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method)
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_5_EndInvoke_m64691_gshared (Func_5_t8944 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_5_EndInvoke_m64691(__this, ___result, method) (( Object_t * (*) (Func_5_t8944 *, Object_t *, const MethodInfo*))Func_5_EndInvoke_m64691_gshared)(__this, ___result, method)
