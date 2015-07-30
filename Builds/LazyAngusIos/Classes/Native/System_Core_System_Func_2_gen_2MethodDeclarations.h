#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>
struct Func_2_t1364;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1317;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m7011(__this, ___object, ___method, method) (( void (*) (Func_2_t1364 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29471_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m29970(__this, ___arg1, method) (( bool (*) (Func_2_t1364 *, Task_1_t1317 *, const MethodInfo*))Func_2_Invoke_m29473_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m29971(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1364 *, Task_1_t1317 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29475_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m29972(__this, ___result, method) (( bool (*) (Func_2_t1364 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29477_gshared)(__this, ___result, method)
