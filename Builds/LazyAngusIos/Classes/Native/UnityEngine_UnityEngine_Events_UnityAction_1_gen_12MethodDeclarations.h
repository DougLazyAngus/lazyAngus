﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t4076;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m28031_gshared (UnityAction_1_t4076 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m28031(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t4076 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m28031_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m28032_gshared (UnityAction_1_t4076 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m28032(__this, ___arg0, method) (( void (*) (UnityAction_1_t4076 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m28032_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m28033_gshared (UnityAction_1_t4076 * __this, int32_t ___arg0, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m28033(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t4076 *, int32_t, AsyncCallback_t346 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m28033_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m28034_gshared (UnityAction_1_t4076 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m28034(__this, ___result, method) (( void (*) (UnityAction_1_t4076 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m28034_gshared)(__this, ___result, method)
