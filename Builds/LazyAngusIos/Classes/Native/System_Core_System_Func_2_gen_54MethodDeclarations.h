#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Int32>
struct Func_2_t2153;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_59MethodDeclarations.h"
#define Func_2__ctor_m7814(__this, ___object, ___method, method) (( void (*) (Func_2_t2153 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m30641_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int32>::Invoke(T)
#define Func_2_Invoke_m32863(__this, ___arg1, method) (( int32_t (*) (Func_2_t2153 *, Task_t1210 *, const MethodInfo*))Func_2_Invoke_m30643_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32864(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2153 *, Task_t1210 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30645_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32865(__this, ___result, method) (( int32_t (*) (Func_2_t2153 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30647_gshared)(__this, ___result, method)
