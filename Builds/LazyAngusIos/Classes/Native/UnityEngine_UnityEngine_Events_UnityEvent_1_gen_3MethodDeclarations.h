#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t907;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5813;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2833;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m5822_gshared (UnityEvent_1_t907 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5822(__this, method) (( void (*) (UnityEvent_1_t907 *, const MethodInfo*))UnityEvent_1__ctor_m5822_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m29048_gshared (UnityEvent_1_t907 * __this, UnityAction_1_t5813 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m29048(__this, ___call, method) (( void (*) (UnityEvent_1_t907 *, UnityAction_1_t5813 *, const MethodInfo*))UnityEvent_1_AddListener_m29048_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m29049_gshared (UnityEvent_1_t907 * __this, UnityAction_1_t5813 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m29049(__this, ___call, method) (( void (*) (UnityEvent_1_t907 *, UnityAction_1_t5813 *, const MethodInfo*))UnityEvent_1_RemoveListener_m29049_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6079_gshared (UnityEvent_1_t907 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6079(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t907 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6079_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2833 * UnityEvent_1_GetDelegate_m6080_gshared (UnityEvent_1_t907 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6080(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2833 * (*) (UnityEvent_1_t907 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6080_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2833 * UnityEvent_1_GetDelegate_m29050_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5813 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29050(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2833 * (*) (Object_t * /* static, unused */, UnityAction_1_t5813 *, const MethodInfo*))UnityEvent_1_GetDelegate_m29050_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5831_gshared (UnityEvent_1_t907 * __this, Vector2_t110  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5831(__this, ___arg0, method) (( void (*) (UnityEvent_1_t907 *, Vector2_t110 , const MethodInfo*))UnityEvent_1_Invoke_m5831_gshared)(__this, ___arg0, method)
