﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t3761;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3760;
// System.Object[]
struct ObjectU5BU5D_t509;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m24079_gshared (InvokableCall_1_t3761 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m24079(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3761 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m24079_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m24080_gshared (InvokableCall_1_t3761 * __this, UnityAction_1_t3760 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m24080(__this, ___callback, method) (( void (*) (InvokableCall_1_t3761 *, UnityAction_1_t3760 *, const MethodInfo*))InvokableCall_1__ctor_m24080_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m24081_gshared (InvokableCall_1_t3761 * __this, ObjectU5BU5D_t509* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m24081(__this, ___args, method) (( void (*) (InvokableCall_1_t3761 *, ObjectU5BU5D_t509*, const MethodInfo*))InvokableCall_1_Invoke_m24081_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m24082_gshared (InvokableCall_1_t3761 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m24082(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3761 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m24082_gshared)(__this, ___targetObj, ___method, method)