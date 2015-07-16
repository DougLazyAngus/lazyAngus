#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t4008;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t4009;
// System.Object[]
struct ObjectU5BU5D_t541;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m26994_gshared (InvokableCall_1_t4008 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m26994(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t4008 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m26994_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m26995_gshared (InvokableCall_1_t4008 * __this, UnityAction_1_t4009 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m26995(__this, ___callback, method) (( void (*) (InvokableCall_1_t4008 *, UnityAction_1_t4009 *, const MethodInfo*))InvokableCall_1__ctor_m26995_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m26996_gshared (InvokableCall_1_t4008 * __this, ObjectU5BU5D_t541* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m26996(__this, ___args, method) (( void (*) (InvokableCall_1_t4008 *, ObjectU5BU5D_t541*, const MethodInfo*))InvokableCall_1_Invoke_m26996_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m26997_gshared (InvokableCall_1_t4008 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m26997(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t4008 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m26997_gshared)(__this, ___targetObj, ___method, method)
