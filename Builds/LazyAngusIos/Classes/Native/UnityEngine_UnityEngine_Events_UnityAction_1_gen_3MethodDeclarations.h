#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t793;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t555;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m4664(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t793 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m21714_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m24133(__this, ___arg0, method) (( void (*) (UnityAction_1_t793 *, Component_t555 *, const MethodInfo*))UnityAction_1_Invoke_m21715_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m24134(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t793 *, Component_t555 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m21716_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m24135(__this, ___result, method) (( void (*) (UnityAction_1_t793 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m21717_gshared)(__this, ___result, method)
