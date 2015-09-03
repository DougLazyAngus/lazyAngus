#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t916;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2900;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m6038_gshared (UnityEvent_1_t916 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m6038(__this, method) (( void (*) (UnityEvent_1_t916 *, const MethodInfo*))UnityEvent_1__ctor_m6038_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m6040_gshared (UnityEvent_1_t916 * __this, UnityAction_1_t1056 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m6040(__this, ___call, method) (( void (*) (UnityEvent_1_t916 *, UnityAction_1_t1056 *, const MethodInfo*))UnityEvent_1_AddListener_m6040_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m33372_gshared (UnityEvent_1_t916 * __this, UnityAction_1_t1056 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m33372(__this, ___call, method) (( void (*) (UnityEvent_1_t916 *, UnityAction_1_t1056 *, const MethodInfo*))UnityEvent_1_RemoveListener_m33372_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6485_gshared (UnityEvent_1_t916 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6485(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t916 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6485_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2900 * UnityEvent_1_GetDelegate_m6486_gshared (UnityEvent_1_t916 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6486(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2900 * (*) (UnityEvent_1_t916 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6486_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2900 * UnityEvent_1_GetDelegate_m33373_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1056 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m33373(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2900 * (*) (Object_t * /* static, unused */, UnityAction_1_t1056 *, const MethodInfo*))UnityEvent_1_GetDelegate_m33373_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m6039_gshared (UnityEvent_1_t916 * __this, Color_t325  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m6039(__this, ___arg0, method) (( void (*) (UnityEvent_1_t916 *, Color_t325 , const MethodInfo*))UnityEvent_1_Invoke_m6039_gshared)(__this, ___arg0, method)
