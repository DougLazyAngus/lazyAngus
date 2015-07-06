#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FBPostResult>
struct Action_1_t208;
// System.Object
struct Object_t;
// FBPostResult
struct FBPostResult_t222;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FBPostResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m2575(__this, ___object, ___method, method) (( void (*) (Action_1_t208 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18287_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FBPostResult>::Invoke(T)
#define Action_1_Invoke_m19683(__this, ___obj, method) (( void (*) (Action_1_t208 *, FBPostResult_t222 *, const MethodInfo*))Action_1_Invoke_m18289_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FBPostResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m19684(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t208 *, FBPostResult_t222 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18291_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FBPostResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m19685(__this, ___result, method) (( void (*) (Action_1_t208 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18293_gshared)(__this, ___result, method)
