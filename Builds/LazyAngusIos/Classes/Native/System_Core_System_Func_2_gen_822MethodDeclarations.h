#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Single>
struct Func_2_t8255;
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

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_58MethodDeclarations.h"
#define Func_2__ctor_m58862(__this, ___object, ___method, method) (( void (*) (Func_2_t8255 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29625_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Single>::Invoke(T)
#define Func_2_Invoke_m58863(__this, ___arg1, method) (( float (*) (Func_2_t8255 *, Task_t1159 *, const MethodInfo*))Func_2_Invoke_m29627_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58864(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8255 *, Task_t1159 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29629_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Single>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58865(__this, ___result, method) (( float (*) (Func_2_t8255 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29631_gshared)(__this, ___result, method)
