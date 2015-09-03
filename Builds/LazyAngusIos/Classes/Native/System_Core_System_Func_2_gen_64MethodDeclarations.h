#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_t1480;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m36056(__this, ___object, ___method, method) (( void (*) (Func_2_t1480 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7626_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::Invoke(T)
#define Func_2_Invoke_m36057(__this, ___arg1, method) (( Object_t * (*) (Func_2_t1480 *, Task_1_t1410 *, const MethodInfo*))Func_2_Invoke_m35410_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m36058(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1480 *, Task_1_t1410 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35412_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m36059(__this, ___result, method) (( Object_t * (*) (Func_2_t1480 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35414_gshared)(__this, ___result, method)
