#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t850;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t5802;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t845;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m5777(__this, method) (( void (*) (UnityEvent_1_t850 *, const MethodInfo*))UnityEvent_1__ctor_m27498_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m28227(__this, ___call, method) (( void (*) (UnityEvent_1_t850 *, UnityAction_1_t5802 *, const MethodInfo*))UnityEvent_1_AddListener_m27499_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m28228(__this, ___call, method) (( void (*) (UnityEvent_1_t850 *, UnityAction_1_t5802 *, const MethodInfo*))UnityEvent_1_RemoveListener_m27501_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m6319(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t850 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m27502_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m6320(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2883 * (*) (UnityEvent_1_t850 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m27503_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m28229(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2883 * (*) (Object_t * /* static, unused */, UnityAction_1_t5802 *, const MethodInfo*))UnityEvent_1_GetDelegate_m27505_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m5779(__this, ___arg0, method) (( void (*) (UnityEvent_1_t850 *, BaseEventData_t845 *, const MethodInfo*))UnityEvent_1_Invoke_m27506_gshared)(__this, ___arg0, method)
