#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t4073;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t582;

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_4__ctor_m28016_gshared (InvokableCall_4_t4073 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_4__ctor_m28016(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_4_t4073 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4__ctor_m28016_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_4_Invoke_m28017_gshared (InvokableCall_4_t4073 * __this, ObjectU5BU5D_t582* ___args, const MethodInfo* method);
#define InvokableCall_4_Invoke_m28017(__this, ___args, method) (( void (*) (InvokableCall_4_t4073 *, ObjectU5BU5D_t582*, const MethodInfo*))InvokableCall_4_Invoke_m28017_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m28018_gshared (InvokableCall_4_t4073 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_4_Find_m28018(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_4_t4073 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4_Find_m28018_gshared)(__this, ___targetObj, ___method, method)
