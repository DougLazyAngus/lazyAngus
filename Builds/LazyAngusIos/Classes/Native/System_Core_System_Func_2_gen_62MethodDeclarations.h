#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Byte>>
struct Func_2_t5898;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1369;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m30056(__this, ___object, ___method, method) (( void (*) (Func_2_t5898 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7225_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Byte>>::Invoke(T)
#define Func_2_Invoke_m30057(__this, ___arg1, method) (( Task_1_t1369 * (*) (Func_2_t5898 *, Task_t1159 *, const MethodInfo*))Func_2_Invoke_m30058_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m30059(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t5898 *, Task_t1159 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30060_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Byte>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m30061(__this, ___result, method) (( Task_1_t1369 * (*) (Func_2_t5898 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30062_gshared)(__this, ___result, method)
