#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t5910;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10MethodDeclarations.h"
#define UnityAction_1__ctor_m30071(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t5910 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m30063_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
#define UnityAction_1_Invoke_m30072(__this, ___arg0, method) (( void (*) (UnityAction_1_t5910 *, bool, const MethodInfo*))UnityAction_1_Invoke_m30064_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m30073(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t5910 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m30065_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m30074(__this, ___result, method) (( void (*) (UnityAction_1_t5910 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m30066_gshared)(__this, ___result, method)
