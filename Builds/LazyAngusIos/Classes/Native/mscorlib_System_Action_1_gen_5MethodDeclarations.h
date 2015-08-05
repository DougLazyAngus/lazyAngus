#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FBAppRequestResult>
struct Action_1_t279;
// System.Object
struct Object_t;
// FBAppRequestResult
struct FBAppRequestResult_t288;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FBAppRequestResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m3638(__this, ___object, ___method, method) (( void (*) (Action_1_t279 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22990_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FBAppRequestResult>::Invoke(T)
#define Action_1_Invoke_m24867(__this, ___obj, method) (( void (*) (Action_1_t279 *, FBAppRequestResult_t288 *, const MethodInfo*))Action_1_Invoke_m22992_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FBAppRequestResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m24868(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t279 *, FBAppRequestResult_t288 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22994_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FBAppRequestResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m24869(__this, ___result, method) (( void (*) (Action_1_t279 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22996_gshared)(__this, ___result, method)
