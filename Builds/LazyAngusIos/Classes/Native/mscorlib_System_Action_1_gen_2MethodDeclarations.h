#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FBPostResult>
struct Action_1_t276;
// System.Object
struct Object_t;
// FBPostResult
struct FBPostResult_t290;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FBPostResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m3620(__this, ___object, ___method, method) (( void (*) (Action_1_t276 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22975_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FBPostResult>::Invoke(T)
#define Action_1_Invoke_m24839(__this, ___obj, method) (( void (*) (Action_1_t276 *, FBPostResult_t290 *, const MethodInfo*))Action_1_Invoke_m22977_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FBPostResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m24840(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t276 *, FBPostResult_t290 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22979_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FBPostResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m24841(__this, ___result, method) (( void (*) (Action_1_t276 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22981_gshared)(__this, ___result, method)
