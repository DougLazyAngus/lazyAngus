#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t8477;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t8478;
// System.Object[]
struct ObjectU5BU5D_t626;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m61879_gshared (InvokableCall_1_t8477 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m61879(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t8477 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m61879_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m61880_gshared (InvokableCall_1_t8477 * __this, UnityAction_1_t8478 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m61880(__this, ___callback, method) (( void (*) (InvokableCall_1_t8477 *, UnityAction_1_t8478 *, const MethodInfo*))InvokableCall_1__ctor_m61880_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m61881_gshared (InvokableCall_1_t8477 * __this, ObjectU5BU5D_t626* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m61881(__this, ___args, method) (( void (*) (InvokableCall_1_t8477 *, ObjectU5BU5D_t626*, const MethodInfo*))InvokableCall_1_Invoke_m61881_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m61882_gshared (InvokableCall_1_t8477 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m61882(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t8477 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m61882_gshared)(__this, ___targetObj, ___method, method)
