#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Int64>
struct Func_2_t8219;
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

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Int64>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int64>
#include "System_Core_System_Func_2_gen_198MethodDeclarations.h"
#define Func_2__ctor_m58681(__this, ___object, ___method, method) (( void (*) (Func_2_t8219 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m38510_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int64>::Invoke(T)
#define Func_2_Invoke_m58682(__this, ___arg1, method) (( int64_t (*) (Func_2_t8219 *, Task_t1159 *, const MethodInfo*))Func_2_Invoke_m38511_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58683(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8219 *, Task_t1159 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m38512_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58684(__this, ___result, method) (( int64_t (*) (Func_2_t8219 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m38513_gshared)(__this, ___result, method)
