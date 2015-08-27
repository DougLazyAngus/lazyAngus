#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t2887;
// UnityEngine.Object
struct Object_t704;
struct Object_t704_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2883;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2884;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t2892;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C" void PersistentCall__ctor_m10061 (PersistentCall_t2887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t704 * PersistentCall_get_target_m10062 (PersistentCall_t2887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m10063 (PersistentCall_t2887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m10064 (PersistentCall_t2887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t2883 * PersistentCall_get_arguments_m10065 (PersistentCall_t2887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C" bool PersistentCall_IsValid_m10066 (PersistentCall_t2887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C" BaseInvokableCall_t2884 * PersistentCall_GetRuntimeCall_m10067 (PersistentCall_t2887 * __this, UnityEventBase_t2892 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C" BaseInvokableCall_t2884 * PersistentCall_GetObjectCall_m10068 (Object_t * __this /* static, unused */, Object_t704 * ___target, MethodInfo_t * ___method, ArgumentCache_t2883 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
