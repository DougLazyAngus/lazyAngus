﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t3757;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t918;
// System.Object[]
struct ObjectU5BU5D_t533;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m23824_gshared (InvokableCall_1_t3757 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m23824(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3757 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m23824_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m23825_gshared (InvokableCall_1_t3757 * __this, UnityAction_1_t918 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m23825(__this, ___callback, method) (( void (*) (InvokableCall_1_t3757 *, UnityAction_1_t918 *, const MethodInfo*))InvokableCall_1__ctor_m23825_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m23826_gshared (InvokableCall_1_t3757 * __this, ObjectU5BU5D_t533* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m23826(__this, ___args, method) (( void (*) (InvokableCall_1_t3757 *, ObjectU5BU5D_t533*, const MethodInfo*))InvokableCall_1_Invoke_m23826_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m23827_gshared (InvokableCall_1_t3757 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m23827(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3757 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m23827_gshared)(__this, ___targetObj, ___method, method)