#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t6455;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1099;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m34410_gshared (InvokableCall_1_t6455 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m34410(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6455 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m34410_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m34411_gshared (InvokableCall_1_t6455 * __this, UnityAction_1_t1099 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m34411(__this, ___callback, method) (( void (*) (InvokableCall_1_t6455 *, UnityAction_1_t1099 *, const MethodInfo*))InvokableCall_1__ctor_m34411_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m34412_gshared (InvokableCall_1_t6455 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m34412(__this, ___args, method) (( void (*) (InvokableCall_1_t6455 *, ObjectU5BU5D_t696*, const MethodInfo*))InvokableCall_1_Invoke_m34412_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m34413_gshared (InvokableCall_1_t6455 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m34413(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6455 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m34413_gshared)(__this, ___targetObj, ___method, method)
