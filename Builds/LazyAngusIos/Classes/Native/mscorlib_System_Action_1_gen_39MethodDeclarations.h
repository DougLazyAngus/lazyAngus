#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5960;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1367;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m30697(__this, ___object, ___method, method) (( void (*) (Action_1_t5960 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23220_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>::Invoke(T)
#define Action_1_Invoke_m30698(__this, ___obj, method) (( void (*) (Action_1_t5960 *, Task_1_t1367 *, const MethodInfo*))Action_1_Invoke_m23222_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m30699(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t5960 *, Task_1_t1367 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23224_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m30700(__this, ___result, method) (( void (*) (Action_1_t5960 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23226_gshared)(__this, ___result, method)
