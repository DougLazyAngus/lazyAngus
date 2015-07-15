#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t887;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t679;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m21813_gshared (EventFunction_1_t887 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m21813(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t887 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m21813_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m21815_gshared (EventFunction_1_t887 * __this, Object_t * ___handler, BaseEventData_t679 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m21815(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t887 *, Object_t *, BaseEventData_t679 *, const MethodInfo*))EventFunction_1_Invoke_m21815_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m21817_gshared (EventFunction_1_t887 * __this, Object_t * ___handler, BaseEventData_t679 * ___eventData, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m21817(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t887 *, Object_t *, BaseEventData_t679 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m21817_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m21819_gshared (EventFunction_1_t887 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m21819(__this, ___result, method) (( void (*) (EventFunction_1_t887 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m21819_gshared)(__this, ___result, method)
