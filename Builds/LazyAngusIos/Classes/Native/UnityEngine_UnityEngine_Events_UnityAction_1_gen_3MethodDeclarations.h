﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t816;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t578;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m4810(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t816 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m21872_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m24291(__this, ___arg0, method) (( void (*) (UnityAction_1_t816 *, Component_t578 *, const MethodInfo*))UnityAction_1_Invoke_m21873_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m24292(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t816 *, Component_t578 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m21874_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m24293(__this, ___result, method) (( void (*) (UnityAction_1_t816 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m21875_gshared)(__this, ___result, method)
