#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t5834;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t5835;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2834;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m29372_gshared (UnityEvent_1_t5834 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m29372(__this, method) (( void (*) (UnityEvent_1_t5834 *, const MethodInfo*))UnityEvent_1__ctor_m29372_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m29374_gshared (UnityEvent_1_t5834 * __this, UnityAction_1_t5835 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m29374(__this, ___call, method) (( void (*) (UnityEvent_1_t5834 *, UnityAction_1_t5835 *, const MethodInfo*))UnityEvent_1_AddListener_m29374_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m29376_gshared (UnityEvent_1_t5834 * __this, UnityAction_1_t5835 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m29376(__this, ___call, method) (( void (*) (UnityEvent_1_t5834 *, UnityAction_1_t5835 *, const MethodInfo*))UnityEvent_1_RemoveListener_m29376_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m29377_gshared (UnityEvent_1_t5834 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m29377(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5834 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m29377_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2834 * UnityEvent_1_GetDelegate_m29378_gshared (UnityEvent_1_t5834 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29378(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2834 * (*) (UnityEvent_1_t5834 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m29378_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2834 * UnityEvent_1_GetDelegate_m29380_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5835 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29380(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2834 * (*) (Object_t * /* static, unused */, UnityAction_1_t5835 *, const MethodInfo*))UnityEvent_1_GetDelegate_m29380_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m29381_gshared (UnityEvent_1_t5834 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m29381(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5834 *, uint8_t, const MethodInfo*))UnityEvent_1_Invoke_m29381_gshared)(__this, ___arg0, method)
