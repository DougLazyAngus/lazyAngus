#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Double>
struct Func_2_t8232;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Double>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Double>
#include "System_Core_System_Func_2_gen_237MethodDeclarations.h"
#define Func_2__ctor_m58726(__this, ___object, ___method, method) (( void (*) (Func_2_t8232 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39847_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Double>::Invoke(T)
#define Func_2_Invoke_m58727(__this, ___arg1, method) (( double (*) (Func_2_t8232 *, Task_t1149 *, const MethodInfo*))Func_2_Invoke_m39848_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58728(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8232 *, Task_t1149 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39849_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Double>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58729(__this, ___result, method) (( double (*) (Func_2_t8232 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39850_gshared)(__this, ___result, method)
