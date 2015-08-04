#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t5725;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5693;
// System.Object[]
struct ObjectU5BU5D_t636;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m27525_gshared (InvokableCall_1_t5725 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m27525(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5725 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m27525_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m27526_gshared (InvokableCall_1_t5725 * __this, UnityAction_1_t5693 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m27526(__this, ___callback, method) (( void (*) (InvokableCall_1_t5725 *, UnityAction_1_t5693 *, const MethodInfo*))InvokableCall_1__ctor_m27526_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m27527_gshared (InvokableCall_1_t5725 * __this, ObjectU5BU5D_t636* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m27527(__this, ___args, method) (( void (*) (InvokableCall_1_t5725 *, ObjectU5BU5D_t636*, const MethodInfo*))InvokableCall_1_Invoke_m27527_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m27528_gshared (InvokableCall_1_t5725 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m27528(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5725 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m27528_gshared)(__this, ___targetObj, ___method, method)
