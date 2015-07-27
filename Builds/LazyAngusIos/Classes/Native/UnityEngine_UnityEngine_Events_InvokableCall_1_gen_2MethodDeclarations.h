#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t3834;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3833;
// System.Object[]
struct ObjectU5BU5D_t581;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m24906_gshared (InvokableCall_1_t3834 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m24906(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3834 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m24906_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m24907_gshared (InvokableCall_1_t3834 * __this, UnityAction_1_t3833 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m24907(__this, ___callback, method) (( void (*) (InvokableCall_1_t3834 *, UnityAction_1_t3833 *, const MethodInfo*))InvokableCall_1__ctor_m24907_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m24908_gshared (InvokableCall_1_t3834 * __this, ObjectU5BU5D_t581* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m24908(__this, ___args, method) (( void (*) (InvokableCall_1_t3834 *, ObjectU5BU5D_t581*, const MethodInfo*))InvokableCall_1_Invoke_m24908_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m24909_gshared (InvokableCall_1_t3834 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m24909(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3834 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m24909_gshared)(__this, ___targetObj, ___method, method)
