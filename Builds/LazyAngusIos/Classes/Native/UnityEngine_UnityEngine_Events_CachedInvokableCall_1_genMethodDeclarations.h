#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2957;
// UnityEngine.Object
struct Object_t704;
struct Object_t704_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t683;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m10210_gshared (CachedInvokableCall_1_t2957 * __this, Object_t704 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m10210(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2957 *, Object_t704 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m10210_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m62745_gshared (CachedInvokableCall_1_t2957 * __this, ObjectU5BU5D_t683* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m62745(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2957 *, ObjectU5BU5D_t683*, const MethodInfo*))CachedInvokableCall_1_Invoke_m62745_gshared)(__this, ___args, method)
