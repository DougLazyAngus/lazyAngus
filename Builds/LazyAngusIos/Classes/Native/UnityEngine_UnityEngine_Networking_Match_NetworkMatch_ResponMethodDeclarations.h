#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t1231;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t1115;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m26023(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t1231 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m26024_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m26025(__this, ___response, method) (( void (*) (ResponseDelegate_1_t1231 *, CreateMatchResponse_t1115 *, const MethodInfo*))ResponseDelegate_1_Invoke_m26026_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m26027(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t1231 *, CreateMatchResponse_t1115 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m26028_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m26029(__this, ___result, method) (( void (*) (ResponseDelegate_1_t1231 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m26030_gshared)(__this, ___result, method)
