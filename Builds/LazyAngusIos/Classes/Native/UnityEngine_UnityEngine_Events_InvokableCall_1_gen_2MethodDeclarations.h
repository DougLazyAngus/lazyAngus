#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t3768;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3767;
// System.Object[]
struct ObjectU5BU5D_t541;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m23876_gshared (InvokableCall_1_t3768 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m23876(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3768 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m23876_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m23877_gshared (InvokableCall_1_t3768 * __this, UnityAction_1_t3767 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m23877(__this, ___callback, method) (( void (*) (InvokableCall_1_t3768 *, UnityAction_1_t3767 *, const MethodInfo*))InvokableCall_1__ctor_m23877_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m23878_gshared (InvokableCall_1_t3768 * __this, ObjectU5BU5D_t541* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m23878(__this, ___args, method) (( void (*) (InvokableCall_1_t3768 *, ObjectU5BU5D_t541*, const MethodInfo*))InvokableCall_1_Invoke_m23878_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m23879_gshared (InvokableCall_1_t3768 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m23879(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3768 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m23879_gshared)(__this, ___targetObj, ___method, method)
