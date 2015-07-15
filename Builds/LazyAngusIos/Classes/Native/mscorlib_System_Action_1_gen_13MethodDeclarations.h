#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t1013;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t1183;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_16MethodDeclarations.h"
#define Action_1__ctor_m24413(__this, ___object, ___method, method) (( void (*) (Action_1_t1013 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18467_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
#define Action_1_Invoke_m24414(__this, ___obj, method) (( void (*) (Action_1_t1013 *, IScoreU5BU5D_t1183*, const MethodInfo*))Action_1_Invoke_m18469_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m24415(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1013 *, IScoreU5BU5D_t1183*, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18471_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m24416(__this, ___result, method) (( void (*) (Action_1_t1013 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18473_gshared)(__this, ___result, method)
