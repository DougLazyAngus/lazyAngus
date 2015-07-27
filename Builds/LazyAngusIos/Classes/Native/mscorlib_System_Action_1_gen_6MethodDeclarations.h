#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<FB_APIResult>
struct Action_1_t238;
// System.Object
struct Object_t;
// FB_APIResult
struct FB_APIResult_t256;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<FB_APIResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m3271(__this, ___object, ___method, method) (( void (*) (Action_1_t238 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19147_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<FB_APIResult>::Invoke(T)
#define Action_1_Invoke_m20945(__this, ___obj, method) (( void (*) (Action_1_t238 *, FB_APIResult_t256 *, const MethodInfo*))Action_1_Invoke_m19149_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<FB_APIResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m20946(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t238 *, FB_APIResult_t256 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19151_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<FB_APIResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m20947(__this, ___result, method) (( void (*) (Action_1_t238 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19153_gshared)(__this, ___result, method)
