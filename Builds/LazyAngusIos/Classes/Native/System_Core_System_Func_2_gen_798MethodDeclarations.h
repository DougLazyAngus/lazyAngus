#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Int16>
struct Func_2_t8253;
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

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Int16>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int16>
#include "System_Core_System_Func_2_gen_147MethodDeclarations.h"
#define Func_2__ctor_m59176(__this, ___object, ___method, method) (( void (*) (Func_2_t8253 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37009_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::Invoke(T)
#define Func_2_Invoke_m59177(__this, ___arg1, method) (( int16_t (*) (Func_2_t8253 *, Task_t1210 *, const MethodInfo*))Func_2_Invoke_m37010_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m59178(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8253 *, Task_t1210 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37011_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Int16>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m59179(__this, ___result, method) (( int16_t (*) (Func_2_t8253 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37012_gshared)(__this, ___result, method)
