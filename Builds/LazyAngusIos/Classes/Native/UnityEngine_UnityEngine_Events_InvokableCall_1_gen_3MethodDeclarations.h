#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t5833;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t5832;
// System.Object[]
struct ObjectU5BU5D_t634;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m29363_gshared (InvokableCall_1_t5833 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m29363(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5833 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m29363_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m29364_gshared (InvokableCall_1_t5833 * __this, UnityAction_1_t5832 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m29364(__this, ___callback, method) (( void (*) (InvokableCall_1_t5833 *, UnityAction_1_t5832 *, const MethodInfo*))InvokableCall_1__ctor_m29364_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m29365_gshared (InvokableCall_1_t5833 * __this, ObjectU5BU5D_t634* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m29365(__this, ___args, method) (( void (*) (InvokableCall_1_t5833 *, ObjectU5BU5D_t634*, const MethodInfo*))InvokableCall_1_Invoke_m29365_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m29366_gshared (InvokableCall_1_t5833 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m29366(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5833 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m29366_gshared)(__this, ___targetObj, ___method, method)
