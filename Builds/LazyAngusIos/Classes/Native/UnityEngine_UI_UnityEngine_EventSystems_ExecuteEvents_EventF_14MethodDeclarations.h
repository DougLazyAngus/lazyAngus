#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t811;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t980;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t786;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m5546(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t811 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m26927_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m27587(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t811 *, Object_t *, BaseEventData_t786 *, const MethodInfo*))EventFunction_1_Invoke_m26929_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m27588(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t811 *, Object_t *, BaseEventData_t786 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m26931_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m27589(__this, ___result, method) (( void (*) (EventFunction_1_t811 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m26933_gshared)(__this, ___result, method)
