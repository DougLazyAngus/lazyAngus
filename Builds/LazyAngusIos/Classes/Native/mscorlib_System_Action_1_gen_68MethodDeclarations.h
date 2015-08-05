#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Single>>>
struct Action_1_t8260;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Single>>
struct Task_1_t8259;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Single>>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m58890(__this, ___object, ___method, method) (( void (*) (Action_1_t8260 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22990_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Single>>>::Invoke(T)
#define Action_1_Invoke_m58891(__this, ___obj, method) (( void (*) (Action_1_t8260 *, Task_1_t8259 *, const MethodInfo*))Action_1_Invoke_m22992_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Single>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m58892(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t8260 *, Task_1_t8259 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22994_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Single>>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m58893(__this, ___result, method) (( void (*) (Action_1_t8260 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22996_gshared)(__this, ___result, method)
