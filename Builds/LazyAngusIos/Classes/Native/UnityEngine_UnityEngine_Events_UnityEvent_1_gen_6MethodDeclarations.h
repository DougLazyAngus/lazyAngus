#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t3853;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3854;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1260;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m25192_gshared (UnityEvent_1_t3853 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m25192(__this, method) (( void (*) (UnityEvent_1_t3853 *, const MethodInfo*))UnityEvent_1__ctor_m25192_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m25194_gshared (UnityEvent_1_t3853 * __this, UnityAction_1_t3854 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m25194(__this, ___call, method) (( void (*) (UnityEvent_1_t3853 *, UnityAction_1_t3854 *, const MethodInfo*))UnityEvent_1_AddListener_m25194_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m25196_gshared (UnityEvent_1_t3853 * __this, UnityAction_1_t3854 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m25196(__this, ___call, method) (( void (*) (UnityEvent_1_t3853 *, UnityAction_1_t3854 *, const MethodInfo*))UnityEvent_1_RemoveListener_m25196_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m25197_gshared (UnityEvent_1_t3853 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m25197(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t3853 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m25197_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1260 * UnityEvent_1_GetDelegate_m25198_gshared (UnityEvent_1_t3853 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m25198(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1260 * (*) (UnityEvent_1_t3853 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m25198_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1260 * UnityEvent_1_GetDelegate_m25200_gshared (Object_t * __this /* static, unused */, UnityAction_1_t3854 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m25200(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1260 * (*) (Object_t * /* static, unused */, UnityAction_1_t3854 *, const MethodInfo*))UnityEvent_1_GetDelegate_m25200_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m25201_gshared (UnityEvent_1_t3853 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m25201(__this, ___arg0, method) (( void (*) (UnityEvent_1_t3853 *, uint8_t, const MethodInfo*))UnityEvent_1_Invoke_m25201_gshared)(__this, ___arg0, method)
