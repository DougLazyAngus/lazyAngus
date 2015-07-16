#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t3766;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t926;
// System.Object[]
struct ObjectU5BU5D_t541;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m23865_gshared (InvokableCall_1_t3766 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m23865(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3766 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m23865_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m23866_gshared (InvokableCall_1_t3766 * __this, UnityAction_1_t926 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m23866(__this, ___callback, method) (( void (*) (InvokableCall_1_t3766 *, UnityAction_1_t926 *, const MethodInfo*))InvokableCall_1__ctor_m23866_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m23867_gshared (InvokableCall_1_t3766 * __this, ObjectU5BU5D_t541* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m23867(__this, ___args, method) (( void (*) (InvokableCall_1_t3766 *, ObjectU5BU5D_t541*, const MethodInfo*))InvokableCall_1_Invoke_m23867_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m23868_gshared (InvokableCall_1_t3766 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m23868(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3766 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m23868_gshared)(__this, ___targetObj, ___method, method)
