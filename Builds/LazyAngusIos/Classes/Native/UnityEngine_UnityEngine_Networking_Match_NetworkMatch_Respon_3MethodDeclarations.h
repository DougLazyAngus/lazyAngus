#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
struct ResponseDelegate_1_t1314;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ResponseDelegate_1__ctor_m27127_gshared (ResponseDelegate_1_t1314 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ResponseDelegate_1__ctor_m27127(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t1314 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m27127_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m27129_gshared (ResponseDelegate_1_t1314 * __this, Object_t * ___response, const MethodInfo* method);
#define ResponseDelegate_1_Invoke_m27129(__this, ___response, method) (( void (*) (ResponseDelegate_1_t1314 *, Object_t *, const MethodInfo*))ResponseDelegate_1_Invoke_m27129_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m27131_gshared (ResponseDelegate_1_t1314 * __this, Object_t * ___response, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ResponseDelegate_1_BeginInvoke_m27131(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t1314 *, Object_t *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m27131_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m27133_gshared (ResponseDelegate_1_t1314 * __this, Object_t * ___result, const MethodInfo* method);
#define ResponseDelegate_1_EndInvoke_m27133(__this, ___result, method) (( void (*) (ResponseDelegate_1_t1314 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m27133_gshared)(__this, ___result, method)
