﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t4015;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1207;

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_3__ctor_m27158_gshared (UnityEvent_3_t4015 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m27158(__this, method) (( void (*) (UnityEvent_3_t4015 *, const MethodInfo*))UnityEvent_3__ctor_m27158_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m27159_gshared (UnityEvent_3_t4015 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m27159(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_3_t4015 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m27159_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1207 * UnityEvent_3_GetDelegate_m27160_gshared (UnityEvent_3_t4015 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m27160(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1207 * (*) (UnityEvent_3_t4015 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m27160_gshared)(__this, ___target, ___theFunction, method)
