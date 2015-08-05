#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<TWResult>
struct Action_1_t309;
// System.Object
struct Object_t;
// TWResult
struct TWResult_t319;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<TWResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m3688(__this, ___object, ___method, method) (( void (*) (Action_1_t309 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22990_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<TWResult>::Invoke(T)
#define Action_1_Invoke_m25096(__this, ___obj, method) (( void (*) (Action_1_t309 *, TWResult_t319 *, const MethodInfo*))Action_1_Invoke_m22992_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<TWResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m25097(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t309 *, TWResult_t319 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22994_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<TWResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m25098(__this, ___result, method) (( void (*) (Action_1_t309 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22996_gshared)(__this, ___result, method)
