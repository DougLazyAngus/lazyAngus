#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t2958;
// UnityEngine.Object
struct Object_t704;
struct Object_t704_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t683;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m10211_gshared (CachedInvokableCall_1_t2958 * __this, Object_t704 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m10211(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2958 *, Object_t704 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m10211_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m62746_gshared (CachedInvokableCall_1_t2958 * __this, ObjectU5BU5D_t683* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m62746(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2958 *, ObjectU5BU5D_t683*, const MethodInfo*))CachedInvokableCall_1_Invoke_m62746_gshared)(__this, ___args, method)
