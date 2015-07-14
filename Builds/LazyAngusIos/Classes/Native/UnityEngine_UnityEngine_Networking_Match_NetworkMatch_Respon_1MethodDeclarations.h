#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t1233;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.BasicResponse
struct BasicResponse_t1112;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m26040(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t1233 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m26024_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m26041(__this, ___response, method) (( void (*) (ResponseDelegate_1_t1233 *, BasicResponse_t1112 *, const MethodInfo*))ResponseDelegate_1_Invoke_m26026_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m26042(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t1233 *, BasicResponse_t1112 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m26028_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m26043(__this, ___result, method) (( void (*) (ResponseDelegate_1_t1233 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m26030_gshared)(__this, ___result, method)
