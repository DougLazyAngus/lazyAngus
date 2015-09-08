#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t9153;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2904;

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_4__ctor_m67604_gshared (UnityEvent_4_t9153 * __this, const MethodInfo* method);
#define UnityEvent_4__ctor_m67604(__this, method) (( void (*) (UnityEvent_4_t9153 *, const MethodInfo*))UnityEvent_4__ctor_m67604_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m67605_gshared (UnityEvent_4_t9153 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m67605(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_4_t9153 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_4_FindMethod_Impl_m67605_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2904 * UnityEvent_4_GetDelegate_m67606_gshared (UnityEvent_4_t9153 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_4_GetDelegate_m67606(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2904 * (*) (UnityEvent_4_t9153 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_4_GetDelegate_m67606_gshared)(__this, ___target, ___theFunction, method)
