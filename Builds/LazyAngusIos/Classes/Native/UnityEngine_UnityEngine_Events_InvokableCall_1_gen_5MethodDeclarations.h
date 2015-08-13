#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t8561;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t800;
// System.Object[]
struct ObjectU5BU5D_t682;

// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m62635(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t8561 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m27510_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m62636(__this, ___callback, method) (( void (*) (InvokableCall_1_t8561 *, UnityAction_1_t800 *, const MethodInfo*))InvokableCall_1__ctor_m27511_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m62637(__this, ___args, method) (( void (*) (InvokableCall_1_t8561 *, ObjectU5BU5D_t682*, const MethodInfo*))InvokableCall_1_Invoke_m27512_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m62638(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t8561 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m27513_gshared)(__this, ___targetObj, ___method, method)
