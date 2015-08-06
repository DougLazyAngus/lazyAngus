#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t8489;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t5811;
// System.Object[]
struct ObjectU5BU5D_t635;

// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m61951(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t8489 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m27525_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m61952(__this, ___callback, method) (( void (*) (InvokableCall_1_t8489 *, UnityAction_1_t5811 *, const MethodInfo*))InvokableCall_1__ctor_m27526_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m61953(__this, ___args, method) (( void (*) (InvokableCall_1_t8489 *, ObjectU5BU5D_t635*, const MethodInfo*))InvokableCall_1_Invoke_m27527_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m61954(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t8489 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m27528_gshared)(__this, ___targetObj, ___method, method)
