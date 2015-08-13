#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1416;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::.ctor(System.Object,System.IntPtr)
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_genMethodDeclarations.h"
#define Func_3__ctor_m30654(__this, ___object, ___method, method) (( void (*) (Func_3_t1416 *, Object_t *, IntPtr_t, const MethodInfo*))Func_3__ctor_m7382_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(T1,T2)
#define Func_3_Invoke_m30655(__this, ___arg1, ___arg2, method) (( Object_t * (*) (Func_3_t1416 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_3_Invoke_m30656_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
#define Func_3_BeginInvoke_m30657(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Func_3_t1416 *, AsyncCallback_t386 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_3_BeginInvoke_m30658_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::EndInvoke(System.IAsyncResult)
#define Func_3_EndInvoke_m30659(__this, ___result, method) (( Object_t * (*) (Func_3_t1416 *, Object_t *, const MethodInfo*))Func_3_EndInvoke_m30660_gshared)(__this, ___result, method)
