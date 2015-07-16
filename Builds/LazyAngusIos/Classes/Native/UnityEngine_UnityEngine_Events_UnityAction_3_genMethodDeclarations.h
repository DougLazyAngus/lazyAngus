﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t4003;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_3__ctor_m26979_gshared (UnityAction_3_t4003 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_3__ctor_m26979(__this, ___object, ___method, method) (( void (*) (UnityAction_3_t4003 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_3__ctor_m26979_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m26980_gshared (UnityAction_3_t4003 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
#define UnityAction_3_Invoke_m26980(__this, ___arg0, ___arg1, ___arg2, method) (( void (*) (UnityAction_3_t4003 *, Object_t *, Object_t *, Object_t *, const MethodInfo*))UnityAction_3_Invoke_m26980_gshared)(__this, ___arg0, ___arg1, ___arg2, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_3_BeginInvoke_m26981_gshared (UnityAction_3_t4003 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_3_BeginInvoke_m26981(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (UnityAction_3_t4003 *, Object_t *, Object_t *, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))UnityAction_3_BeginInvoke_m26981_gshared)(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_3_EndInvoke_m26982_gshared (UnityAction_3_t4003 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_3_EndInvoke_m26982(__this, ___result, method) (( void (*) (UnityAction_3_t4003 *, Object_t *, const MethodInfo*))UnityAction_3_EndInvoke_m26982_gshared)(__this, ___result, method)
