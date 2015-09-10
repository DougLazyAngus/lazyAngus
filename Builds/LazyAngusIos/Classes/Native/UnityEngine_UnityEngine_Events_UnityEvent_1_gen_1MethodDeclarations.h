#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t927;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1067;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2911;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m6109_gshared (UnityEvent_1_t927 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m6109(__this, method) (( void (*) (UnityEvent_1_t927 *, const MethodInfo*))UnityEvent_1__ctor_m6109_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m6111_gshared (UnityEvent_1_t927 * __this, UnityAction_1_t1067 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m6111(__this, ___call, method) (( void (*) (UnityEvent_1_t927 *, UnityAction_1_t1067 *, const MethodInfo*))UnityEvent_1_AddListener_m6111_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m33454_gshared (UnityEvent_1_t927 * __this, UnityAction_1_t1067 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m33454(__this, ___call, method) (( void (*) (UnityEvent_1_t927 *, UnityAction_1_t1067 *, const MethodInfo*))UnityEvent_1_RemoveListener_m33454_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6556_gshared (UnityEvent_1_t927 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6556(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t927 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6556_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2911 * UnityEvent_1_GetDelegate_m6557_gshared (UnityEvent_1_t927 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6557(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2911 * (*) (UnityEvent_1_t927 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6557_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2911 * UnityEvent_1_GetDelegate_m33455_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1067 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m33455(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2911 * (*) (Object_t * /* static, unused */, UnityAction_1_t1067 *, const MethodInfo*))UnityEvent_1_GetDelegate_m33455_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m6110_gshared (UnityEvent_1_t927 * __this, Color_t325  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m6110(__this, ___arg0, method) (( void (*) (UnityEvent_1_t927 *, Color_t325 , const MethodInfo*))UnityEvent_1_Invoke_m6110_gshared)(__this, ___arg0, method)
