#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t9138;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t818;
// System.Object[]
struct ObjectU5BU5D_t700;

// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m67389(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t9138 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m32205_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m67390(__this, ___callback, method) (( void (*) (InvokableCall_1_t9138 *, UnityAction_1_t818 *, const MethodInfo*))InvokableCall_1__ctor_m32206_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m67391(__this, ___args, method) (( void (*) (InvokableCall_1_t9138 *, ObjectU5BU5D_t700*, const MethodInfo*))InvokableCall_1_Invoke_m32207_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m67392(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t9138 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m32208_gshared)(__this, ___targetObj, ___method, method)
