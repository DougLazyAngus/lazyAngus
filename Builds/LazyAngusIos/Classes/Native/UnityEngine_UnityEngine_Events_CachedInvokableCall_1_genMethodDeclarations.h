#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2904;
// UnityEngine.Object
struct Object_t652;
struct Object_t652_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t634;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m9914_gshared (CachedInvokableCall_1_t2904 * __this, Object_t652 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m9914(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2904 *, Object_t652 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m9914_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61924_gshared (CachedInvokableCall_1_t2904 * __this, ObjectU5BU5D_t634* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m61924(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2904 *, ObjectU5BU5D_t634*, const MethodInfo*))CachedInvokableCall_1_Invoke_m61924_gshared)(__this, ___args, method)
