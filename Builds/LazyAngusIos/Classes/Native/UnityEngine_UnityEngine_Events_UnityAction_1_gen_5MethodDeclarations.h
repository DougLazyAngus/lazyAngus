#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t957;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t989;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m5931(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t957 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m27035_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Invoke(T0)
#define UnityAction_1_Invoke_m29652(__this, ___arg0, method) (( void (*) (UnityAction_1_t957 *, List_1_t989 *, const MethodInfo*))UnityAction_1_Invoke_m27036_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m29653(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t957 *, List_1_t989 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m27037_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m29654(__this, ___result, method) (( void (*) (UnityAction_1_t957 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m27038_gshared)(__this, ___result, method)
