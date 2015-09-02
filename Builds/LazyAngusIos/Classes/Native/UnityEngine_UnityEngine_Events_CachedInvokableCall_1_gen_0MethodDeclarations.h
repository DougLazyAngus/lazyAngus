#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t2974;
// UnityEngine.Object
struct Object_t717;
struct Object_t717_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t696;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m10340_gshared (CachedInvokableCall_1_t2974 * __this, Object_t717 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m10340(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2974 *, Object_t717 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m10340_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m63078_gshared (CachedInvokableCall_1_t2974 * __this, ObjectU5BU5D_t696* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m63078(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2974 *, ObjectU5BU5D_t696*, const MethodInfo*))CachedInvokableCall_1_Invoke_m63078_gshared)(__this, ___args, method)
