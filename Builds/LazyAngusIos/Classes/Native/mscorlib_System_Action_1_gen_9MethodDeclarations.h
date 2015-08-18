#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<InstagramPostResult>
struct Action_1_t305;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// InstagramPostResult
#include "AssemblyU2DCSharp_InstagramPostResult.h"

// System.Void System.Action`1<InstagramPostResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Int32>
#include "mscorlib_System_Action_1_gen_36MethodDeclarations.h"
#define Action_1__ctor_m3910(__this, ___object, ___method, method) (( void (*) (Action_1_t305 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m25327_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<InstagramPostResult>::Invoke(T)
#define Action_1_Invoke_m25328(__this, ___obj, method) (( void (*) (Action_1_t305 *, int32_t, const MethodInfo*))Action_1_Invoke_m25329_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<InstagramPostResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m25330(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t305 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m25331_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<InstagramPostResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m25332(__this, ___result, method) (( void (*) (Action_1_t305 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m25333_gshared)(__this, ___result, method)
