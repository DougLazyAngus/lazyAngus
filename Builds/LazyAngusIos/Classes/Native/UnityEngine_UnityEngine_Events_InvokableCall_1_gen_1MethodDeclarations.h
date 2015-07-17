#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t3831;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t972;
// System.Object[]
struct ObjectU5BU5D_t580;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m24887_gshared (InvokableCall_1_t3831 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m24887(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3831 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m24887_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m24888_gshared (InvokableCall_1_t3831 * __this, UnityAction_1_t972 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m24888(__this, ___callback, method) (( void (*) (InvokableCall_1_t3831 *, UnityAction_1_t972 *, const MethodInfo*))InvokableCall_1__ctor_m24888_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m24889_gshared (InvokableCall_1_t3831 * __this, ObjectU5BU5D_t580* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m24889(__this, ___args, method) (( void (*) (InvokableCall_1_t3831 *, ObjectU5BU5D_t580*, const MethodInfo*))InvokableCall_1_Invoke_m24889_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m24890_gshared (InvokableCall_1_t3831 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m24890(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3831 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m24890_gshared)(__this, ___targetObj, ___method, method)
