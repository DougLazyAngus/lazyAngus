#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t6484;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t6483;
// System.Object[]
struct ObjectU5BU5D_t700;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m34770_gshared (InvokableCall_1_t6484 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m34770(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6484 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m34770_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m34771_gshared (InvokableCall_1_t6484 * __this, UnityAction_1_t6483 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m34771(__this, ___callback, method) (( void (*) (InvokableCall_1_t6484 *, UnityAction_1_t6483 *, const MethodInfo*))InvokableCall_1__ctor_m34771_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m34772_gshared (InvokableCall_1_t6484 * __this, ObjectU5BU5D_t700* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m34772(__this, ___args, method) (( void (*) (InvokableCall_1_t6484 *, ObjectU5BU5D_t700*, const MethodInfo*))InvokableCall_1_Invoke_m34772_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m34773_gshared (InvokableCall_1_t6484 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m34773(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6484 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m34773_gshared)(__this, ___targetObj, ___method, method)
