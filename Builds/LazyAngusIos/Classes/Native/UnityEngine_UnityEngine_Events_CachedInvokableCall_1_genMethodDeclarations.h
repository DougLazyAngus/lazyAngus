#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2973;
// UnityEngine.Object
struct Object_t717;
struct Object_t717_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m10342_gshared (CachedInvokableCall_1_t2973 * __this, Object_t717 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m10342(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2973 *, Object_t717 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m10342_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m67353_gshared (CachedInvokableCall_1_t2973 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m67353(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2973 *, ObjectU5BU5D_t696*, const MethodInfo*))CachedInvokableCall_1_Invoke_m67353_gshared)(__this, ___args, method)
