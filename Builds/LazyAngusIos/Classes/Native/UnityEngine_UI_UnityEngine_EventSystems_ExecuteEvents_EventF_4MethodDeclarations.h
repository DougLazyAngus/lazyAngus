#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t667;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_t836;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t654;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m4400(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t667 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m21757_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m22346(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t667 *, Object_t *, BaseEventData_t654 *, const MethodInfo*))EventFunction_1_Invoke_m21759_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m22347(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t667 *, Object_t *, BaseEventData_t654 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m21761_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m22348(__this, ___result, method) (( void (*) (EventFunction_1_t667 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m21763_gshared)(__this, ___result, method)
