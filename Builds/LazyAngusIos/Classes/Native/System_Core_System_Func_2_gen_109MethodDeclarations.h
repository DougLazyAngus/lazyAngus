#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.Object>
struct Func_2_t6938;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40293_gshared (Func_2_t6938 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40293(__this, ___object, ___method, method) (( void (*) (Func_2_t6938 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40293_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m40294_gshared (Func_2_t6938 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40294(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6938 *, float, const MethodInfo*))Func_2_Invoke_m40294_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40295_gshared (Func_2_t6938 * __this, float ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40295(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6938 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40295_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m40296_gshared (Func_2_t6938 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40296(__this, ___result, method) (( Object_t * (*) (Func_2_t6938 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40296_gshared)(__this, ___result, method)
