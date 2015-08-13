#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_t1463;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1393;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m31373(__this, ___object, ___method, method) (( void (*) (Func_2_t1463 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7469_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::Invoke(T)
#define Func_2_Invoke_m31374(__this, ___arg1, method) (( Object_t * (*) (Func_2_t1463 *, Task_1_t1393 *, const MethodInfo*))Func_2_Invoke_m30734_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m31375(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1463 *, Task_1_t1393 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30736_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m31376(__this, ___result, method) (( Object_t * (*) (Func_2_t1463 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30738_gshared)(__this, ___result, method)
