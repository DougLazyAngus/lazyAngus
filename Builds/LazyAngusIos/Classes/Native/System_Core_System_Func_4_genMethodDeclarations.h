#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t8296;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::.ctor(System.Object,System.IntPtr)
// System.Func`4<System.Object,System.Object,System.Object,System.Object>
#include "System_Core_System_Func_4_gen_0MethodDeclarations.h"
#define Func_4__ctor_m59255(__this, ___object, ___method, method) (( void (*) (Func_4_t8296 *, Object_t *, IntPtr_t, const MethodInfo*))Func_4__ctor_m59256_gshared)(__this, ___object, ___method, method)
// TResult System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(T1,T2,T3)
#define Func_4_Invoke_m59257(__this, ___arg1, ___arg2, ___arg3, method) (( Object_t * (*) (Func_4_t8296 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_4_Invoke_m59258_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
#define Func_4_BeginInvoke_m59259(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (Func_4_t8296 *, Object_t *, AsyncCallback_t386 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_4_BeginInvoke_m59260_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// TResult System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>::EndInvoke(System.IAsyncResult)
#define Func_4_EndInvoke_m59261(__this, ___result, method) (( Object_t * (*) (Func_4_t8296 *, Object_t *, const MethodInfo*))Func_4_EndInvoke_m59262_gshared)(__this, ___result, method)
