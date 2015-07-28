#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t892;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1015;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2825;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m5751_gshared (UnityEvent_1_t892 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5751(__this, method) (( void (*) (UnityEvent_1_t892 *, const MethodInfo*))UnityEvent_1__ctor_m5751_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5764_gshared (UnityEvent_1_t892 * __this, UnityAction_1_t1015 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5764(__this, ___call, method) (( void (*) (UnityEvent_1_t892 *, UnityAction_1_t1015 *, const MethodInfo*))UnityEvent_1_AddListener_m5764_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5763_gshared (UnityEvent_1_t892 * __this, UnityAction_1_t1015 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5763(__this, ___call, method) (( void (*) (UnityEvent_1_t892 *, UnityAction_1_t1015 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5763_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6016_gshared (UnityEvent_1_t892 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m6016(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t892 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m6016_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2825 * UnityEvent_1_GetDelegate_m6017_gshared (UnityEvent_1_t892 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m6017(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2825 * (*) (UnityEvent_1_t892 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m6017_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2825 * UnityEvent_1_GetDelegate_m28977_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1015 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m28977(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t2825 * (*) (Object_t * /* static, unused */, UnityAction_1_t1015 *, const MethodInfo*))UnityEvent_1_GetDelegate_m28977_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5756_gshared (UnityEvent_1_t892 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5756(__this, ___arg0, method) (( void (*) (UnityEvent_1_t892 *, float, const MethodInfo*))UnityEvent_1_Invoke_m5756_gshared)(__this, ___arg0, method)
