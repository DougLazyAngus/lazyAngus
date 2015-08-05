#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Action_1_t1377;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1323;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m7062(__this, ___object, ___method, method) (( void (*) (Action_1_t1377 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22987_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::Invoke(T)
#define Action_1_Invoke_m30672(__this, ___obj, method) (( void (*) (Action_1_t1377 *, Task_1_t1323 *, const MethodInfo*))Action_1_Invoke_m22989_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m30673(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1377 *, Task_1_t1323 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22991_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m30674(__this, ___result, method) (( void (*) (Action_1_t1377 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22993_gshared)(__this, ___result, method)
