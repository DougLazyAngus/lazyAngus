#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t954;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t804;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m5276(__this, ___object, ___method, method) (( void (*) (Action_1_t954 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19150_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m24244(__this, ___obj, method) (( void (*) (Action_1_t954 *, Font_t804 *, const MethodInfo*))Action_1_Invoke_m19152_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m24245(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t954 *, Font_t804 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19154_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m24246(__this, ___result, method) (( void (*) (Action_1_t954 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19156_gshared)(__this, ___result, method)
