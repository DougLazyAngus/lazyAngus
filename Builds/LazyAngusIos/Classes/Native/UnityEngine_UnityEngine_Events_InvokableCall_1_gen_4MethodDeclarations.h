#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t9130;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t9131;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m67355_gshared (InvokableCall_1_t9130 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m67355(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t9130 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m67355_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m67356_gshared (InvokableCall_1_t9130 * __this, UnityAction_1_t9131 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m67356(__this, ___callback, method) (( void (*) (InvokableCall_1_t9130 *, UnityAction_1_t9131 *, const MethodInfo*))InvokableCall_1__ctor_m67356_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m67357_gshared (InvokableCall_1_t9130 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m67357(__this, ___args, method) (( void (*) (InvokableCall_1_t9130 *, ObjectU5BU5D_t696*, const MethodInfo*))InvokableCall_1_Invoke_m67357_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m67358_gshared (InvokableCall_1_t9130 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m67358(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t9130 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m67358_gshared)(__this, ___targetObj, ___method, method)
