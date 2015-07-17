#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t849;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t972;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1259;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m5448_gshared (UnityEvent_1_t849 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5448(__this, method) (( void (*) (UnityEvent_1_t849 *, const MethodInfo*))UnityEvent_1__ctor_m5448_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5461_gshared (UnityEvent_1_t849 * __this, UnityAction_1_t972 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5461(__this, ___call, method) (( void (*) (UnityEvent_1_t849 *, UnityAction_1_t972 *, const MethodInfo*))UnityEvent_1_AddListener_m5461_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5460_gshared (UnityEvent_1_t849 * __this, UnityAction_1_t972 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5460(__this, ___call, method) (( void (*) (UnityEvent_1_t849 *, UnityAction_1_t972 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5460_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5713_gshared (UnityEvent_1_t849 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5713(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t849 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5713_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1259 * UnityEvent_1_GetDelegate_m5714_gshared (UnityEvent_1_t849 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5714(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1259 * (*) (UnityEvent_1_t849 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5714_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1259 * UnityEvent_1_GetDelegate_m24883_gshared (Object_t * __this /* static, unused */, UnityAction_1_t972 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m24883(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1259 * (*) (Object_t * /* static, unused */, UnityAction_1_t972 *, const MethodInfo*))UnityEvent_1_GetDelegate_m24883_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5453_gshared (UnityEvent_1_t849 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5453(__this, ___arg0, method) (( void (*) (UnityEvent_1_t849 *, float, const MethodInfo*))UnityEvent_1_Invoke_m5453_gshared)(__this, ___arg0, method)
