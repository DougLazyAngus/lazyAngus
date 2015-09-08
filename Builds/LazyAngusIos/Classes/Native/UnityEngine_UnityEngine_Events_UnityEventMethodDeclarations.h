#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent
struct UnityEvent_t924;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2904;

// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern "C" void UnityEvent__ctor_m6054 (UnityEvent_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m6502 (UnityEvent_t924 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2904 * UnityEvent_GetDelegate_m6503 (UnityEvent_t924 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m6056 (UnityEvent_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
