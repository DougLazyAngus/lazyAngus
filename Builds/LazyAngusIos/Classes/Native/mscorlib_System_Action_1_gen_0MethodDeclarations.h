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
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FBPostResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m2435(__this, ___object, ___method, method) (( void (*) (Action_1_t208 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18139_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FBPostResult>::Invoke(T)
#define Action_1_Invoke_m19535(__this, ___obj, method) (( void (*) (Action_1_t208 *, FBPostResult_t222 *, const MethodInfo*))Action_1_Invoke_m18141_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FBPostResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m19536(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t208 *, FBPostResult_t222 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18143_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FBPostResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m19537(__this, ___result, method) (( void (*) (Action_1_t208 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18145_gshared)(__this, ___result, method)
