#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>
struct Func_2_t1443;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1340;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m33364(__this, ___object, ___method, method) (( void (*) (Func_2_t1443 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29471_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::Invoke(T)
#define Func_2_Invoke_m33365(__this, ___arg1, method) (( uint8_t (*) (Func_2_t1443 *, Task_1_t1340 *, const MethodInfo*))Func_2_Invoke_m29473_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m33366(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1443 *, Task_1_t1340 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29475_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m33367(__this, ___result, method) (( uint8_t (*) (Func_2_t1443 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29477_gshared)(__this, ___result, method)
