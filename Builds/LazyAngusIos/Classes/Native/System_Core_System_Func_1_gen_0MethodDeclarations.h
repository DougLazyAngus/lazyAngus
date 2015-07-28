#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t1113;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1310;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m6976(__this, ___object, ___method, method) (( void (*) (Func_1_t1113 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m29814_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::Invoke()
#define Func_1_Invoke_m29859(__this, method) (( Task_1_t1310 * (*) (Func_1_t1113 *, const MethodInfo*))Func_1_Invoke_m29816_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m29860(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1113 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m29818_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m29861(__this, ___result, method) (( Task_1_t1310 * (*) (Func_1_t1113 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m29820_gshared)(__this, ___result, method)
