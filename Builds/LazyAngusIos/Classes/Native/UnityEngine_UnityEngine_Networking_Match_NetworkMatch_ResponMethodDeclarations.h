#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t2928;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t2815;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m66434(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t2928 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m66435_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m66436(__this, ___response, method) (( void (*) (ResponseDelegate_1_t2928 *, CreateMatchResponse_t2815 *, const MethodInfo*))ResponseDelegate_1_Invoke_m66437_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m66438(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t2928 *, CreateMatchResponse_t2815 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m66439_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m66440(__this, ___result, method) (( void (*) (ResponseDelegate_1_t2928 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m66441_gshared)(__this, ___result, method)
