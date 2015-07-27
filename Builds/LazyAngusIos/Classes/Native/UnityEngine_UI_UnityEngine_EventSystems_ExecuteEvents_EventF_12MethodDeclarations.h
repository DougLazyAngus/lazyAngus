﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t756;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_t925;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t735;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m5177(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t756 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m22891_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m23504(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t756 *, Object_t *, BaseEventData_t735 *, const MethodInfo*))EventFunction_1_Invoke_m22893_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m23505(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t756 *, Object_t *, BaseEventData_t735 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m22895_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m23506(__this, ___result, method) (( void (*) (EventFunction_1_t756 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m22897_gshared)(__this, ___result, method)
