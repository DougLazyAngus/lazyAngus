#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t5835;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t5836;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2835;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m29380_gshared (UnityEvent_1_t5835 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m29380(__this, method) (( void (*) (UnityEvent_1_t5835 *, const MethodInfo*))UnityEvent_1__ctor_m29380_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m29382_gshared (UnityEvent_1_t5835 * __this, UnityAction_1_t5836 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m29382(__this, ___call, method) (( void (*) (UnityEvent_1_t5835 *, UnityAction_1_t5836 *, const MethodInfo*))UnityEvent_1_AddListener_m29382_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m29384_gshared (UnityEvent_1_t5835 * __this, UnityAction_1_t5836 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m29384(__this, ___call, method) (( void (*) (UnityEvent_1_t5835 *, UnityAction_1_t5836 *, const MethodInfo*))UnityEvent_1_RemoveListener_m29384_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m29385_gshared (UnityEvent_1_t5835 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m29385(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5835 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m29385_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2835 * UnityEvent_1_GetDelegate_m29386_gshared (UnityEvent_1_t5835 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29386(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2835 * (*) (UnityEvent_1_t5835 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m29386_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2835 * UnityEvent_1_GetDelegate_m29388_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5836 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m29388(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2835 * (*) (Object_t * /* static, unused */, UnityAction_1_t5836 *, const MethodInfo*))UnityEvent_1_GetDelegate_m29388_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m29389_gshared (UnityEvent_1_t5835 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m29389(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5835 *, uint8_t, const MethodInfo*))UnityEvent_1_Invoke_m29389_gshared)(__this, ___arg0, method)
