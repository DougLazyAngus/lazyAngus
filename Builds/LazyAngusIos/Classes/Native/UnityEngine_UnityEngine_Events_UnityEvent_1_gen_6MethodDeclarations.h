#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t5911;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t5912;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2881;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m30145_gshared (UnityEvent_1_t5911 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m30145(__this, method) (( void (*) (UnityEvent_1_t5911 *, const MethodInfo*))UnityEvent_1__ctor_m30145_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m30147_gshared (UnityEvent_1_t5911 * __this, UnityAction_1_t5912 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m30147(__this, ___call, method) (( void (*) (UnityEvent_1_t5911 *, UnityAction_1_t5912 *, const MethodInfo*))UnityEvent_1_AddListener_m30147_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m30149_gshared (UnityEvent_1_t5911 * __this, UnityAction_1_t5912 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m30149(__this, ___call, method) (( void (*) (UnityEvent_1_t5911 *, UnityAction_1_t5912 *, const MethodInfo*))UnityEvent_1_RemoveListener_m30149_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m30150_gshared (UnityEvent_1_t5911 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m30150(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5911 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m30150_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2881 * UnityEvent_1_GetDelegate_m30151_gshared (UnityEvent_1_t5911 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m30151(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2881 * (*) (UnityEvent_1_t5911 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m30151_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2881 * UnityEvent_1_GetDelegate_m30153_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5912 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m30153(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2881 * (*) (Object_t * /* static, unused */, UnityAction_1_t5912 *, const MethodInfo*))UnityEvent_1_GetDelegate_m30153_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m30154_gshared (UnityEvent_1_t5911 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m30154(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5911 *, uint8_t, const MethodInfo*))UnityEvent_1_Invoke_m30154_gshared)(__this, ___arg0, method)
