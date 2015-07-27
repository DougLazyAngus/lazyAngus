#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t943;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t735;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m22891_gshared (EventFunction_1_t943 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m22891(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t943 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m22891_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m22893_gshared (EventFunction_1_t943 * __this, Object_t * ___handler, BaseEventData_t735 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m22893(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t943 *, Object_t *, BaseEventData_t735 *, const MethodInfo*))EventFunction_1_Invoke_m22893_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m22895_gshared (EventFunction_1_t943 * __this, Object_t * ___handler, BaseEventData_t735 * ___eventData, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m22895(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t943 *, Object_t *, BaseEventData_t735 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m22895_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m22897_gshared (EventFunction_1_t943 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m22897(__this, ___result, method) (( void (*) (EventFunction_1_t943 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m22897_gshared)(__this, ___result, method)
