#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t1068;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t1236;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m25484(__this, ___object, ___method, method) (( void (*) (Action_1_t1068 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19147_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
#define Action_1_Invoke_m25485(__this, ___obj, method) (( void (*) (Action_1_t1068 *, IScoreU5BU5D_t1236*, const MethodInfo*))Action_1_Invoke_m19149_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m25486(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1068 *, IScoreU5BU5D_t1236*, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19151_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m25487(__this, ___result, method) (( void (*) (Action_1_t1068 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19153_gshared)(__this, ___result, method)
