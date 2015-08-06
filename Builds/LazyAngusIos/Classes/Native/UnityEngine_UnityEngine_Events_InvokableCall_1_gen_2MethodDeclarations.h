#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t5814;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5813;
// System.Object[]
struct ObjectU5BU5D_t635;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m29055_gshared (InvokableCall_1_t5814 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m29055(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5814 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m29055_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m29056_gshared (InvokableCall_1_t5814 * __this, UnityAction_1_t5813 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m29056(__this, ___callback, method) (( void (*) (InvokableCall_1_t5814 *, UnityAction_1_t5813 *, const MethodInfo*))InvokableCall_1__ctor_m29056_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m29057_gshared (InvokableCall_1_t5814 * __this, ObjectU5BU5D_t635* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m29057(__this, ___args, method) (( void (*) (InvokableCall_1_t5814 *, ObjectU5BU5D_t635*, const MethodInfo*))InvokableCall_1_Invoke_m29057_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m29058_gshared (InvokableCall_1_t5814 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m29058(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5814 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m29058_gshared)(__this, ___targetObj, ___method, method)
