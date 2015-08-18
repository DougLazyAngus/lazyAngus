#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t859;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t1025;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t845;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m5787(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t859 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m27628_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m28246(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t859 *, Object_t *, BaseEventData_t845 *, const MethodInfo*))EventFunction_1_Invoke_m27630_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m28247(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t859 *, Object_t *, BaseEventData_t845 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m27632_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m28248(__this, ___result, method) (( void (*) (EventFunction_1_t859 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m27634_gshared)(__this, ___result, method)
