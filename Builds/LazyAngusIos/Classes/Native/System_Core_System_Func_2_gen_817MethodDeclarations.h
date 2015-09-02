#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Double>
struct Func_2_t8347;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Double>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Double>
#include "System_Core_System_Func_2_gen_237MethodDeclarations.h"
#define Func_2__ctor_m59920(__this, ___object, ___method, method) (( void (*) (Func_2_t8347 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m41047_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Double>::Invoke(T)
#define Func_2_Invoke_m59921(__this, ___arg1, method) (( double (*) (Func_2_t8347 *, Task_1_t1410 *, const MethodInfo*))Func_2_Invoke_m41048_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m59922(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8347 *, Task_1_t1410 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m41049_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Double>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m59923(__this, ___result, method) (( double (*) (Func_2_t8347 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m41050_gshared)(__this, ___result, method)
