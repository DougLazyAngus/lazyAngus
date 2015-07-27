#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t1289;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t1181;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m27140(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t1289 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m27120_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m27141(__this, ___response, method) (( void (*) (ResponseDelegate_1_t1289 *, ListMatchResponse_t1181 *, const MethodInfo*))ResponseDelegate_1_Invoke_m27122_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m27142(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t1289 *, ListMatchResponse_t1181 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m27124_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m27143(__this, ___result, method) (( void (*) (ResponseDelegate_1_t1289 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m27126_gshared)(__this, ___result, method)
