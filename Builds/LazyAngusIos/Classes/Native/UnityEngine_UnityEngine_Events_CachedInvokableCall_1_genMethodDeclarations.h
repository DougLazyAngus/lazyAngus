#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2907;
// UnityEngine.Object
struct Object_t653;
struct Object_t653_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t636;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m9937_gshared (CachedInvokableCall_1_t2907 * __this, Object_t653 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m9937(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2907 *, Object_t653 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m9937_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m61947_gshared (CachedInvokableCall_1_t2907 * __this, ObjectU5BU5D_t636* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m61947(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2907 *, ObjectU5BU5D_t636*, const MethodInfo*))CachedInvokableCall_1_Invoke_m61947_gshared)(__this, ___args, method)
