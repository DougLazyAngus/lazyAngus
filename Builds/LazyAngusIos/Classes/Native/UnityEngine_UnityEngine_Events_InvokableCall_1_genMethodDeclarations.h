#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t3746;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3714;
// System.Object[]
struct ObjectU5BU5D_t582;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m23463_gshared (InvokableCall_1_t3746 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m23463(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3746 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m23463_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m23464_gshared (InvokableCall_1_t3746 * __this, UnityAction_1_t3714 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m23464(__this, ___callback, method) (( void (*) (InvokableCall_1_t3746 *, UnityAction_1_t3714 *, const MethodInfo*))InvokableCall_1__ctor_m23464_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m23465_gshared (InvokableCall_1_t3746 * __this, ObjectU5BU5D_t582* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m23465(__this, ___args, method) (( void (*) (InvokableCall_1_t3746 *, ObjectU5BU5D_t582*, const MethodInfo*))InvokableCall_1_Invoke_m23465_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m23466_gshared (InvokableCall_1_t3746 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m23466(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3746 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m23466_gshared)(__this, ___targetObj, ___method, method)
