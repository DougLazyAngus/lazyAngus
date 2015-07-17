#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t790;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t931;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1259;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m5248_gshared (UnityEvent_1_t790 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5248(__this, method) (( void (*) (UnityEvent_1_t790 *, const MethodInfo*))UnityEvent_1__ctor_m5248_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5250_gshared (UnityEvent_1_t790 * __this, UnityAction_1_t931 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5250(__this, ___call, method) (( void (*) (UnityEvent_1_t790 *, UnityAction_1_t931 *, const MethodInfo*))UnityEvent_1_AddListener_m5250_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m23891_gshared (UnityEvent_1_t790 * __this, UnityAction_1_t931 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m23891(__this, ___call, method) (( void (*) (UnityEvent_1_t790 *, UnityAction_1_t931 *, const MethodInfo*))UnityEvent_1_RemoveListener_m23891_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5704_gshared (UnityEvent_1_t790 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5704(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t790 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5704_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1259 * UnityEvent_1_GetDelegate_m5705_gshared (UnityEvent_1_t790 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5705(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1259 * (*) (UnityEvent_1_t790 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5705_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1259 * UnityEvent_1_GetDelegate_m23892_gshared (Object_t * __this /* static, unused */, UnityAction_1_t931 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m23892(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1259 * (*) (Object_t * /* static, unused */, UnityAction_1_t931 *, const MethodInfo*))UnityEvent_1_GetDelegate_m23892_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5249_gshared (UnityEvent_1_t790 * __this, Color_t283  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5249(__this, ___arg0, method) (( void (*) (UnityEvent_1_t790 *, Color_t283 , const MethodInfo*))UnityEvent_1_Invoke_m5249_gshared)(__this, ___arg0, method)
