#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Boolean>
struct Func_2_t1345;
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

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m7823(__this, ___object, ___method, method) (( void (*) (Func_2_t1345 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m30299_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m60022(__this, ___arg1, method) (( bool (*) (Func_2_t1345 *, Task_t1211 *, const MethodInfo*))Func_2_Invoke_m30301_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m60023(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1345 *, Task_t1211 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30303_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m60024(__this, ___result, method) (( bool (*) (Func_2_t1345 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30305_gshared)(__this, ___result, method)
