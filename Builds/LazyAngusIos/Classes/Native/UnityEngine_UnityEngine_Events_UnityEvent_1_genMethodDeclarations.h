#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t961;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t818;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2904;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m6160(__this, method) (( void (*) (UnityEvent_1_t961 *, const MethodInfo*))UnityEvent_1__ctor_m32196_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m4487(__this, ___call, method) (( void (*) (UnityEvent_1_t961 *, UnityAction_1_t818 *, const MethodInfo*))UnityEvent_1_AddListener_m32197_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m32198(__this, ___call, method) (( void (*) (UnityEvent_1_t961 *, UnityAction_1_t818 *, const MethodInfo*))UnityEvent_1_RemoveListener_m32199_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m6504(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t961 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m32200_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m6505(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2904 * (*) (UnityEvent_1_t961 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m32201_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m32202(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2904 * (*) (Object_t * /* static, unused */, UnityAction_1_t818 *, const MethodInfo*))UnityEvent_1_GetDelegate_m32203_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m6214(__this, ___arg0, method) (( void (*) (UnityEvent_1_t961 *, String_t*, const MethodInfo*))UnityEvent_1_Invoke_m32204_gshared)(__this, ___arg0, method)
