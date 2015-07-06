#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t3976;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t509;

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_3__ctor_m26879_gshared (InvokableCall_3_t3976 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_3__ctor_m26879(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_3_t3976 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m26879_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_3_Invoke_m26880_gshared (InvokableCall_3_t3976 * __this, ObjectU5BU5D_t509* ___args, const MethodInfo* method);
#define InvokableCall_3_Invoke_m26880(__this, ___args, method) (( void (*) (InvokableCall_3_t3976 *, ObjectU5BU5D_t509*, const MethodInfo*))InvokableCall_3_Invoke_m26880_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_3_Find_m26881_gshared (InvokableCall_3_t3976 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_3_Find_m26881(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_3_t3976 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m26881_gshared)(__this, ___targetObj, ___method, method)
