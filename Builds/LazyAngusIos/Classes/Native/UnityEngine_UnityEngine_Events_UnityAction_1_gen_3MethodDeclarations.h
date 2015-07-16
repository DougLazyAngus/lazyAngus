#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t849;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t607;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m5014(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t849 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m21969_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m24388(__this, ___arg0, method) (( void (*) (UnityAction_1_t849 *, Component_t607 *, const MethodInfo*))UnityAction_1_Invoke_m21970_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m24389(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t849 *, Component_t607 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m21971_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m24390(__this, ___result, method) (( void (*) (UnityAction_1_t849 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m21972_gshared)(__this, ___result, method)
