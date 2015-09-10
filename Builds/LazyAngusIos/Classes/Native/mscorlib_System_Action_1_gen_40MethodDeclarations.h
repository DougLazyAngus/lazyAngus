#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t6539;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1398;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m35383(__this, ___object, ___method, method) (( void (*) (Action_1_t6539 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m27650_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>::Invoke(T)
#define Action_1_Invoke_m35384(__this, ___obj, method) (( void (*) (Action_1_t6539 *, Task_1_t1398 *, const MethodInfo*))Action_1_Invoke_m27652_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m35385(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t6539 *, Task_1_t1398 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m27654_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m35386(__this, ___result, method) (( void (*) (Action_1_t6539 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m27656_gshared)(__this, ___result, method)
