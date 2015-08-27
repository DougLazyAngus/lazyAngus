#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>
struct Action_1_t8253;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Task_1_t8252;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m59267(__this, ___object, ___method, method) (( void (*) (Action_1_t8253 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23253_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>::Invoke(T)
#define Action_1_Invoke_m59268(__this, ___obj, method) (( void (*) (Action_1_t8253 *, Task_1_t8252 *, const MethodInfo*))Action_1_Invoke_m23255_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m59269(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t8253 *, Task_1_t8252 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23257_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m59270(__this, ___result, method) (( void (*) (Action_1_t8253 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23259_gshared)(__this, ___result, method)
