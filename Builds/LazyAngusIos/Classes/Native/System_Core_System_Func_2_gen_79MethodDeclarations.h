#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t6073;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1321;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m32189(__this, ___object, ___method, method) (( void (*) (Func_2_t6073 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7222_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int32>>::Invoke(T)
#define Func_2_Invoke_m32190(__this, ___arg1, method) (( Task_1_t1321 * (*) (Func_2_t6073 *, Task_t1159 *, const MethodInfo*))Func_2_Invoke_m30055_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32191(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6073 *, Task_t1159 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30057_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int32>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32192(__this, ___result, method) (( Task_1_t1321 * (*) (Func_2_t6073 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30059_gshared)(__this, ___result, method)
