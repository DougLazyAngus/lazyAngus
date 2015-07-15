﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t690;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerExitHandler
struct IPointerExitHandler_t859;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t679;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m4567(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t690 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m21813_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m22396(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t690 *, Object_t *, BaseEventData_t679 *, const MethodInfo*))EventFunction_1_Invoke_m21815_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m22397(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t690 *, Object_t *, BaseEventData_t679 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m21817_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m22398(__this, ___result, method) (( void (*) (EventFunction_1_t690 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m21819_gshared)(__this, ___result, method)
