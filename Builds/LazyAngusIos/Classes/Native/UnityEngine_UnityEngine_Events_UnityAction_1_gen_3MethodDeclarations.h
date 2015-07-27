#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t897;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t660;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m5571(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t897 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m23006_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m25425(__this, ___arg0, method) (( void (*) (UnityAction_1_t897 *, Component_t660 *, const MethodInfo*))UnityAction_1_Invoke_m23007_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m25426(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t897 *, Component_t660 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m23008_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m25427(__this, ___result, method) (( void (*) (UnityAction_1_t897 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m23009_gshared)(__this, ___result, method)
