#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t1346;
// UnityEngine.Object
struct Object_t600;
struct Object_t600_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t582;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m7245_gshared (CachedInvokableCall_1_t1346 * __this, Object_t600 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m7245(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1346 *, Object_t600 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m7245_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m28026_gshared (CachedInvokableCall_1_t1346 * __this, ObjectU5BU5D_t582* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m28026(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1346 *, ObjectU5BU5D_t582*, const MethodInfo*))CachedInvokableCall_1_Invoke_m28026_gshared)(__this, ___args, method)
