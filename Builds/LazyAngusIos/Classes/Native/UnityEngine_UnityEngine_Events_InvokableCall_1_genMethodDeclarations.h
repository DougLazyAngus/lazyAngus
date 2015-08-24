#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t5764;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5762;
// System.Object[]
struct ObjectU5BU5D_t683;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m27631_gshared (InvokableCall_1_t5764 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m27631(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5764 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m27631_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m27632_gshared (InvokableCall_1_t5764 * __this, UnityAction_1_t5762 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m27632(__this, ___callback, method) (( void (*) (InvokableCall_1_t5764 *, UnityAction_1_t5762 *, const MethodInfo*))InvokableCall_1__ctor_m27632_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m27633_gshared (InvokableCall_1_t5764 * __this, ObjectU5BU5D_t683* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m27633(__this, ___args, method) (( void (*) (InvokableCall_1_t5764 *, ObjectU5BU5D_t683*, const MethodInfo*))InvokableCall_1_Invoke_m27633_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m27634_gshared (InvokableCall_1_t5764 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m27634(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5764 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m27634_gshared)(__this, ___targetObj, ___method, method)
