#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t6292;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6291;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2911;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m31611_gshared (UnityEvent_1_t6292 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m31611(__this, method) (( void (*) (UnityEvent_1_t6292 *, const MethodInfo*))UnityEvent_1__ctor_m31611_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m31612_gshared (UnityEvent_1_t6292 * __this, UnityAction_1_t6291 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m31612(__this, ___call, method) (( void (*) (UnityEvent_1_t6292 *, UnityAction_1_t6291 *, const MethodInfo*))UnityEvent_1_AddListener_m31612_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m31614_gshared (UnityEvent_1_t6292 * __this, UnityAction_1_t6291 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m31614(__this, ___call, method) (( void (*) (UnityEvent_1_t6292 *, UnityAction_1_t6291 *, const MethodInfo*))UnityEvent_1_RemoveListener_m31614_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m31615_gshared (UnityEvent_1_t6292 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m31615(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t6292 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m31615_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2911 * UnityEvent_1_GetDelegate_m31616_gshared (UnityEvent_1_t6292 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m31616(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2911 * (*) (UnityEvent_1_t6292 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m31616_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2911 * UnityEvent_1_GetDelegate_m31618_gshared (Object_t * __this /* static, unused */, UnityAction_1_t6291 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m31618(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2911 * (*) (Object_t * /* static, unused */, UnityAction_1_t6291 *, const MethodInfo*))UnityEvent_1_GetDelegate_m31618_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m31619_gshared (UnityEvent_1_t6292 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m31619(__this, ___arg0, method) (( void (*) (UnityEvent_1_t6292 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m31619_gshared)(__this, ___arg0, method)
