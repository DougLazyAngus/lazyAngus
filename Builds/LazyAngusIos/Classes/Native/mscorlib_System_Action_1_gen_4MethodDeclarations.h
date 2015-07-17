#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FBResult>
struct Action_1_t236;
// System.Object
struct Object_t;
// FBResult
struct FBResult_t239;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FBResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m3261(__this, ___object, ___method, method) (( void (*) (Action_1_t236 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19139_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FBResult>::Invoke(T)
#define Action_1_Invoke_m20931(__this, ___obj, method) (( void (*) (Action_1_t236 *, FBResult_t239 *, const MethodInfo*))Action_1_Invoke_m19141_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FBResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m20932(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t236 *, FBResult_t239 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19143_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FBResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m20933(__this, ___result, method) (( void (*) (Action_1_t236 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19145_gshared)(__this, ___result, method)
