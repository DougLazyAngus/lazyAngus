#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t810;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.ICancelHandler
struct ICancelHandler_t979;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t784;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m5539(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t810 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m26919_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m27582(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t810 *, Object_t *, BaseEventData_t784 *, const MethodInfo*))EventFunction_1_Invoke_m26921_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m27583(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t810 *, Object_t *, BaseEventData_t784 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m26923_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m27584(__this, ___result, method) (( void (*) (EventFunction_1_t810 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m26925_gshared)(__this, ___result, method)
