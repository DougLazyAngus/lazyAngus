#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<TW_APIRequstResult>
struct Action_1_t268;
// System.Object
struct Object_t;
// TW_APIRequstResult
struct TW_APIRequstResult_t254;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<TW_APIRequstResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m2747(__this, ___object, ___method, method) (( void (*) (Action_1_t268 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18442_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<TW_APIRequstResult>::Invoke(T)
#define Action_1_Invoke_m20464(__this, ___obj, method) (( void (*) (Action_1_t268 *, TW_APIRequstResult_t254 *, const MethodInfo*))Action_1_Invoke_m18444_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<TW_APIRequstResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m20465(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t268 *, TW_APIRequstResult_t254 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18446_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<TW_APIRequstResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m20466(__this, ___result, method) (( void (*) (Action_1_t268 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18448_gshared)(__this, ___result, method)
