#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t908;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5815;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2835;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m5834_gshared (UnityEvent_1_t908 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5834(__this, method) (( void (*) (UnityEvent_1_t908 *, const MethodInfo*))UnityEvent_1__ctor_m5834_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m29060_gshared (UnityEvent_1_t908 * __this, UnityAction_1_t5815 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m29060(__this, ___call, method) (( void (*) (UnityEvent_1_t908 *, UnityAction_1_t5815 *, const MethodInfo*))UnityEvent_1_AddListener_m29060_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m29061_gshared (UnityEvent_1_t908 * __this, UnityAction_1_t5815 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m29061(__this, ___call, method) (( void (*) (UnityEvent_1_t908 *, UnityAction_1_t5815 *, const MethodInfo*))UnityEvent_1_RemoveListener_m29061_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6091_gshared (UnityEvent_1_t908 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6091(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t908 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6091_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2835 * UnityEvent_1_GetDelegate_m6092_gshared (UnityEvent_1_t908 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6092(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2835 * (*) (UnityEvent_1_t908 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6092_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2835 * UnityEvent_1_GetDelegate_m29062_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5815 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29062(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2835 * (*) (Object_t * /* static, unused */, UnityAction_1_t5815 *, const MethodInfo*))UnityEvent_1_GetDelegate_m29062_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5843_gshared (UnityEvent_1_t908 * __this, Vector2_t110  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5843(__this, ___arg0, method) (( void (*) (UnityEvent_1_t908 *, Vector2_t110 , const MethodInfo*))UnityEvent_1_Invoke_m5843_gshared)(__this, ___arg0, method)
