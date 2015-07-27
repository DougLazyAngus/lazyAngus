#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t4074;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t4075;
// System.Object[]
struct ObjectU5BU5D_t581;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m28024_gshared (InvokableCall_1_t4074 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m28024(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t4074 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m28024_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m28025_gshared (InvokableCall_1_t4074 * __this, UnityAction_1_t4075 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m28025(__this, ___callback, method) (( void (*) (InvokableCall_1_t4074 *, UnityAction_1_t4075 *, const MethodInfo*))InvokableCall_1__ctor_m28025_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m28026_gshared (InvokableCall_1_t4074 * __this, ObjectU5BU5D_t581* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m28026(__this, ___args, method) (( void (*) (InvokableCall_1_t4074 *, ObjectU5BU5D_t581*, const MethodInfo*))InvokableCall_1_Invoke_m28026_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m28027_gshared (InvokableCall_1_t4074 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m28027(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t4074 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m28027_gshared)(__this, ___targetObj, ___method, method)
