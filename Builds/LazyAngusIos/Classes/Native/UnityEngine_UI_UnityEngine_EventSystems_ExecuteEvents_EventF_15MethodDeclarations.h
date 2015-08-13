#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t871;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.ICancelHandler
struct ICancelHandler_t1037;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t845;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m5800(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t871 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m27631_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m28279(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t871 *, Object_t *, BaseEventData_t845 *, const MethodInfo*))EventFunction_1_Invoke_m27633_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m28280(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t871 *, Object_t *, BaseEventData_t845 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m27635_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m28281(__this, ___result, method) (( void (*) (EventFunction_1_t871 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m27637_gshared)(__this, ___result, method)
