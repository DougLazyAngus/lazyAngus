#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t1458;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1318;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m7379(__this, ___object, ___method, method) (( void (*) (Action_1_t1458 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22959_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::Invoke(T)
#define Action_1_Invoke_m29858(__this, ___obj, method) (( void (*) (Action_1_t1458 *, Task_1_t1318 *, const MethodInfo*))Action_1_Invoke_m22961_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.String>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m29859(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1458 *, Task_1_t1318 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22963_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m29860(__this, ___result, method) (( void (*) (Action_1_t1458 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22965_gshared)(__this, ___result, method)
