#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t960;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1083;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2884;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m6097_gshared (UnityEvent_1_t960 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m6097(__this, method) (( void (*) (UnityEvent_1_t960 *, const MethodInfo*))UnityEvent_1__ctor_m6097_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m6110_gshared (UnityEvent_1_t960 * __this, UnityAction_1_t1083 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m6110(__this, ___call, method) (( void (*) (UnityEvent_1_t960 *, UnityAction_1_t1083 *, const MethodInfo*))UnityEvent_1_AddListener_m6110_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m6109_gshared (UnityEvent_1_t960 * __this, UnityAction_1_t1083 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m6109(__this, ___call, method) (( void (*) (UnityEvent_1_t960 *, UnityAction_1_t1083 *, const MethodInfo*))UnityEvent_1_RemoveListener_m6109_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6357_gshared (UnityEvent_1_t960 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6357(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t960 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6357_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2884 * UnityEvent_1_GetDelegate_m6358_gshared (UnityEvent_1_t960 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6358(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2884 * (*) (UnityEvent_1_t960 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6358_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2884 * UnityEvent_1_GetDelegate_m29852_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1083 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29852(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2884 * (*) (Object_t * /* static, unused */, UnityAction_1_t1083 *, const MethodInfo*))UnityEvent_1_GetDelegate_m29852_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m6102_gshared (UnityEvent_1_t960 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m6102(__this, ___arg0, method) (( void (*) (UnityEvent_1_t960 *, float, const MethodInfo*))UnityEvent_1_Invoke_m6102_gshared)(__this, ___arg0, method)
