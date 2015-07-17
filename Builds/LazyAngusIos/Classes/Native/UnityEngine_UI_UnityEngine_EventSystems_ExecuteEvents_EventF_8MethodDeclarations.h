#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t750;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t919;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t733;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m5158(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t750 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m22876_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m23477(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t750 *, Object_t *, BaseEventData_t733 *, const MethodInfo*))EventFunction_1_Invoke_m22878_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m23478(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t750 *, Object_t *, BaseEventData_t733 *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m22880_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m23479(__this, ___result, method) (( void (*) (EventFunction_1_t750 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m22882_gshared)(__this, ___result, method)
