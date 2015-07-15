#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t4003;
// UnityEngine.Object
struct Object_t549;
struct Object_t549_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t533;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m26966_gshared (CachedInvokableCall_1_t4003 * __this, Object_t549 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m26966(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t4003 *, Object_t549 *, MethodInfo_t *, uint8_t, const MethodInfo*))CachedInvokableCall_1__ctor_m26966_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m26968_gshared (CachedInvokableCall_1_t4003 * __this, ObjectU5BU5D_t533* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m26968(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t4003 *, ObjectU5BU5D_t533*, const MethodInfo*))CachedInvokableCall_1_Invoke_m26968_gshared)(__this, ___args, method)
