﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t4090;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1261;

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_2__ctor_m28233_gshared (UnityEvent_2_t4090 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m28233(__this, method) (( void (*) (UnityEvent_2_t4090 *, const MethodInfo*))UnityEvent_2__ctor_m28233_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m28234_gshared (UnityEvent_2_t4090 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m28234(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_2_t4090 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m28234_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1261 * UnityEvent_2_GetDelegate_m28235_gshared (UnityEvent_2_t4090 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m28235(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1261 * (*) (UnityEvent_2_t4090 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m28235_gshared)(__this, ___target, ___theFunction, method)
