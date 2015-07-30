#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t858;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t890;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m5625(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t858 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m27019_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Invoke(T0)
#define UnityAction_1_Invoke_m28457(__this, ___arg0, method) (( void (*) (UnityAction_1_t858 *, List_1_t890 *, const MethodInfo*))UnityAction_1_Invoke_m27020_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m28458(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t858 *, List_1_t890 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m27021_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m28459(__this, ___result, method) (( void (*) (UnityAction_1_t858 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m27022_gshared)(__this, ___result, method)
