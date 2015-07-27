﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t850;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t973;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1260;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m5456_gshared (UnityEvent_1_t850 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5456(__this, method) (( void (*) (UnityEvent_1_t850 *, const MethodInfo*))UnityEvent_1__ctor_m5456_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5469_gshared (UnityEvent_1_t850 * __this, UnityAction_1_t973 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5469(__this, ___call, method) (( void (*) (UnityEvent_1_t850 *, UnityAction_1_t973 *, const MethodInfo*))UnityEvent_1_AddListener_m5469_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5468_gshared (UnityEvent_1_t850 * __this, UnityAction_1_t973 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5468(__this, ___call, method) (( void (*) (UnityEvent_1_t850 *, UnityAction_1_t973 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5468_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5721_gshared (UnityEvent_1_t850 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5721(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t850 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5721_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1260 * UnityEvent_1_GetDelegate_m5722_gshared (UnityEvent_1_t850 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5722(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1260 * (*) (UnityEvent_1_t850 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5722_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1260 * UnityEvent_1_GetDelegate_m24891_gshared (Object_t * __this /* static, unused */, UnityAction_1_t973 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m24891(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1260 * (*) (Object_t * /* static, unused */, UnityAction_1_t973 *, const MethodInfo*))UnityEvent_1_GetDelegate_m24891_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5461_gshared (UnityEvent_1_t850 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5461(__this, ___arg0, method) (( void (*) (UnityEvent_1_t850 *, float, const MethodInfo*))UnityEvent_1_Invoke_m5461_gshared)(__this, ___arg0, method)
