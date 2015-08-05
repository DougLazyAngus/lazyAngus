#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2908;
// UnityEngine.Object
struct Object_t655;
struct Object_t655_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t638;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m9945_gshared (CachedInvokableCall_1_t2908 * __this, Object_t655 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m9945(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2908 *, Object_t655 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m9945_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61955_gshared (CachedInvokableCall_1_t2908 * __this, ObjectU5BU5D_t638* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m61955(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2908 *, ObjectU5BU5D_t638*, const MethodInfo*))CachedInvokableCall_1_Invoke_m61955_gshared)(__this, ___args, method)
