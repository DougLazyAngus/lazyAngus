#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>>
struct Action_1_t8274;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Task_1_t8273;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m59351(__this, ___object, ___method, method) (( void (*) (Action_1_t8274 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23221_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>>::Invoke(T)
#define Action_1_Invoke_m59352(__this, ___obj, method) (( void (*) (Action_1_t8274 *, Task_1_t8273 *, const MethodInfo*))Action_1_Invoke_m23223_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m59353(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t8274 *, Task_1_t8273 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23225_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m59354(__this, ___result, method) (( void (*) (Action_1_t8274 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23227_gshared)(__this, ___result, method)
