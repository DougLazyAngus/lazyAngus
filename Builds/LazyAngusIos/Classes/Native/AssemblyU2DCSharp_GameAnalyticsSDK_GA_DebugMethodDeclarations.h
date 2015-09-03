#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameAnalyticsSDK.GA_Debug
struct GA_Debug_t461;
// System.String
struct String_t;
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void GameAnalyticsSDK.GA_Debug::.cctor()
extern "C" void GA_Debug__cctor_m2575 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Debug::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C" void GA_Debug_HandleLog_m2576 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Debug::SubmitError(System.String,UnityEngine.LogType)
extern "C" void GA_Debug_SubmitError_m2577 (Object_t * __this /* static, unused */, String_t* ___message, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameAnalyticsSDK.GA_Debug::EnabledLog()
extern "C" void GA_Debug_EnabledLog_m2578 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
