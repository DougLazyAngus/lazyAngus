#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t2905;
// UnityEngine.Object
struct Object_t652;
struct Object_t652_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t634;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m9915_gshared (CachedInvokableCall_1_t2905 * __this, Object_t652 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m9915(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2905 *, Object_t652 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m9915_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61925_gshared (CachedInvokableCall_1_t2905 * __this, ObjectU5BU5D_t634* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m61925(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2905 *, ObjectU5BU5D_t634*, const MethodInfo*))CachedInvokableCall_1_Invoke_m61925_gshared)(__this, ___args, method)
