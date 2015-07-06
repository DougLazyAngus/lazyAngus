#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t3651;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3619;
// System.Object[]
struct ObjectU5BU5D_t509;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m22329_gshared (InvokableCall_1_t3651 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m22329(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3651 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m22329_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m22330_gshared (InvokableCall_1_t3651 * __this, UnityAction_1_t3619 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m22330(__this, ___callback, method) (( void (*) (InvokableCall_1_t3651 *, UnityAction_1_t3619 *, const MethodInfo*))InvokableCall_1__ctor_m22330_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m22331_gshared (InvokableCall_1_t3651 * __this, ObjectU5BU5D_t509* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m22331(__this, ___args, method) (( void (*) (InvokableCall_1_t3651 *, ObjectU5BU5D_t509*, const MethodInfo*))InvokableCall_1_Invoke_m22331_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m22332_gshared (InvokableCall_1_t3651 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m22332(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3651 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m22332_gshared)(__this, ___targetObj, ___method, method)
