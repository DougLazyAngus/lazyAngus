#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t6393;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1056;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m33377_gshared (InvokableCall_1_t6393 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m33377(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6393 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m33377_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m33378_gshared (InvokableCall_1_t6393 * __this, UnityAction_1_t1056 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m33378(__this, ___callback, method) (( void (*) (InvokableCall_1_t6393 *, UnityAction_1_t1056 *, const MethodInfo*))InvokableCall_1__ctor_m33378_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m33379_gshared (InvokableCall_1_t6393 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m33379(__this, ___args, method) (( void (*) (InvokableCall_1_t6393 *, ObjectU5BU5D_t696*, const MethodInfo*))InvokableCall_1_Invoke_m33379_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m33380_gshared (InvokableCall_1_t6393 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m33380(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6393 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m33380_gshared)(__this, ___targetObj, ___method, method)
