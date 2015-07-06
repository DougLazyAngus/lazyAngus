#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t1265;
// UnityEngine.Object
struct Object_t528;
struct Object_t528_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t509;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m6484_gshared (CachedInvokableCall_1_t1265 * __this, Object_t528 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m6484(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1265 *, Object_t528 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m6484_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m26895_gshared (CachedInvokableCall_1_t1265 * __this, ObjectU5BU5D_t509* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m26895(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1265 *, ObjectU5BU5D_t509*, const MethodInfo*))CachedInvokableCall_1_Invoke_m26895_gshared)(__this, ___args, method)
