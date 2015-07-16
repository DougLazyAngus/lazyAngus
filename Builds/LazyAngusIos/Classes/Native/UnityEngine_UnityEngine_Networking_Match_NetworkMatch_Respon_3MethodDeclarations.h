#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
struct ResponseDelegate_1_t1268;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ResponseDelegate_1__ctor_m26090_gshared (ResponseDelegate_1_t1268 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ResponseDelegate_1__ctor_m26090(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t1268 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m26090_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m26092_gshared (ResponseDelegate_1_t1268 * __this, Object_t * ___response, const MethodInfo* method);
#define ResponseDelegate_1_Invoke_m26092(__this, ___response, method) (( void (*) (ResponseDelegate_1_t1268 *, Object_t *, const MethodInfo*))ResponseDelegate_1_Invoke_m26092_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m26094_gshared (ResponseDelegate_1_t1268 * __this, Object_t * ___response, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ResponseDelegate_1_BeginInvoke_m26094(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t1268 *, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m26094_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m26096_gshared (ResponseDelegate_1_t1268 * __this, Object_t * ___result, const MethodInfo* method);
#define ResponseDelegate_1_EndInvoke_m26096(__this, ___result, method) (( void (*) (ResponseDelegate_1_t1268 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m26096_gshared)(__this, ___result, method)
