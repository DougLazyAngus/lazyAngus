#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<TW_APIRequstResult>
struct Action_1_t336;
// System.Object
struct Object_t;
// TW_APIRequstResult
struct TW_APIRequstResult_t322;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<TW_APIRequstResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m3635(__this, ___object, ___method, method) (( void (*) (Action_1_t336 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22912_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<TW_APIRequstResult>::Invoke(T)
#define Action_1_Invoke_m25432(__this, ___obj, method) (( void (*) (Action_1_t336 *, TW_APIRequstResult_t322 *, const MethodInfo*))Action_1_Invoke_m22914_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<TW_APIRequstResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m25433(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t336 *, TW_APIRequstResult_t322 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22916_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<TW_APIRequstResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m25434(__this, ___result, method) (( void (*) (Action_1_t336 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22918_gshared)(__this, ___result, method)
