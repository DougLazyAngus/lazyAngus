#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t841;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t599;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m4976(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t841 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m21928_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m24347(__this, ___arg0, method) (( void (*) (UnityAction_1_t841 *, Component_t599 *, const MethodInfo*))UnityAction_1_Invoke_m21929_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m24348(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t841 *, Component_t599 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m21930_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m24349(__this, ___result, method) (( void (*) (UnityAction_1_t841 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m21931_gshared)(__this, ___result, method)
