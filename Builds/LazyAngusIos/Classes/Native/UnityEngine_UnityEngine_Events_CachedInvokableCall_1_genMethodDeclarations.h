#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t1243;
// UnityEngine.Object
struct Object_t504;
struct Object_t504_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t485;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m6336_gshared (CachedInvokableCall_1_t1243 * __this, Object_t504 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m6336(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1243 *, Object_t504 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m6336_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m26737_gshared (CachedInvokableCall_1_t1243 * __this, ObjectU5BU5D_t485* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m26737(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1243 *, ObjectU5BU5D_t485*, const MethodInfo*))CachedInvokableCall_1_Invoke_m26737_gshared)(__this, ___args, method)
