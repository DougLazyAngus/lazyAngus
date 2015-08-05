#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t842;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t983;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2835;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m5625_gshared (UnityEvent_1_t842 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5625(__this, method) (( void (*) (UnityEvent_1_t842 *, const MethodInfo*))UnityEvent_1__ctor_m5625_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5627_gshared (UnityEvent_1_t842 * __this, UnityAction_1_t983 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5627(__this, ___call, method) (( void (*) (UnityEvent_1_t842 *, UnityAction_1_t983 *, const MethodInfo*))UnityEvent_1_AddListener_m5627_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m28009_gshared (UnityEvent_1_t842 * __this, UnityAction_1_t983 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m28009(__this, ___call, method) (( void (*) (UnityEvent_1_t842 *, UnityAction_1_t983 *, const MethodInfo*))UnityEvent_1_RemoveListener_m28009_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6080_gshared (UnityEvent_1_t842 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6080(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t842 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6080_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2835 * UnityEvent_1_GetDelegate_m6081_gshared (UnityEvent_1_t842 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6081(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2835 * (*) (UnityEvent_1_t842 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6081_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2835 * UnityEvent_1_GetDelegate_m28010_gshared (Object_t * __this /* static, unused */, UnityAction_1_t983 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m28010(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2835 * (*) (Object_t * /* static, unused */, UnityAction_1_t983 *, const MethodInfo*))UnityEvent_1_GetDelegate_m28010_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5626_gshared (UnityEvent_1_t842 * __this, Color_t325  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5626(__this, ___arg0, method) (( void (*) (UnityEvent_1_t842 *, Color_t325 , const MethodInfo*))UnityEvent_1_Invoke_m5626_gshared)(__this, ___arg0, method)
