#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t6104;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1341;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m32459(__this, ___object, ___method, method) (( void (*) (Action_1_t6104 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22959_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>::Invoke(T)
#define Action_1_Invoke_m32460(__this, ___obj, method) (( void (*) (Action_1_t6104 *, Task_1_t1341 *, const MethodInfo*))Action_1_Invoke_m22961_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m32461(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t6104 *, Task_1_t1341 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22963_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m32462(__this, ___result, method) (( void (*) (Action_1_t6104 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22965_gshared)(__this, ___result, method)
