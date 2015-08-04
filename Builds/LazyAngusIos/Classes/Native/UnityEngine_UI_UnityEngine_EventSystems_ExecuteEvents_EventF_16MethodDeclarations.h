#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t992;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t784;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m26912_gshared (EventFunction_1_t992 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m26912(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t992 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m26912_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m26914_gshared (EventFunction_1_t992 * __this, Object_t * ___handler, BaseEventData_t784 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m26914(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t992 *, Object_t *, BaseEventData_t784 *, const MethodInfo*))EventFunction_1_Invoke_m26914_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m26916_gshared (EventFunction_1_t992 * __this, Object_t * ___handler, BaseEventData_t784 * ___eventData, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m26916(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t992 *, Object_t *, BaseEventData_t784 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m26916_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m26918_gshared (EventFunction_1_t992 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m26918(__this, ___result, method) (( void (*) (EventFunction_1_t992 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m26918_gshared)(__this, ___result, method)
