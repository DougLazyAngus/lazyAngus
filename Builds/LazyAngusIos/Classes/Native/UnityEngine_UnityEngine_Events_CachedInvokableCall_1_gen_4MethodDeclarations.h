#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t8489;
// UnityEngine.Object
struct Object_t652;
struct Object_t652_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t634;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m61939_gshared (CachedInvokableCall_1_t8489 * __this, Object_t652 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m61939(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t8489 *, Object_t652 *, MethodInfo_t *, uint8_t, const MethodInfo*))CachedInvokableCall_1__ctor_m61939_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61941_gshared (CachedInvokableCall_1_t8489 * __this, ObjectU5BU5D_t634* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m61941(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t8489 *, ObjectU5BU5D_t634*, const MethodInfo*))CachedInvokableCall_1_Invoke_m61941_gshared)(__this, ___args, method)
