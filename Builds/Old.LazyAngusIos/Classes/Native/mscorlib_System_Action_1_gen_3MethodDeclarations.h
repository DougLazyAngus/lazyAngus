#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FBAppRequestResult>
struct Action_1_t211;
// System.Object
struct Object_t;
// FBAppRequestResult
struct FBAppRequestResult_t220;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FBAppRequestResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m2706(__this, ___object, ___method, method) (( void (*) (Action_1_t211 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18467_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FBAppRequestResult>::Invoke(T)
#define Action_1_Invoke_m19876(__this, ___obj, method) (( void (*) (Action_1_t211 *, FBAppRequestResult_t220 *, const MethodInfo*))Action_1_Invoke_m18469_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FBAppRequestResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m19877(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t211 *, FBAppRequestResult_t220 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18471_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FBAppRequestResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m19878(__this, ___result, method) (( void (*) (Action_1_t211 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18473_gshared)(__this, ___result, method)
