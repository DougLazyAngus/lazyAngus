#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t3767;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t931;
// System.Object[]
struct ObjectU5BU5D_t580;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m23896_gshared (InvokableCall_1_t3767 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m23896(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3767 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m23896_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m23897_gshared (InvokableCall_1_t3767 * __this, UnityAction_1_t931 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m23897(__this, ___callback, method) (( void (*) (InvokableCall_1_t3767 *, UnityAction_1_t931 *, const MethodInfo*))InvokableCall_1__ctor_m23897_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m23898_gshared (InvokableCall_1_t3767 * __this, ObjectU5BU5D_t580* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m23898(__this, ___args, method) (( void (*) (InvokableCall_1_t3767 *, ObjectU5BU5D_t580*, const MethodInfo*))InvokableCall_1_Invoke_m23898_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m23899_gshared (InvokableCall_1_t3767 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m23899(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3767 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m23899_gshared)(__this, ___targetObj, ___method, method)
