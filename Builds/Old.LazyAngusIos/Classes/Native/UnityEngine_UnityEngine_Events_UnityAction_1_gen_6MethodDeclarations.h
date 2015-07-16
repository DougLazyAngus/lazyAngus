﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3638;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m21928_gshared (UnityAction_1_t3638 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m21928(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3638 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m21928_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m21929_gshared (UnityAction_1_t3638 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m21929(__this, ___arg0, method) (( void (*) (UnityAction_1_t3638 *, Object_t *, const MethodInfo*))UnityAction_1_Invoke_m21929_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m21930_gshared (UnityAction_1_t3638 * __this, Object_t * ___arg0, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m21930(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3638 *, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m21930_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m21931_gshared (UnityAction_1_t3638 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m21931(__this, ___result, method) (( void (*) (UnityAction_1_t3638 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m21931_gshared)(__this, ___result, method)
