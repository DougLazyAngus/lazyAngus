#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1118;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m7023(__this, ___object, ___method, method) (( void (*) (Func_1_t1118 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m29861_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::Invoke()
#define Func_1_Invoke_m29909(__this, method) (( Task_t1155 * (*) (Func_1_t1118 *, const MethodInfo*))Func_1_Invoke_m29863_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Threading.Tasks.Task>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m29910(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1118 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m29865_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m29911(__this, ___result, method) (( Task_t1155 * (*) (Func_1_t1118 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m29867_gshared)(__this, ___result, method)
