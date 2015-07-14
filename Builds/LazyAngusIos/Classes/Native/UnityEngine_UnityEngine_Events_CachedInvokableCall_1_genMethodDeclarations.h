#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t1290;
// UnityEngine.Object
struct Object_t547;
struct Object_t547_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t531;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m6631_gshared (CachedInvokableCall_1_t1290 * __this, Object_t547 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m6631(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1290 *, Object_t547 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m6631_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m26926_gshared (CachedInvokableCall_1_t1290 * __this, ObjectU5BU5D_t531* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m26926(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1290 *, ObjectU5BU5D_t531*, const MethodInfo*))CachedInvokableCall_1_Invoke_m26926_gshared)(__this, ___args, method)
