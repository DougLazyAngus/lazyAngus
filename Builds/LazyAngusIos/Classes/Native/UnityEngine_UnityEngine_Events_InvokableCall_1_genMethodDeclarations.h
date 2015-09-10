#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t6293;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6291;
// System.Object[]
struct ObjectU5BU5D_t707;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m31620_gshared (InvokableCall_1_t6293 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m31620(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6293 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m31620_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m31621_gshared (InvokableCall_1_t6293 * __this, UnityAction_1_t6291 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m31621(__this, ___callback, method) (( void (*) (InvokableCall_1_t6293 *, UnityAction_1_t6291 *, const MethodInfo*))InvokableCall_1__ctor_m31621_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m31622_gshared (InvokableCall_1_t6293 * __this, ObjectU5BU5D_t707* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m31622(__this, ___args, method) (( void (*) (InvokableCall_1_t6293 *, ObjectU5BU5D_t707*, const MethodInfo*))InvokableCall_1_Invoke_m31622_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m31623_gshared (InvokableCall_1_t6293 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m31623(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6293 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m31623_gshared)(__this, ___targetObj, ___method, method)
