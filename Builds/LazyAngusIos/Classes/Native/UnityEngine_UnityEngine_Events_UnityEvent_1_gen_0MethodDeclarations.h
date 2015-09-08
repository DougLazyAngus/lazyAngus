#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t868;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t6377;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2904;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t863;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m5949(__this, method) (( void (*) (UnityEvent_1_t868 *, const MethodInfo*))UnityEvent_1__ctor_m32196_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m32925(__this, ___call, method) (( void (*) (UnityEvent_1_t868 *, UnityAction_1_t6377 *, const MethodInfo*))UnityEvent_1_AddListener_m32197_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m32926(__this, ___call, method) (( void (*) (UnityEvent_1_t868 *, UnityAction_1_t6377 *, const MethodInfo*))UnityEvent_1_RemoveListener_m32199_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m6490(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t868 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m32200_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m6491(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2904 * (*) (UnityEvent_1_t868 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m32201_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m32927(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2904 * (*) (Object_t * /* static, unused */, UnityAction_1_t6377 *, const MethodInfo*))UnityEvent_1_GetDelegate_m32203_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m5951(__this, ___arg0, method) (( void (*) (UnityEvent_1_t868 *, BaseEventData_t863 *, const MethodInfo*))UnityEvent_1_Invoke_m32204_gshared)(__this, ___arg0, method)
