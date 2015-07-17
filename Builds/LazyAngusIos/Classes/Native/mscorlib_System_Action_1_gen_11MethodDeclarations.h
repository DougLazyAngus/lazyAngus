#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<TW_APIRequstResult>
struct Action_1_t294;
// System.Object
struct Object_t;
// TW_APIRequstResult
struct TW_APIRequstResult_t280;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<TW_APIRequstResult>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m3326(__this, ___object, ___method, method) (( void (*) (Action_1_t294 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19139_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<TW_APIRequstResult>::Invoke(T)
#define Action_1_Invoke_m21547(__this, ___obj, method) (( void (*) (Action_1_t294 *, TW_APIRequstResult_t280 *, const MethodInfo*))Action_1_Invoke_m19141_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<TW_APIRequstResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m21548(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t294 *, TW_APIRequstResult_t280 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19143_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<TW_APIRequstResult>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m21549(__this, ___result, method) (( void (*) (Action_1_t294 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19145_gshared)(__this, ___result, method)
