#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t3998;
// UnityEngine.Object
struct Object_t549;
struct Object_t549_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t533;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m26949_gshared (CachedInvokableCall_1_t3998 * __this, Object_t549 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m26949(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t3998 *, Object_t549 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m26949_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m26950_gshared (CachedInvokableCall_1_t3998 * __this, ObjectU5BU5D_t533* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m26950(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t3998 *, ObjectU5BU5D_t533*, const MethodInfo*))CachedInvokableCall_1_Invoke_m26950_gshared)(__this, ___args, method)
