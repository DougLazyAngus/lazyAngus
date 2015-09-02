#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DebugLogPropagate
struct DebugLogPropagate_t534;
// System.String
struct String_t;
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void DebugLogPropagate::.ctor()
extern "C" void DebugLogPropagate__ctor_m2884 (DebugLogPropagate_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugLogPropagate::LogInIOS(System.String)
extern "C" void DebugLogPropagate_LogInIOS_m2885 (Object_t * __this /* static, unused */, String_t* ___testArg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugLogPropagate::OnEnable()
extern "C" void DebugLogPropagate_OnEnable_m2886 (DebugLogPropagate_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugLogPropagate::OnDisable()
extern "C" void DebugLogPropagate_OnDisable_m2887 (DebugLogPropagate_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugLogPropagate::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C" void DebugLogPropagate_HandleLog_m2888 (DebugLogPropagate_t534 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
