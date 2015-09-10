#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t820;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"
#define UnityAction_1__ctor_m4457(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t820 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m31604_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::Invoke(T0)
#define UnityAction_1_Invoke_m31605(__this, ___arg0, method) (( void (*) (UnityAction_1_t820 *, String_t*, const MethodInfo*))UnityAction_1_Invoke_m31606_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.String>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m31607(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t820 *, String_t*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m31608_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m31609(__this, ___result, method) (( void (*) (UnityAction_1_t820 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m31610_gshared)(__this, ___result, method)
