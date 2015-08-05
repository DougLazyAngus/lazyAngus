#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Int16>
struct Func_2_t8183;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Int16>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int16>
#include "System_Core_System_Func_2_gen_147MethodDeclarations.h"
#define Func_2__ctor_m58507(__this, ___object, ___method, method) (( void (*) (Func_2_t8183 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36340_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::Invoke(T)
#define Func_2_Invoke_m58508(__this, ___arg1, method) (( int16_t (*) (Func_2_t8183 *, Task_t1159 *, const MethodInfo*))Func_2_Invoke_m36341_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58509(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8183 *, Task_t1159 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36342_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58510(__this, ___result, method) (( int16_t (*) (Func_2_t8183 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36343_gshared)(__this, ___result, method)
