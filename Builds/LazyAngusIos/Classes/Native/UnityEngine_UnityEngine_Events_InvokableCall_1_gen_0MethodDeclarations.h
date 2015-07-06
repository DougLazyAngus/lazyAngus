#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t3674;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t852;
// System.Object[]
struct ObjectU5BU5D_t509;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m22777_gshared (InvokableCall_1_t3674 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m22777(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3674 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m22777_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m22778_gshared (InvokableCall_1_t3674 * __this, UnityAction_1_t852 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m22778(__this, ___callback, method) (( void (*) (InvokableCall_1_t3674 *, UnityAction_1_t852 *, const MethodInfo*))InvokableCall_1__ctor_m22778_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m22779_gshared (InvokableCall_1_t3674 * __this, ObjectU5BU5D_t509* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m22779(__this, ___args, method) (( void (*) (InvokableCall_1_t3674 *, ObjectU5BU5D_t509*, const MethodInfo*))InvokableCall_1_Invoke_m22779_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m22780_gshared (InvokableCall_1_t3674 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m22780(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3674 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m22780_gshared)(__this, ___targetObj, ___method, method)
