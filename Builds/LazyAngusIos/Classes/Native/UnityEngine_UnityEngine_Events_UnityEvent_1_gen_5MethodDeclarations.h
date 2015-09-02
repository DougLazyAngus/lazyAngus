#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t5792;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5791;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2900;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m27954_gshared (UnityEvent_1_t5792 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m27954(__this, method) (( void (*) (UnityEvent_1_t5792 *, const MethodInfo*))UnityEvent_1__ctor_m27954_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m27955_gshared (UnityEvent_1_t5792 * __this, UnityAction_1_t5791 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m27955(__this, ___call, method) (( void (*) (UnityEvent_1_t5792 *, UnityAction_1_t5791 *, const MethodInfo*))UnityEvent_1_AddListener_m27955_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m27957_gshared (UnityEvent_1_t5792 * __this, UnityAction_1_t5791 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m27957(__this, ___call, method) (( void (*) (UnityEvent_1_t5792 *, UnityAction_1_t5791 *, const MethodInfo*))UnityEvent_1_RemoveListener_m27957_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m27958_gshared (UnityEvent_1_t5792 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m27958(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5792 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m27958_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2900 * UnityEvent_1_GetDelegate_m27959_gshared (UnityEvent_1_t5792 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m27959(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2900 * (*) (UnityEvent_1_t5792 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m27959_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2900 * UnityEvent_1_GetDelegate_m27961_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5791 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m27961(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2900 * (*) (Object_t * /* static, unused */, UnityAction_1_t5791 *, const MethodInfo*))UnityEvent_1_GetDelegate_m27961_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m27962_gshared (UnityEvent_1_t5792 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m27962(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5792 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m27962_gshared)(__this, ___arg0, method)
