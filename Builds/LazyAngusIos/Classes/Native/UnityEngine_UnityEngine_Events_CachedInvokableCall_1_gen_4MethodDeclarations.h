#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t4078;
// UnityEngine.Object
struct Object_t599;
struct Object_t599_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t581;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m28037_gshared (CachedInvokableCall_1_t4078 * __this, Object_t599 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m28037(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t4078 *, Object_t599 *, MethodInfo_t *, uint8_t, const MethodInfo*))CachedInvokableCall_1__ctor_m28037_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m28039_gshared (CachedInvokableCall_1_t4078 * __this, ObjectU5BU5D_t581* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m28039(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t4078 *, ObjectU5BU5D_t581*, const MethodInfo*))CachedInvokableCall_1_Invoke_m28039_gshared)(__this, ___args, method)
