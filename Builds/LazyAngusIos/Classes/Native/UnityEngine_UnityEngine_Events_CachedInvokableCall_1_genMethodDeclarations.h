#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2897;
// UnityEngine.Object
struct Object_t644;
struct Object_t644_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t626;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m9868_gshared (CachedInvokableCall_1_t2897 * __this, Object_t644 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m9868(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2897 *, Object_t644 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m9868_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61877_gshared (CachedInvokableCall_1_t2897 * __this, ObjectU5BU5D_t626* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m61877(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2897 *, ObjectU5BU5D_t626*, const MethodInfo*))CachedInvokableCall_1_Invoke_m61877_gshared)(__this, ___args, method)
