#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t4074;
// UnityEngine.Object
struct Object_t600;
struct Object_t600_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t582;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m28027_gshared (CachedInvokableCall_1_t4074 * __this, Object_t600 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m28027(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t4074 *, Object_t600 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m28027_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m28028_gshared (CachedInvokableCall_1_t4074 * __this, ObjectU5BU5D_t582* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m28028(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t4074 *, ObjectU5BU5D_t582*, const MethodInfo*))CachedInvokableCall_1_Invoke_m28028_gshared)(__this, ___args, method)
