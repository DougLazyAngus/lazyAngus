#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t3714;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t871;
// System.Object[]
struct ObjectU5BU5D_t485;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m23610_gshared (InvokableCall_1_t3714 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m23610(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3714 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m23610_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m23611_gshared (InvokableCall_1_t3714 * __this, UnityAction_1_t871 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m23611(__this, ___callback, method) (( void (*) (InvokableCall_1_t3714 *, UnityAction_1_t871 *, const MethodInfo*))InvokableCall_1__ctor_m23611_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m23612_gshared (InvokableCall_1_t3714 * __this, ObjectU5BU5D_t485* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m23612(__this, ___args, method) (( void (*) (InvokableCall_1_t3714 *, ObjectU5BU5D_t485*, const MethodInfo*))InvokableCall_1_Invoke_m23612_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m23613_gshared (InvokableCall_1_t3714 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m23613(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3714 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m23613_gshared)(__this, ___targetObj, ___method, method)
