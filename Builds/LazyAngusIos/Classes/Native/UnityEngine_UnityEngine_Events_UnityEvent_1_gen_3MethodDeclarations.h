#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t857;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3833;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1260;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m5466_gshared (UnityEvent_1_t857 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5466(__this, method) (( void (*) (UnityEvent_1_t857 *, const MethodInfo*))UnityEvent_1__ctor_m5466_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m24899_gshared (UnityEvent_1_t857 * __this, UnityAction_1_t3833 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m24899(__this, ___call, method) (( void (*) (UnityEvent_1_t857 *, UnityAction_1_t3833 *, const MethodInfo*))UnityEvent_1_AddListener_m24899_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m24900_gshared (UnityEvent_1_t857 * __this, UnityAction_1_t3833 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m24900(__this, ___call, method) (( void (*) (UnityEvent_1_t857 *, UnityAction_1_t3833 *, const MethodInfo*))UnityEvent_1_RemoveListener_m24900_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5723_gshared (UnityEvent_1_t857 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5723(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t857 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5723_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1260 * UnityEvent_1_GetDelegate_m5724_gshared (UnityEvent_1_t857 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5724(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1260 * (*) (UnityEvent_1_t857 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5724_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1260 * UnityEvent_1_GetDelegate_m24901_gshared (Object_t * __this /* static, unused */, UnityAction_1_t3833 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m24901(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1260 * (*) (Object_t * /* static, unused */, UnityAction_1_t3833 *, const MethodInfo*))UnityEvent_1_GetDelegate_m24901_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5475_gshared (UnityEvent_1_t857 * __this, Vector2_t68  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5475(__this, ___arg0, method) (( void (*) (UnityEvent_1_t857 *, Vector2_t68 , const MethodInfo*))UnityEvent_1_Invoke_m5475_gshared)(__this, ___arg0, method)
