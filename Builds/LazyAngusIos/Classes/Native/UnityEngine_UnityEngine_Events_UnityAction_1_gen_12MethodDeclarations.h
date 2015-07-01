#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3957;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m26743_gshared (UnityAction_1_t3957 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m26743(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3957 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m26743_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m26744_gshared (UnityAction_1_t3957 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m26744(__this, ___arg0, method) (( void (*) (UnityAction_1_t3957 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m26744_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m26745_gshared (UnityAction_1_t3957 * __this, int32_t ___arg0, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m26745(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3957 *, int32_t, AsyncCallback_t389 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m26745_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m26746_gshared (UnityAction_1_t3957 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m26746(__this, ___result, method) (( void (*) (UnityAction_1_t3957 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m26746_gshared)(__this, ___result, method)
