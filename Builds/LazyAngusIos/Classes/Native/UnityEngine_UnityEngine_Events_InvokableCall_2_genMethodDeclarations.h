#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t4068;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t581;

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_2__ctor_m27999_gshared (InvokableCall_2_t4068 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_2__ctor_m27999(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_2_t4068 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_2__ctor_m27999_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_2_Invoke_m28000_gshared (InvokableCall_2_t4068 * __this, ObjectU5BU5D_t581* ___args, const MethodInfo* method);
#define InvokableCall_2_Invoke_m28000(__this, ___args, method) (( void (*) (InvokableCall_2_t4068 *, ObjectU5BU5D_t581*, const MethodInfo*))InvokableCall_2_Invoke_m28000_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m28001_gshared (InvokableCall_2_t4068 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_2_Find_m28001(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_2_t4068 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_2_Find_m28001_gshared)(__this, ___targetObj, ___method, method)
