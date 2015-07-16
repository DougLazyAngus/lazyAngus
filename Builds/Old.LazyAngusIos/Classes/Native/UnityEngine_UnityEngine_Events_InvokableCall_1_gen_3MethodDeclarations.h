#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t3780;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3779;
// System.Object[]
struct ObjectU5BU5D_t533;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m24135_gshared (InvokableCall_1_t3780 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m24135(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3780 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m24135_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m24136_gshared (InvokableCall_1_t3780 * __this, UnityAction_1_t3779 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m24136(__this, ___callback, method) (( void (*) (InvokableCall_1_t3780 *, UnityAction_1_t3779 *, const MethodInfo*))InvokableCall_1__ctor_m24136_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m24137_gshared (InvokableCall_1_t3780 * __this, ObjectU5BU5D_t533* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m24137(__this, ___args, method) (( void (*) (InvokableCall_1_t3780 *, ObjectU5BU5D_t533*, const MethodInfo*))InvokableCall_1_Invoke_m24137_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m24138_gshared (InvokableCall_1_t3780 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m24138(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3780 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m24138_gshared)(__this, ___targetObj, ___method, method)
