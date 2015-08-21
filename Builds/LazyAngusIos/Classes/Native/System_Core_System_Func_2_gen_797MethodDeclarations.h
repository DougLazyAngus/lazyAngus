#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int16>
struct Func_2_t8255;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1391;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int16>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int16>
#include "System_Core_System_Func_2_gen_147MethodDeclarations.h"
#define Func_2__ctor_m59258(__this, ___object, ___method, method) (( void (*) (Func_2_t8255 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37097_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int16>::Invoke(T)
#define Func_2_Invoke_m59259(__this, ___arg1, method) (( int16_t (*) (Func_2_t8255 *, Task_1_t1391 *, const MethodInfo*))Func_2_Invoke_m37098_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m59260(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8255 *, Task_1_t1391 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37099_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int16>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m59261(__this, ___result, method) (( int16_t (*) (Func_2_t8255 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37100_gshared)(__this, ___result, method)
