#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t5924;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5923;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m30199_gshared (InvokableCall_1_t5924 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m30199(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5924 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m30199_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m30200_gshared (InvokableCall_1_t5924 * __this, UnityAction_1_t5923 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m30200(__this, ___callback, method) (( void (*) (InvokableCall_1_t5924 *, UnityAction_1_t5923 *, const MethodInfo*))InvokableCall_1__ctor_m30200_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m30201_gshared (InvokableCall_1_t5924 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m30201(__this, ___args, method) (( void (*) (InvokableCall_1_t5924 *, ObjectU5BU5D_t696*, const MethodInfo*))InvokableCall_1_Invoke_m30201_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m30202_gshared (InvokableCall_1_t5924 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m30202(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5924 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m30202_gshared)(__this, ___targetObj, ___method, method)
