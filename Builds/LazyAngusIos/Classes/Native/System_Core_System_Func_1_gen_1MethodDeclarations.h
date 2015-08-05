#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1121;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m7043(__this, ___object, ___method, method) (( void (*) (Func_1_t1121 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m29884_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::Invoke()
#define Func_1_Invoke_m29932(__this, method) (( Task_t1158 * (*) (Func_1_t1121 *, const MethodInfo*))Func_1_Invoke_m29886_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Threading.Tasks.Task>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m29933(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1121 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m29888_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m29934(__this, ___result, method) (( Task_t1158 * (*) (Func_1_t1121 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m29890_gshared)(__this, ___result, method)
