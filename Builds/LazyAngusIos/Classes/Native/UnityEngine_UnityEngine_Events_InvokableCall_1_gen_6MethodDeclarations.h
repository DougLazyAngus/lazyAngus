﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t3983;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t3762;
// System.Object[]
struct ObjectU5BU5D_t509;

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"
#define InvokableCall_1__ctor_m26913(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3983 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m24079_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m26914(__this, ___callback, method) (( void (*) (InvokableCall_1_t3983 *, UnityAction_1_t3762 *, const MethodInfo*))InvokableCall_1__ctor_m24080_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m26915(__this, ___args, method) (( void (*) (InvokableCall_1_t3983 *, ObjectU5BU5D_t509*, const MethodInfo*))InvokableCall_1_Invoke_m24081_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m26916(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3983 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m24082_gshared)(__this, ___targetObj, ___method, method)