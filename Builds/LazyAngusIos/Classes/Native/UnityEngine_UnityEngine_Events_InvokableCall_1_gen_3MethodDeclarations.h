#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t5837;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t5836;
// System.Object[]
struct ObjectU5BU5D_t637;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m29391_gshared (InvokableCall_1_t5837 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m29391(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5837 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m29391_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m29392_gshared (InvokableCall_1_t5837 * __this, UnityAction_1_t5836 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m29392(__this, ___callback, method) (( void (*) (InvokableCall_1_t5837 *, UnityAction_1_t5836 *, const MethodInfo*))InvokableCall_1__ctor_m29392_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m29393_gshared (InvokableCall_1_t5837 * __this, ObjectU5BU5D_t637* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m29393(__this, ___args, method) (( void (*) (InvokableCall_1_t5837 *, ObjectU5BU5D_t637*, const MethodInfo*))InvokableCall_1_Invoke_m29393_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m29394_gshared (InvokableCall_1_t5837 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m29394(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5837 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m29394_gshared)(__this, ___targetObj, ___method, method)
