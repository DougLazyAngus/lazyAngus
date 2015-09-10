#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t8820;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1579;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m63899(__this, ___object, ___method, method) (( void (*) (Action_1_t8820 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m27650_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>::Invoke(T)
#define Action_1_Invoke_m63900(__this, ___obj, method) (( void (*) (Action_1_t8820 *, Task_1_t1579 *, const MethodInfo*))Action_1_Invoke_m27652_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m63901(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t8820 *, Task_1_t1579 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m27654_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m63902(__this, ___result, method) (( void (*) (Action_1_t8820 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m27656_gshared)(__this, ___result, method)
