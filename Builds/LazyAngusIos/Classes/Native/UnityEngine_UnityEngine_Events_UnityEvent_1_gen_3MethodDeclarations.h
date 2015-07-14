#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t801;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3756;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1205;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m4851_gshared (UnityEvent_1_t801 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m4851(__this, method) (( void (*) (UnityEvent_1_t801 *, const MethodInfo*))UnityEvent_1__ctor_m4851_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m23803_gshared (UnityEvent_1_t801 * __this, UnityAction_1_t3756 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m23803(__this, ___call, method) (( void (*) (UnityEvent_1_t801 *, UnityAction_1_t3756 *, const MethodInfo*))UnityEvent_1_AddListener_m23803_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m23804_gshared (UnityEvent_1_t801 * __this, UnityAction_1_t3756 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m23804(__this, ___call, method) (( void (*) (UnityEvent_1_t801 *, UnityAction_1_t3756 *, const MethodInfo*))UnityEvent_1_RemoveListener_m23804_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5110_gshared (UnityEvent_1_t801 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5110(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t801 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5110_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1205 * UnityEvent_1_GetDelegate_m5111_gshared (UnityEvent_1_t801 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5111(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1205 * (*) (UnityEvent_1_t801 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5111_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1205 * UnityEvent_1_GetDelegate_m23805_gshared (Object_t * __this /* static, unused */, UnityAction_1_t3756 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m23805(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1205 * (*) (Object_t * /* static, unused */, UnityAction_1_t3756 *, const MethodInfo*))UnityEvent_1_GetDelegate_m23805_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m4860_gshared (UnityEvent_1_t801 * __this, Vector2_t68  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m4860(__this, ___arg0, method) (( void (*) (UnityEvent_1_t801 *, Vector2_t68 , const MethodInfo*))UnityEvent_1_Invoke_m4860_gshared)(__this, ___arg0, method)
