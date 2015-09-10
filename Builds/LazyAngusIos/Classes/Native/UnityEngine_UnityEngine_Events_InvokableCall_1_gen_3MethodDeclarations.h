#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t6491;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t6490;
// System.Object[]
struct ObjectU5BU5D_t707;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m34827_gshared (InvokableCall_1_t6491 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m34827(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6491 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m34827_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m34828_gshared (InvokableCall_1_t6491 * __this, UnityAction_1_t6490 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m34828(__this, ___callback, method) (( void (*) (InvokableCall_1_t6491 *, UnityAction_1_t6490 *, const MethodInfo*))InvokableCall_1__ctor_m34828_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m34829_gshared (InvokableCall_1_t6491 * __this, ObjectU5BU5D_t707* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m34829(__this, ___args, method) (( void (*) (InvokableCall_1_t6491 *, ObjectU5BU5D_t707*, const MethodInfo*))InvokableCall_1_Invoke_m34829_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m34830_gshared (InvokableCall_1_t6491 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m34830(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6491 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m34830_gshared)(__this, ___targetObj, ___method, method)
