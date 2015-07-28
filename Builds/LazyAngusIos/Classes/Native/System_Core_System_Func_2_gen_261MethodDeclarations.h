#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.Single>
struct Func_2_t6746;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40816_gshared (Func_2_t6746 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40816(__this, ___object, ___method, method) (( void (*) (Func_2_t6746 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40816_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m40817_gshared (Func_2_t6746 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40817(__this, ___arg1, method) (( float (*) (Func_2_t6746 *, float, const MethodInfo*))Func_2_Invoke_m40817_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40818_gshared (Func_2_t6746 * __this, float ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40818(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6746 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40818_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m40819_gshared (Func_2_t6746 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40819(__this, ___result, method) (( float (*) (Func_2_t6746 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40819_gshared)(__this, ___result, method)
