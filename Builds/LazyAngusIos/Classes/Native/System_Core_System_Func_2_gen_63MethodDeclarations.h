#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>
struct Func_2_t5996;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
struct Tuple_2_t2366;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m31044(__this, ___object, ___method, method) (( void (*) (Func_2_t5996 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7469_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>::Invoke(T)
#define Func_2_Invoke_m31045(__this, ___arg1, method) (( Task_t1210 * (*) (Func_2_t5996 *, Tuple_2_t2366 *, const MethodInfo*))Func_2_Invoke_m30734_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m31046(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t5996 *, Tuple_2_t2366 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30736_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m31047(__this, ___result, method) (( Task_t1210 * (*) (Func_2_t5996 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30738_gshared)(__this, ___result, method)
