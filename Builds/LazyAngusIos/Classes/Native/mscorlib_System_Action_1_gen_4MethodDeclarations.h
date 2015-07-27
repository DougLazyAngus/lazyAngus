#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FBResult>
struct Action_1_t238;
// System.Object
struct Object_t;
// FBResult
struct FBResult_t241;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FBResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m3276(__this, ___object, ___method, method) (( void (*) (Action_1_t238 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19154_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FBResult>::Invoke(T)
#define Action_1_Invoke_m20946(__this, ___obj, method) (( void (*) (Action_1_t238 *, FBResult_t241 *, const MethodInfo*))Action_1_Invoke_m19156_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FBResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m20947(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t238 *, FBResult_t241 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19158_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FBResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m20948(__this, ___result, method) (( void (*) (Action_1_t238 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19160_gshared)(__this, ___result, method)
