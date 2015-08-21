#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_t8370;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::.ctor(System.Object,System.IntPtr)
// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
#include "System_Core_System_Func_5_gen_0MethodDeclarations.h"
#define Func_5__ctor_m60031(__this, ___object, ___method, method) (( void (*) (Func_5_t8370 *, Object_t *, IntPtr_t, const MethodInfo*))Func_5__ctor_m60032_gshared)(__this, ___object, ___method, method)
// TResult System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(T1,T2,T3,T4)
#define Func_5_Invoke_m60033(__this, ___arg1, ___arg2, ___arg3, ___arg4, method) (( Object_t * (*) (Func_5_t8370 *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_5_Invoke_m60034_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, method)
// System.IAsyncResult System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
#define Func_5_BeginInvoke_m60035(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method) (( Object_t * (*) (Func_5_t8370 *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_5_BeginInvoke_m60036_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method)
// TResult System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::EndInvoke(System.IAsyncResult)
#define Func_5_EndInvoke_m60037(__this, ___result, method) (( Object_t * (*) (Func_5_t8370 *, Object_t *, const MethodInfo*))Func_5_EndInvoke_m60038_gshared)(__this, ___result, method)
