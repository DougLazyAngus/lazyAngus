#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int64>>
struct Func_2_t8863;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1572;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int64>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m64082(__this, ___object, ___method, method) (( void (*) (Func_2_t8863 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7626_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int64>>::Invoke(T)
#define Func_2_Invoke_m64083(__this, ___arg1, method) (( Task_1_t1572 * (*) (Func_2_t8863 *, Task_t1227 *, const MethodInfo*))Func_2_Invoke_m35410_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m64084(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8863 *, Task_t1227 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35412_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int64>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m64085(__this, ___result, method) (( Task_1_t1572 * (*) (Func_2_t8863 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35414_gshared)(__this, ___result, method)
