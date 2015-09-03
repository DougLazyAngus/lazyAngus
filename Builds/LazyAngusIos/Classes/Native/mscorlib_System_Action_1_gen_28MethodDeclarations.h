#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t2709;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t2878;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m64731(__this, ___object, ___method, method) (( void (*) (Action_1_t2709 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m27580_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
#define Action_1_Invoke_m64732(__this, ___obj, method) (( void (*) (Action_1_t2709 *, IScoreU5BU5D_t2878*, const MethodInfo*))Action_1_Invoke_m27582_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m64733(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2709 *, IScoreU5BU5D_t2878*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m27584_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m64734(__this, ___result, method) (( void (*) (Action_1_t2709 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m27586_gshared)(__this, ___result, method)
