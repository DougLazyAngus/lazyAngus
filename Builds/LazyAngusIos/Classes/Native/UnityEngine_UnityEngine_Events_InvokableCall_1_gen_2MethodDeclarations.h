#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t5815;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5814;
// System.Object[]
struct ObjectU5BU5D_t636;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m29062_gshared (InvokableCall_1_t5815 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m29062(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5815 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m29062_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m29063_gshared (InvokableCall_1_t5815 * __this, UnityAction_1_t5814 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m29063(__this, ___callback, method) (( void (*) (InvokableCall_1_t5815 *, UnityAction_1_t5814 *, const MethodInfo*))InvokableCall_1__ctor_m29063_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m29064_gshared (InvokableCall_1_t5815 * __this, ObjectU5BU5D_t636* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m29064(__this, ___args, method) (( void (*) (InvokableCall_1_t5815 *, ObjectU5BU5D_t636*, const MethodInfo*))InvokableCall_1_Invoke_m29064_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m29065_gshared (InvokableCall_1_t5815 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m29065(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5815 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m29065_gshared)(__this, ___targetObj, ___method, method)
