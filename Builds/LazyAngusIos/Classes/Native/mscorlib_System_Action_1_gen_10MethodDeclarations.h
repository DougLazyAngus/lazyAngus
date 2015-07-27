#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<TWResult>
struct Action_1_t269;
// System.Object
struct Object_t;
// TWResult
struct TWResult_t279;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<TWResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m3327(__this, ___object, ___method, method) (( void (*) (Action_1_t269 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19154_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<TWResult>::Invoke(T)
#define Action_1_Invoke_m21168(__this, ___obj, method) (( void (*) (Action_1_t269 *, TWResult_t279 *, const MethodInfo*))Action_1_Invoke_m19156_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<TWResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m21169(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t269 *, TWResult_t279 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19158_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<TWResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m21170(__this, ___result, method) (( void (*) (Action_1_t269 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19160_gshared)(__this, ___result, method)
