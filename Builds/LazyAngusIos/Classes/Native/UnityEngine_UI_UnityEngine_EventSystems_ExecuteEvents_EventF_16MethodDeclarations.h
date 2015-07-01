#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t840;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t631;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m21599_gshared (EventFunction_1_t840 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m21599(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t840 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m21599_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m21601_gshared (EventFunction_1_t840 * __this, Object_t * ___handler, BaseEventData_t631 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m21601(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t840 *, Object_t *, BaseEventData_t631 *, const MethodInfo*))EventFunction_1_Invoke_m21601_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m21603_gshared (EventFunction_1_t840 * __this, Object_t * ___handler, BaseEventData_t631 * ___eventData, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m21603(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t840 *, Object_t *, BaseEventData_t631 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m21603_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m21605_gshared (EventFunction_1_t840 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m21605(__this, ___result, method) (( void (*) (EventFunction_1_t840 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m21605_gshared)(__this, ___result, method)
