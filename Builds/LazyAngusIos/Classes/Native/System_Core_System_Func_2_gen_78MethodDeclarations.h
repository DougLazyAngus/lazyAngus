#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>
struct Func_2_t6711;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1411;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_59MethodDeclarations.h"
#define Func_2__ctor_m37556(__this, ___object, ___method, method) (( void (*) (Func_2_t6711 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35330_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>::Invoke(T)
#define Func_2_Invoke_m37557(__this, ___arg1, method) (( int32_t (*) (Func_2_t6711 *, Task_1_t1411 *, const MethodInfo*))Func_2_Invoke_m35332_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m37558(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6711 *, Task_1_t1411 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35334_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m37559(__this, ___result, method) (( int32_t (*) (Func_2_t6711 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35336_gshared)(__this, ___result, method)
