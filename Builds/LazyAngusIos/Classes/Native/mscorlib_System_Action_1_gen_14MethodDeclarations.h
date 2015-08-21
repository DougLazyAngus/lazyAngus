#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.IAsyncResult>
struct Action_1_t1358;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.IAsyncResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m7292(__this, ___object, ___method, method) (( void (*) (Action_1_t1358 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23220_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.IAsyncResult>::Invoke(T)
#define Action_1_Invoke_m30752(__this, ___obj, method) (( void (*) (Action_1_t1358 *, Object_t *, const MethodInfo*))Action_1_Invoke_m23222_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.IAsyncResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m30753(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1358 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23224_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.IAsyncResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m30754(__this, ___result, method) (( void (*) (Action_1_t1358 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23226_gshared)(__this, ___result, method)
