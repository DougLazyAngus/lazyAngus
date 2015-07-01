#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t770;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t3738;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1157;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6MethodDeclarations.h"
#define UnityEvent_1__ctor_m4623(__this, method) (( void (*) (UnityEvent_1_t770 *, const MethodInfo*))UnityEvent_1__ctor_m23907_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m23908(__this, ___call, method) (( void (*) (UnityEvent_1_t770 *, UnityAction_1_t3738 *, const MethodInfo*))UnityEvent_1_AddListener_m23909_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m23910(__this, ___call, method) (( void (*) (UnityEvent_1_t770 *, UnityAction_1_t3738 *, const MethodInfo*))UnityEvent_1_RemoveListener_m23911_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m4822(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t770 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m23912_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m4823(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1157 * (*) (UnityEvent_1_t770 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m23913_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m23914(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1157 * (*) (Object_t * /* static, unused */, UnityAction_1_t3738 *, const MethodInfo*))UnityEvent_1_GetDelegate_m23915_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
#define UnityEvent_1_Invoke_m4624(__this, ___arg0, method) (( void (*) (UnityEvent_1_t770 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m23916_gshared)(__this, ___arg0, method)
