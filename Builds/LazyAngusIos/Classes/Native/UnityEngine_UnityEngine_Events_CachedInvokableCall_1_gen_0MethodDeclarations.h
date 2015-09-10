#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t2985;
// UnityEngine.Object
struct Object_t728;
struct Object_t728_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t707;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m10413_gshared (CachedInvokableCall_1_t2985 * __this, Object_t728 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m10413(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2985 *, Object_t728 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m10413_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m67436_gshared (CachedInvokableCall_1_t2985 * __this, ObjectU5BU5D_t707* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m67436(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2985 *, ObjectU5BU5D_t707*, const MethodInfo*))CachedInvokableCall_1_Invoke_m67436_gshared)(__this, ___args, method)
