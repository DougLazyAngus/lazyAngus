#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<InstagramPostResult>
struct Action_1_t237;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void System.Action`1<InstagramPostResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Int32>
#include "mscorlib_System_Action_1_gen_19MethodDeclarations.h"
#define Action_1__ctor_m2756(__this, ___object, ___method, method) (( void (*) (Action_1_t237 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m20085_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<InstagramPostResult>::Invoke(T)
#define Action_1_Invoke_m20086(__this, ___obj, method) (( void (*) (Action_1_t237 *, int32_t, const MethodInfo*))Action_1_Invoke_m20087_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<InstagramPostResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m20088(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t237 *, int32_t, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m20089_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<InstagramPostResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m20090(__this, ___result, method) (( void (*) (Action_1_t237 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m20091_gshared)(__this, ___result, method)
