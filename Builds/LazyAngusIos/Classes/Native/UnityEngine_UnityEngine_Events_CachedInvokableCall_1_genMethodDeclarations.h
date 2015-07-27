#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t1345;
// UnityEngine.Object
struct Object_t600;
struct Object_t600_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t582;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m7244_gshared (CachedInvokableCall_1_t1345 * __this, Object_t600 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m7244(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1345 *, Object_t600 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m7244_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m28025_gshared (CachedInvokableCall_1_t1345 * __this, ObjectU5BU5D_t582* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m28025(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1345 *, ObjectU5BU5D_t582*, const MethodInfo*))CachedInvokableCall_1_Invoke_m28025_gshared)(__this, ___args, method)
