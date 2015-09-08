#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1100;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m6258_gshared (UnityAction_1_t1100 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m6258(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1100 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m6258_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m34420_gshared (UnityAction_1_t1100 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m34420(__this, ___arg0, method) (( void (*) (UnityAction_1_t1100 *, float, const MethodInfo*))UnityAction_1_Invoke_m34420_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m34421_gshared (UnityAction_1_t1100 * __this, float ___arg0, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m34421(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1100 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m34421_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m34422_gshared (UnityAction_1_t1100 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m34422(__this, ___result, method) (( void (*) (UnityAction_1_t1100 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m34422_gshared)(__this, ___result, method)
