#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2974;
// UnityEngine.Object
struct Object_t718;
struct Object_t718_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t697;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m10355_gshared (CachedInvokableCall_1_t2974 * __this, Object_t718 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m10355(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2974 *, Object_t718 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m10355_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m67366_gshared (CachedInvokableCall_1_t2974 * __this, ObjectU5BU5D_t697* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m67366(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2974 *, ObjectU5BU5D_t697*, const MethodInfo*))CachedInvokableCall_1_Invoke_m67366_gshared)(__this, ___args, method)
