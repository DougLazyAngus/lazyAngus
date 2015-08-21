#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8312;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1556;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m59546(__this, ___object, ___method, method) (( void (*) (Action_1_t8312 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23221_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::Invoke(T)
#define Action_1_Invoke_m59547(__this, ___obj, method) (( void (*) (Action_1_t8312 *, Task_1_t1556 *, const MethodInfo*))Action_1_Invoke_m23223_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m59548(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t8312 *, Task_1_t1556 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23225_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Double>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m59549(__this, ___result, method) (( void (*) (Action_1_t8312 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23227_gshared)(__this, ___result, method)
