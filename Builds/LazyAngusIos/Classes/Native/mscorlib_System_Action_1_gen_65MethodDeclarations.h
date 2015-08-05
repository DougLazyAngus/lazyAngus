#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8237;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1508;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m58780(__this, ___object, ___method, method) (( void (*) (Action_1_t8237 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22982_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::Invoke(T)
#define Action_1_Invoke_m58781(__this, ___obj, method) (( void (*) (Action_1_t8237 *, Task_1_t1508 *, const MethodInfo*))Action_1_Invoke_m22984_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m58782(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t8237 *, Task_1_t1508 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22986_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m58783(__this, ___result, method) (( void (*) (Action_1_t8237 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22988_gshared)(__this, ___result, method)
