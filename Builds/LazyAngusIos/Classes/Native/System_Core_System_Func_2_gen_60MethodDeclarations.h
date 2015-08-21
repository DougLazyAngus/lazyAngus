#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Byte>
struct Func_2_t1417;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1368;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Byte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m30769(__this, ___object, ___method, method) (( void (*) (Func_2_t1417 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m30267_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Byte>::Invoke(T)
#define Func_2_Invoke_m30770(__this, ___arg1, method) (( uint8_t (*) (Func_2_t1417 *, Task_1_t1368 *, const MethodInfo*))Func_2_Invoke_m30269_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m30771(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1417 *, Task_1_t1368 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30271_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Byte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m30772(__this, ___result, method) (( uint8_t (*) (Func_2_t1417 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30273_gshared)(__this, ___result, method)
