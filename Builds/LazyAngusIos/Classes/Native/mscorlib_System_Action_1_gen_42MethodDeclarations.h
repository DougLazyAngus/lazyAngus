#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Action_1_t6027;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1373;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m31338(__this, ___object, ___method, method) (( void (*) (Action_1_t6027 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23233_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::Invoke(T)
#define Action_1_Invoke_m31339(__this, ___obj, method) (( void (*) (Action_1_t6027 *, Task_1_t1373 *, const MethodInfo*))Action_1_Invoke_m23235_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m31340(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t6027 *, Task_1_t1373 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23237_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m31341(__this, ___result, method) (( void (*) (Action_1_t6027 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23239_gshared)(__this, ___result, method)
