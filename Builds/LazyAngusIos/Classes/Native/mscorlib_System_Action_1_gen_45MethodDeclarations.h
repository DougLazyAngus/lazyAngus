#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>
struct Action_1_t6682;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6681;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m37141(__this, ___object, ___method, method) (( void (*) (Action_1_t6682 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m27593_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::Invoke(T)
#define Action_1_Invoke_m37142(__this, ___obj, method) (( void (*) (Action_1_t6682 *, Task_1_t6681 *, const MethodInfo*))Action_1_Invoke_m27595_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m37143(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t6682 *, Task_1_t6681 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m27597_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m37144(__this, ___result, method) (( void (*) (Action_1_t6682 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m27599_gshared)(__this, ___result, method)
