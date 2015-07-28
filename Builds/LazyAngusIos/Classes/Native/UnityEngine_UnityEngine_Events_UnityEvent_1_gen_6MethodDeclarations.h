﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t5824;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t5825;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2825;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m29302_gshared (UnityEvent_1_t5824 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m29302(__this, method) (( void (*) (UnityEvent_1_t5824 *, const MethodInfo*))UnityEvent_1__ctor_m29302_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m29304_gshared (UnityEvent_1_t5824 * __this, UnityAction_1_t5825 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m29304(__this, ___call, method) (( void (*) (UnityEvent_1_t5824 *, UnityAction_1_t5825 *, const MethodInfo*))UnityEvent_1_AddListener_m29304_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m29306_gshared (UnityEvent_1_t5824 * __this, UnityAction_1_t5825 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m29306(__this, ___call, method) (( void (*) (UnityEvent_1_t5824 *, UnityAction_1_t5825 *, const MethodInfo*))UnityEvent_1_RemoveListener_m29306_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m29307_gshared (UnityEvent_1_t5824 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m29307(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5824 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m29307_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2825 * UnityEvent_1_GetDelegate_m29308_gshared (UnityEvent_1_t5824 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29308(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2825 * (*) (UnityEvent_1_t5824 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m29308_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2825 * UnityEvent_1_GetDelegate_m29310_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5825 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29310(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2825 * (*) (Object_t * /* static, unused */, UnityAction_1_t5825 *, const MethodInfo*))UnityEvent_1_GetDelegate_m29310_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m29311_gshared (UnityEvent_1_t5824 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m29311(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5824 *, uint8_t, const MethodInfo*))UnityEvent_1_Invoke_m29311_gshared)(__this, ___arg0, method)
