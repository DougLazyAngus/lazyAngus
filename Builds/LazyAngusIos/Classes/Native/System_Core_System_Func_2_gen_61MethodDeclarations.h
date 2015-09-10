#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Byte>
struct Func_2_t2182;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Byte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m35444(__this, ___object, ___method, method) (( void (*) (Func_2_t2182 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34935_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Byte>::Invoke(T)
#define Func_2_Invoke_m35445(__this, ___arg1, method) (( uint8_t (*) (Func_2_t2182 *, Task_t1238 *, const MethodInfo*))Func_2_Invoke_m34937_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m35446(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2182 *, Task_t1238 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34939_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Byte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m35447(__this, ___result, method) (( uint8_t (*) (Func_2_t2182 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34941_gshared)(__this, ___result, method)
