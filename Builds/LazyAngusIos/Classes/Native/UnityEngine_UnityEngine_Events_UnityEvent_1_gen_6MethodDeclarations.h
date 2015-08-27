#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t5914;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t5915;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2884;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m30177_gshared (UnityEvent_1_t5914 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m30177(__this, method) (( void (*) (UnityEvent_1_t5914 *, const MethodInfo*))UnityEvent_1__ctor_m30177_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m30179_gshared (UnityEvent_1_t5914 * __this, UnityAction_1_t5915 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m30179(__this, ___call, method) (( void (*) (UnityEvent_1_t5914 *, UnityAction_1_t5915 *, const MethodInfo*))UnityEvent_1_AddListener_m30179_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m30181_gshared (UnityEvent_1_t5914 * __this, UnityAction_1_t5915 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m30181(__this, ___call, method) (( void (*) (UnityEvent_1_t5914 *, UnityAction_1_t5915 *, const MethodInfo*))UnityEvent_1_RemoveListener_m30181_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m30182_gshared (UnityEvent_1_t5914 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m30182(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5914 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m30182_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2884 * UnityEvent_1_GetDelegate_m30183_gshared (UnityEvent_1_t5914 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m30183(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2884 * (*) (UnityEvent_1_t5914 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m30183_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2884 * UnityEvent_1_GetDelegate_m30185_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5915 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m30185(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2884 * (*) (Object_t * /* static, unused */, UnityAction_1_t5915 *, const MethodInfo*))UnityEvent_1_GetDelegate_m30185_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m30186_gshared (UnityEvent_1_t5914 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m30186(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5914 *, uint8_t, const MethodInfo*))UnityEvent_1_Invoke_m30186_gshared)(__this, ___arg0, method)
