﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t5809;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t846;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_7MethodDeclarations.h"
#define UnityAction_1__ctor_m28354(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t5809 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m27615_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityAction_1_Invoke_m28355(__this, ___arg0, method) (( void (*) (UnityAction_1_t5809 *, BaseEventData_t846 *, const MethodInfo*))UnityAction_1_Invoke_m27617_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m28356(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t5809 *, BaseEventData_t846 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m27619_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m28357(__this, ___result, method) (( void (*) (UnityAction_1_t5809 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m27621_gshared)(__this, ___result, method)
