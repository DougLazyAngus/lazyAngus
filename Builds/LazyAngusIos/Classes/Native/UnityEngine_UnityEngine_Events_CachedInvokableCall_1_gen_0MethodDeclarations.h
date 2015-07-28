#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t2898;
// UnityEngine.Object
struct Object_t644;
struct Object_t644_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t626;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m9869_gshared (CachedInvokableCall_1_t2898 * __this, Object_t644 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m9869(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2898 *, Object_t644 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m9869_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61878_gshared (CachedInvokableCall_1_t2898 * __this, ObjectU5BU5D_t626* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m61878(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2898 *, ObjectU5BU5D_t626*, const MethodInfo*))CachedInvokableCall_1_Invoke_m61878_gshared)(__this, ___args, method)
