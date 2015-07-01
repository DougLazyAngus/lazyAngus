#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t965;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t1136;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m24199(__this, ___object, ___method, method) (( void (*) (Action_1_t965 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18139_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
#define Action_1_Invoke_m24200(__this, ___obj, method) (( void (*) (Action_1_t965 *, IScoreU5BU5D_t1136*, const MethodInfo*))Action_1_Invoke_m18141_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m24201(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t965 *, IScoreU5BU5D_t1136*, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18143_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m24202(__this, ___result, method) (( void (*) (Action_1_t965 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18145_gshared)(__this, ___result, method)
