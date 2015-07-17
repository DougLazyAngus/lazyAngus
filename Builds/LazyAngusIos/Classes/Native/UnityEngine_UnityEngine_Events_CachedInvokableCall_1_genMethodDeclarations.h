#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t1343;
// UnityEngine.Object
struct Object_t598;
struct Object_t598_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t580;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m7233_gshared (CachedInvokableCall_1_t1343 * __this, Object_t598 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m7233(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1343 *, Object_t598 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m7233_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m28014_gshared (CachedInvokableCall_1_t1343 * __this, ObjectU5BU5D_t580* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m28014(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1343 *, ObjectU5BU5D_t580*, const MethodInfo*))CachedInvokableCall_1_Invoke_m28014_gshared)(__this, ___args, method)
