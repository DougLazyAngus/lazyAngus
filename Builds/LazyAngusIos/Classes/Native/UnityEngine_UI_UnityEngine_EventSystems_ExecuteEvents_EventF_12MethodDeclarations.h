#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t805;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_t974;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t784;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m5534(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t805 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m26919_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m27573(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t805 *, Object_t *, BaseEventData_t784 *, const MethodInfo*))EventFunction_1_Invoke_m26921_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m27574(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t805 *, Object_t *, BaseEventData_t784 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m26923_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m27575(__this, ___result, method) (( void (*) (EventFunction_1_t805 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m26925_gshared)(__this, ___result, method)
