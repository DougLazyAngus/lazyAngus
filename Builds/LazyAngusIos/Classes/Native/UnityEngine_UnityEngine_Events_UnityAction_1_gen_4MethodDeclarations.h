#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t1004;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t761;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"
#define UnityAction_1__ctor_m6184(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1004 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m27494_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m30298(__this, ___arg0, method) (( void (*) (UnityAction_1_t1004 *, Component_t761 *, const MethodInfo*))UnityAction_1_Invoke_m27496_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m30299(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1004 *, Component_t761 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m27498_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m30300(__this, ___result, method) (( void (*) (UnityAction_1_t1004 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m27500_gshared)(__this, ___result, method)
