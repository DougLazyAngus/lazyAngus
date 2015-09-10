#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseInstallation>,Parse.ParseInstallation>
struct Func_2_t6853;
// System.Object
struct Object_t;
// Parse.ParseInstallation
struct ParseInstallation_t1316;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6855;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseInstallation>,Parse.ParseInstallation>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m39359(__this, ___object, ___method, method) (( void (*) (Func_2_t6853 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7697_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseInstallation>,Parse.ParseInstallation>::Invoke(T)
#define Func_2_Invoke_m39360(__this, ___arg1, method) (( ParseInstallation_t1316 * (*) (Func_2_t6853 *, Task_1_t6855 *, const MethodInfo*))Func_2_Invoke_m35492_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseInstallation>,Parse.ParseInstallation>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39361(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6853 *, Task_1_t6855 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35494_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseInstallation>,Parse.ParseInstallation>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39362(__this, ___result, method) (( ParseInstallation_t1316 * (*) (Func_2_t6853 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35496_gshared)(__this, ___result, method)
