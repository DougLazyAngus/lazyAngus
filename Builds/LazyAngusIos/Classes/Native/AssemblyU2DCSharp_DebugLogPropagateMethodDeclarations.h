﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DebugLogPropagate
struct DebugLogPropagate_t409;
// System.String
struct String_t;
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void DebugLogPropagate::.ctor()
extern "C" void DebugLogPropagate__ctor_m1889 (DebugLogPropagate_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugLogPropagate::LogInIOS(System.String)
extern "C" void DebugLogPropagate_LogInIOS_m1890 (Object_t * __this /* static, unused */, String_t* ___testArg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugLogPropagate::OnEnable()
extern "C" void DebugLogPropagate_OnEnable_m1891 (DebugLogPropagate_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugLogPropagate::OnDisable()
extern "C" void DebugLogPropagate_OnDisable_m1892 (DebugLogPropagate_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugLogPropagate::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C" void DebugLogPropagate_HandleLog_m1893 (DebugLogPropagate_t409 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
