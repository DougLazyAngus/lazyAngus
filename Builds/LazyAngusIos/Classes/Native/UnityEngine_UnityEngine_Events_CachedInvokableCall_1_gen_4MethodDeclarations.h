#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t8481;
// UnityEngine.Object
struct Object_t644;
struct Object_t644_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t626;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m61892_gshared (CachedInvokableCall_1_t8481 * __this, Object_t644 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m61892(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t8481 *, Object_t644 *, MethodInfo_t *, uint8_t, const MethodInfo*))CachedInvokableCall_1__ctor_m61892_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61894_gshared (CachedInvokableCall_1_t8481 * __this, ObjectU5BU5D_t626* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m61894(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t8481 *, ObjectU5BU5D_t626*, const MethodInfo*))CachedInvokableCall_1_Invoke_m61894_gshared)(__this, ___args, method)
