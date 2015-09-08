#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2977;
// UnityEngine.Object
struct Object_t721;
struct Object_t721_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t700;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m10355_gshared (CachedInvokableCall_1_t2977 * __this, Object_t721 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m10355(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2977 *, Object_t721 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m10355_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m67378_gshared (CachedInvokableCall_1_t2977 * __this, ObjectU5BU5D_t700* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m67378(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2977 *, ObjectU5BU5D_t700*, const MethodInfo*))CachedInvokableCall_1_Invoke_m67378_gshared)(__this, ___args, method)
