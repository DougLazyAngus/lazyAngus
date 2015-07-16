﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t4001;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_2__ctor_m26972_gshared (UnityAction_2_t4001 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_2__ctor_m26972(__this, ___object, ___method, method) (( void (*) (UnityAction_2_t4001 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m26972_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" void UnityAction_2_Invoke_m26973_gshared (UnityAction_2_t4001 * __this, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method);
#define UnityAction_2_Invoke_m26973(__this, ___arg0, ___arg1, method) (( void (*) (UnityAction_2_t4001 *, Object_t *, Object_t *, const MethodInfo*))UnityAction_2_Invoke_m26973_gshared)(__this, ___arg0, ___arg1, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_2_BeginInvoke_m26974_gshared (UnityAction_2_t4001 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m26974(__this, ___arg0, ___arg1, ___callback, ___object, method) (( Object_t * (*) (UnityAction_2_t4001 *, Object_t *, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))UnityAction_2_BeginInvoke_m26974_gshared)(__this, ___arg0, ___arg1, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_2_EndInvoke_m26975_gshared (UnityAction_2_t4001 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m26975(__this, ___result, method) (( void (*) (UnityAction_2_t4001 *, Object_t *, const MethodInfo*))UnityAction_2_EndInvoke_m26975_gshared)(__this, ___result, method)
