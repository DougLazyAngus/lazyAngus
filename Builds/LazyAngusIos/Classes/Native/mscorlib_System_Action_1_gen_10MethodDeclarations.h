#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<TWResult>
struct Action_1_t267;
// System.Object
struct Object_t;
// TWResult
struct TWResult_t277;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<TWResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m3320(__this, ___object, ___method, method) (( void (*) (Action_1_t267 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19147_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<TWResult>::Invoke(T)
#define Action_1_Invoke_m21161(__this, ___obj, method) (( void (*) (Action_1_t267 *, TWResult_t277 *, const MethodInfo*))Action_1_Invoke_m19149_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<TWResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m21162(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t267 *, TWResult_t277 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19151_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<TWResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m21163(__this, ___result, method) (( void (*) (Action_1_t267 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19153_gshared)(__this, ___result, method)
