#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Double>
struct Func_2_t8320;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Double>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Double>
#include "System_Core_System_Func_2_gen_237MethodDeclarations.h"
#define Func_2__ctor_m59594(__this, ___object, ___method, method) (( void (*) (Func_2_t8320 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40715_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Double>::Invoke(T)
#define Func_2_Invoke_m59595(__this, ___arg1, method) (( double (*) (Func_2_t8320 *, Task_t1211 *, const MethodInfo*))Func_2_Invoke_m40716_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m59596(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8320 *, Task_t1211 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40717_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Double>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m59597(__this, ___result, method) (( double (*) (Func_2_t8320 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40718_gshared)(__this, ___result, method)
