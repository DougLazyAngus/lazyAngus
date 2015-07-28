#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t1304;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1283;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m7498(__this, ___object, ___method, method) (( void (*) (Action_1_t1304 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22912_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task[]>::Invoke(T)
#define Action_1_Invoke_m30229(__this, ___obj, method) (( void (*) (Action_1_t1304 *, TaskU5BU5D_t1283*, const MethodInfo*))Action_1_Invoke_m22914_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m30230(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1304 *, TaskU5BU5D_t1283*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22916_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m30231(__this, ___result, method) (( void (*) (Action_1_t1304 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22918_gshared)(__this, ___result, method)
