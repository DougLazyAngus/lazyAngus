#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Object>
struct Func_2_t1383;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7086(__this, ___object, ___method, method) (( void (*) (Func_2_t1383 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7217_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Object>::Invoke(T)
#define Func_2_Invoke_m30055(__this, ___arg1, method) (( Object_t * (*) (Func_2_t1383 *, Task_t1158 *, const MethodInfo*))Func_2_Invoke_m30050_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m30056(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1383 *, Task_t1158 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30052_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m30057(__this, ___result, method) (( Object_t * (*) (Func_2_t1383 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30054_gshared)(__this, ___result, method)
