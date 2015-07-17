#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t895;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t658;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m5556(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t895 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m22991_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m25410(__this, ___arg0, method) (( void (*) (UnityAction_1_t895 *, Component_t658 *, const MethodInfo*))UnityAction_1_Invoke_m22992_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m25411(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t895 *, Component_t658 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m22993_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m25412(__this, ___result, method) (( void (*) (UnityAction_1_t895 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m22994_gshared)(__this, ___result, method)
