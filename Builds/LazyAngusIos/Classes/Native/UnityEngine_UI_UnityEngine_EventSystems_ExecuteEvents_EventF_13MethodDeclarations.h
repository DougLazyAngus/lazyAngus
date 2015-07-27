﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t759;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IMoveHandler
struct IMoveHandler_t928;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t735;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m5176(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t759 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m22887_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m23503(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t759 *, Object_t *, BaseEventData_t735 *, const MethodInfo*))EventFunction_1_Invoke_m22889_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m23504(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t759 *, Object_t *, BaseEventData_t735 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m22891_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m23505(__this, ___result, method) (( void (*) (EventFunction_1_t759 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m22893_gshared)(__this, ___result, method)
