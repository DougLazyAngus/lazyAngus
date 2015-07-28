#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt32>
struct Func_2_t8193;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1333;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.UInt32>
#include "System_Core_System_Func_2_gen_185MethodDeclarations.h"
#define Func_2__ctor_m58539(__this, ___object, ___method, method) (( void (*) (Func_2_t8193 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37849_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt32>::Invoke(T)
#define Func_2_Invoke_m58540(__this, ___arg1, method) (( uint32_t (*) (Func_2_t8193 *, Task_1_t1333 *, const MethodInfo*))Func_2_Invoke_m37850_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58541(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8193 *, Task_1_t1333 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37851_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.UInt32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58542(__this, ___result, method) (( uint32_t (*) (Func_2_t8193 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37852_gshared)(__this, ___result, method)
