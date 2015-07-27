#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t3857;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10MethodDeclarations.h"
#define UnityAction_1__ctor_m25217(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3857 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m25209_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
#define UnityAction_1_Invoke_m25218(__this, ___arg0, method) (( void (*) (UnityAction_1_t3857 *, bool, const MethodInfo*))UnityAction_1_Invoke_m25210_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m25219(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3857 *, bool, AsyncCallback_t346 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m25211_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m25220(__this, ___result, method) (( void (*) (UnityAction_1_t3857 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m25212_gshared)(__this, ___result, method)
