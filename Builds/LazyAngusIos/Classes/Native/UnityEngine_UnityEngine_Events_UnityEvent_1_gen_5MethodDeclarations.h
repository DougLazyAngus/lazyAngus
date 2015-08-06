#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t5724;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5693;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2833;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m27515_gshared (UnityEvent_1_t5724 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m27515(__this, method) (( void (*) (UnityEvent_1_t5724 *, const MethodInfo*))UnityEvent_1__ctor_m27515_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m27517_gshared (UnityEvent_1_t5724 * __this, UnityAction_1_t5693 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m27517(__this, ___call, method) (( void (*) (UnityEvent_1_t5724 *, UnityAction_1_t5693 *, const MethodInfo*))UnityEvent_1_AddListener_m27517_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m27519_gshared (UnityEvent_1_t5724 * __this, UnityAction_1_t5693 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m27519(__this, ___call, method) (( void (*) (UnityEvent_1_t5724 *, UnityAction_1_t5693 *, const MethodInfo*))UnityEvent_1_RemoveListener_m27519_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m27520_gshared (UnityEvent_1_t5724 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m27520(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5724 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m27520_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2833 * UnityEvent_1_GetDelegate_m27521_gshared (UnityEvent_1_t5724 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m27521(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2833 * (*) (UnityEvent_1_t5724 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m27521_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2833 * UnityEvent_1_GetDelegate_m27523_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5693 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m27523(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2833 * (*) (Object_t * /* static, unused */, UnityAction_1_t5693 *, const MethodInfo*))UnityEvent_1_GetDelegate_m27523_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m27524_gshared (UnityEvent_1_t5724 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m27524(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5724 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m27524_gshared)(__this, ___arg0, method)
