#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t4001;
// UnityEngine.Object
struct Object_t547;
struct Object_t547_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t531;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m26941_gshared (CachedInvokableCall_1_t4001 * __this, Object_t547 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m26941(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t4001 *, Object_t547 *, MethodInfo_t *, uint8_t, const MethodInfo*))CachedInvokableCall_1__ctor_m26941_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m26943_gshared (CachedInvokableCall_1_t4001 * __this, ObjectU5BU5D_t531* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m26943(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t4001 *, ObjectU5BU5D_t531*, const MethodInfo*))CachedInvokableCall_1_Invoke_m26943_gshared)(__this, ___args, method)
