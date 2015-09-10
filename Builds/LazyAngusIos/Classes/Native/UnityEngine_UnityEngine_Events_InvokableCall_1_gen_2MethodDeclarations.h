#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t6470;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t6469;
// System.Object[]
struct ObjectU5BU5D_t707;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m34503_gshared (InvokableCall_1_t6470 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m34503(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t6470 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m34503_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m34504_gshared (InvokableCall_1_t6470 * __this, UnityAction_1_t6469 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m34504(__this, ___callback, method) (( void (*) (InvokableCall_1_t6470 *, UnityAction_1_t6469 *, const MethodInfo*))InvokableCall_1__ctor_m34504_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m34505_gshared (InvokableCall_1_t6470 * __this, ObjectU5BU5D_t707* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m34505(__this, ___args, method) (( void (*) (InvokableCall_1_t6470 *, ObjectU5BU5D_t707*, const MethodInfo*))InvokableCall_1_Invoke_m34505_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m34506_gshared (InvokableCall_1_t6470 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m34506(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t6470 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m34506_gshared)(__this, ___targetObj, ___method, method)
