#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Action_1_t6680;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1410;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m37117(__this, ___object, ___method, method) (( void (*) (Action_1_t6680 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m27593_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::Invoke(T)
#define Action_1_Invoke_m37118(__this, ___obj, method) (( void (*) (Action_1_t6680 *, Task_1_t1410 *, const MethodInfo*))Action_1_Invoke_m27595_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m37119(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t6680 *, Task_1_t1410 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m27597_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m37120(__this, ___result, method) (( void (*) (Action_1_t6680 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m27599_gshared)(__this, ___result, method)
