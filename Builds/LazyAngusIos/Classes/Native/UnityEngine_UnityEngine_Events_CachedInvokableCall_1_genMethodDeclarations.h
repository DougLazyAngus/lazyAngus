#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t1300;
// UnityEngine.Object
struct Object_t557;
struct Object_t557_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t541;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m6694_gshared (CachedInvokableCall_1_t1300 * __this, Object_t557 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m6694(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1300 *, Object_t557 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m6694_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m26992_gshared (CachedInvokableCall_1_t1300 * __this, ObjectU5BU5D_t541* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m26992(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1300 *, ObjectU5BU5D_t541*, const MethodInfo*))CachedInvokableCall_1_Invoke_m26992_gshared)(__this, ___args, method)
