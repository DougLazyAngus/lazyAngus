#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t6331;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6330;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2904;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m32196_gshared (UnityEvent_1_t6331 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m32196(__this, method) (( void (*) (UnityEvent_1_t6331 *, const MethodInfo*))UnityEvent_1__ctor_m32196_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m32197_gshared (UnityEvent_1_t6331 * __this, UnityAction_1_t6330 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m32197(__this, ___call, method) (( void (*) (UnityEvent_1_t6331 *, UnityAction_1_t6330 *, const MethodInfo*))UnityEvent_1_AddListener_m32197_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m32199_gshared (UnityEvent_1_t6331 * __this, UnityAction_1_t6330 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m32199(__this, ___call, method) (( void (*) (UnityEvent_1_t6331 *, UnityAction_1_t6330 *, const MethodInfo*))UnityEvent_1_RemoveListener_m32199_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m32200_gshared (UnityEvent_1_t6331 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m32200(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t6331 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m32200_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2904 * UnityEvent_1_GetDelegate_m32201_gshared (UnityEvent_1_t6331 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m32201(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2904 * (*) (UnityEvent_1_t6331 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m32201_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2904 * UnityEvent_1_GetDelegate_m32203_gshared (Object_t * __this /* static, unused */, UnityAction_1_t6330 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m32203(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2904 * (*) (Object_t * /* static, unused */, UnityAction_1_t6330 *, const MethodInfo*))UnityEvent_1_GetDelegate_m32203_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m32204_gshared (UnityEvent_1_t6331 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m32204(__this, ___arg0, method) (( void (*) (UnityEvent_1_t6331 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m32204_gshared)(__this, ___arg0, method)
