#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t901;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1025;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2835;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m5824_gshared (UnityEvent_1_t901 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5824(__this, method) (( void (*) (UnityEvent_1_t901 *, const MethodInfo*))UnityEvent_1__ctor_m5824_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5837_gshared (UnityEvent_1_t901 * __this, UnityAction_1_t1025 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5837(__this, ___call, method) (( void (*) (UnityEvent_1_t901 *, UnityAction_1_t1025 *, const MethodInfo*))UnityEvent_1_AddListener_m5837_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5836_gshared (UnityEvent_1_t901 * __this, UnityAction_1_t1025 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5836(__this, ___call, method) (( void (*) (UnityEvent_1_t901 *, UnityAction_1_t1025 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5836_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6089_gshared (UnityEvent_1_t901 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6089(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t901 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6089_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2835 * UnityEvent_1_GetDelegate_m6090_gshared (UnityEvent_1_t901 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6090(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2835 * (*) (UnityEvent_1_t901 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6090_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2835 * UnityEvent_1_GetDelegate_m29052_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1025 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29052(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2835 * (*) (Object_t * /* static, unused */, UnityAction_1_t1025 *, const MethodInfo*))UnityEvent_1_GetDelegate_m29052_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5829_gshared (UnityEvent_1_t901 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5829(__this, ___arg0, method) (( void (*) (UnityEvent_1_t901 *, float, const MethodInfo*))UnityEvent_1_Invoke_m5829_gshared)(__this, ___arg0, method)
