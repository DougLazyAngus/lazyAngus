﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3745;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3714;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1261;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m23453_gshared (UnityEvent_1_t3745 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m23453(__this, method) (( void (*) (UnityEvent_1_t3745 *, const MethodInfo*))UnityEvent_1__ctor_m23453_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m23455_gshared (UnityEvent_1_t3745 * __this, UnityAction_1_t3714 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m23455(__this, ___call, method) (( void (*) (UnityEvent_1_t3745 *, UnityAction_1_t3714 *, const MethodInfo*))UnityEvent_1_AddListener_m23455_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m23457_gshared (UnityEvent_1_t3745 * __this, UnityAction_1_t3714 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m23457(__this, ___call, method) (( void (*) (UnityEvent_1_t3745 *, UnityAction_1_t3714 *, const MethodInfo*))UnityEvent_1_RemoveListener_m23457_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m23458_gshared (UnityEvent_1_t3745 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m23458(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t3745 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m23458_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1261 * UnityEvent_1_GetDelegate_m23459_gshared (UnityEvent_1_t3745 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m23459(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1261 * (*) (UnityEvent_1_t3745 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m23459_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1261 * UnityEvent_1_GetDelegate_m23461_gshared (Object_t * __this /* static, unused */, UnityAction_1_t3714 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m23461(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1261 * (*) (Object_t * /* static, unused */, UnityAction_1_t3714 *, const MethodInfo*))UnityEvent_1_GetDelegate_m23461_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m23462_gshared (UnityEvent_1_t3745 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m23462(__this, ___arg0, method) (( void (*) (UnityEvent_1_t3745 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m23462_gshared)(__this, ___arg0, method)
