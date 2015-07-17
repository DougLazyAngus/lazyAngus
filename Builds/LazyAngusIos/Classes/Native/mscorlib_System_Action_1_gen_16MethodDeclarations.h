#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t1068;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t1229;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_17MethodDeclarations.h"
#define Action_1__ctor_m25485(__this, ___object, ___method, method) (( void (*) (Action_1_t1068 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m19139_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
#define Action_1_Invoke_m25486(__this, ___obj, method) (( void (*) (Action_1_t1068 *, IUserProfileU5BU5D_t1229*, const MethodInfo*))Action_1_Invoke_m19141_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m25487(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1068 *, IUserProfileU5BU5D_t1229*, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m19143_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m25488(__this, ___result, method) (( void (*) (Action_1_t1068 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m19145_gshared)(__this, ___result, method)
