#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t851;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t974;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1261;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m5463_gshared (UnityEvent_1_t851 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5463(__this, method) (( void (*) (UnityEvent_1_t851 *, const MethodInfo*))UnityEvent_1__ctor_m5463_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5476_gshared (UnityEvent_1_t851 * __this, UnityAction_1_t974 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5476(__this, ___call, method) (( void (*) (UnityEvent_1_t851 *, UnityAction_1_t974 *, const MethodInfo*))UnityEvent_1_AddListener_m5476_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5475_gshared (UnityEvent_1_t851 * __this, UnityAction_1_t974 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5475(__this, ___call, method) (( void (*) (UnityEvent_1_t851 *, UnityAction_1_t974 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5475_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5728_gshared (UnityEvent_1_t851 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5728(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t851 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5728_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1261 * UnityEvent_1_GetDelegate_m5729_gshared (UnityEvent_1_t851 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5729(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1261 * (*) (UnityEvent_1_t851 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5729_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1261 * UnityEvent_1_GetDelegate_m24898_gshared (Object_t * __this /* static, unused */, UnityAction_1_t974 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m24898(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1261 * (*) (Object_t * /* static, unused */, UnityAction_1_t974 *, const MethodInfo*))UnityEvent_1_GetDelegate_m24898_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5468_gshared (UnityEvent_1_t851 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5468(__this, ___arg0, method) (( void (*) (UnityEvent_1_t851 *, float, const MethodInfo*))UnityEvent_1_Invoke_m5468_gshared)(__this, ___arg0, method)
