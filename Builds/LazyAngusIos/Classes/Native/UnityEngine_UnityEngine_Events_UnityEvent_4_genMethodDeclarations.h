#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t9148;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2901;

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_4__ctor_m67592_gshared (UnityEvent_4_t9148 * __this, const MethodInfo* method);
#define UnityEvent_4__ctor_m67592(__this, method) (( void (*) (UnityEvent_4_t9148 *, const MethodInfo*))UnityEvent_4__ctor_m67592_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m67593_gshared (UnityEvent_4_t9148 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m67593(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_4_t9148 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_4_FindMethod_Impl_m67593_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2901 * UnityEvent_4_GetDelegate_m67594_gshared (UnityEvent_4_t9148 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_4_GetDelegate_m67594(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t2901 * (*) (UnityEvent_4_t9148 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_4_GetDelegate_m67594_gshared)(__this, ___target, ___theFunction, method)
