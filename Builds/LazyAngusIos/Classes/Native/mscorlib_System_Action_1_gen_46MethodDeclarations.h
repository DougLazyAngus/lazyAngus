#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>
struct Action_1_t6696;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>
struct Task_1_t2465;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m37236(__this, ___object, ___method, method) (( void (*) (Action_1_t6696 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m27650_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::Invoke(T)
#define Action_1_Invoke_m37237(__this, ___obj, method) (( void (*) (Action_1_t6696 *, Task_1_t2465 *, const MethodInfo*))Action_1_Invoke_m27652_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m37238(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t6696 *, Task_1_t2465 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m27654_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m37239(__this, ___result, method) (( void (*) (Action_1_t6696 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m27656_gshared)(__this, ___result, method)
