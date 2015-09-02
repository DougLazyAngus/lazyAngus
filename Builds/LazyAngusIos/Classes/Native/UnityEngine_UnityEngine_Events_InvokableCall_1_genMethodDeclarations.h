#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t5793;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5791;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m27963_gshared (InvokableCall_1_t5793 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m27963(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5793 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m27963_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m27964_gshared (InvokableCall_1_t5793 * __this, UnityAction_1_t5791 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m27964(__this, ___callback, method) (( void (*) (InvokableCall_1_t5793 *, UnityAction_1_t5791 *, const MethodInfo*))InvokableCall_1__ctor_m27964_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m27965_gshared (InvokableCall_1_t5793 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m27965(__this, ___args, method) (( void (*) (InvokableCall_1_t5793 *, ObjectU5BU5D_t696*, const MethodInfo*))InvokableCall_1_Invoke_m27965_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m27966_gshared (InvokableCall_1_t5793 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m27966(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5793 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m27966_gshared)(__this, ___targetObj, ___method, method)
